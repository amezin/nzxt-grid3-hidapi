cmake_minimum_required(VERSION 3.5)

project(grid3test-hidapi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_search_module(hidapi REQUIRED IMPORTED_TARGET hidapi-libusb)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PkgConfig::hidapi)
