#include <iostream>

#include <hidapi.h>

using namespace std;

void hid_cleanup()
{
    hid_exit();
}

void handle_input(hid_device *dev)
{
    uint8_t buffer[21];
    int nread = hid_read(dev, buffer, sizeof(buffer));
    if (nread == 21) {
        int fan = ((buffer[15] >> 4) & 0x0f);
        int new_rpm = (buffer[3] << 8) | buffer[4];
        std::cout << "Fan " << fan << " rpm: " << new_rpm << std::endl;
    }
}

void set_fan_speed(hid_device *dev, int id, int percent)
{
    uint8_t buffer[65] = {};
    buffer[0] = 0x02;
    buffer[1] = 0x4d;
    buffer[2] = uint8_t(id);
    buffer[4] = uint8_t(percent);
    auto written = hid_write(dev, buffer, sizeof (buffer));
    if (written != sizeof (buffer)) {
        std::cerr << "Write failed: " << hid_error(dev) << std::endl;
    }
}

int main()
{
    if (hid_init() != 0) {
        perror("hid_init failed");
        return 1;
    }

    atexit(hid_cleanup);

    auto dev = hid_open(0x1e71, 0x1711, nullptr);
    if (!dev) {
        perror("hid_open failed");
        return 1;
    }

    uint8_t init_seq01[] = { 0x01, 0x5c };
    hid_write(dev, init_seq01, sizeof (init_seq01));
    uint8_t init_seq02[] = { 0x01, 0x5d };
    hid_write(dev, init_seq02, sizeof (init_seq02));
    uint8_t init_seq03[] = { 0x01, 0x59 };
    hid_write(dev, init_seq03, sizeof (init_seq03));

    handle_input(dev);

    for (int i = 0; i < 6; i++) {
        set_fan_speed(dev, i, 100);
    }

    for (;;) {
        handle_input(dev);
    }

    hid_close(dev);

    return 0;
}
