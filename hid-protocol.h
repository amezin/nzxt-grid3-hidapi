
//--------------------------------------------------------------------------------
// Decoded Application Collection
//--------------------------------------------------------------------------------

/*
06 00FF      (GLOBAL) USAGE_PAGE         0xFF00 Vendor-defined 
09 01        (LOCAL)  USAGE              0xFF000001 <-- Warning: Undocumented usage (document it by inserting 0001 into file FF00.conf)
A1 01        (MAIN)   COLLECTION         0x01 Application (Usage=0xFF000001: Page=Vendor-defined, Usage=, Type=) <-- Error: COLLECTION must be preceded by a USAGE
85 01          (GLOBAL) REPORT_ID          0x01 (1)  
09 01          (LOCAL)  USAGE              0xFF000001 <-- Warning: Undocumented usage (document it by inserting 0001 into file FF00.conf)
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0)  <-- Info: Consider replacing 15 00 with 14
26 FF00        (GLOBAL) LOGICAL_MAXIMUM    0x00FF (255)  
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field  
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
B1 82          (MAIN)   FEATURE            0x00000082 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 1=Volatile 0=Bitmap 
85 01          (GLOBAL) REPORT_ID          0x01 (1) <-- Redundant: REPORT_ID is already 0x01 
09 01          (LOCAL)  USAGE              0xFF000001 <-- Warning: Undocumented usage (document it by inserting 0001 into file FF00.conf)
91 82          (MAIN)   OUTPUT             0x00000082 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 1=Volatile 0=Bitmap 
85 02          (GLOBAL) REPORT_ID          0x02 (2)  
09 02          (LOCAL)  USAGE              0xFF000002 <-- Warning: Undocumented usage (document it by inserting 0002 into file FF00.conf)
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
26 FF00        (GLOBAL) LOGICAL_MAXIMUM    0x00FF (255) <-- Redundant: LOGICAL_MAXIMUM is already 255 
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field <-- Redundant: REPORT_SIZE is already 8 
95 40          (GLOBAL) REPORT_COUNT       0x40 (64) Number of fields  
B1 82          (MAIN)   FEATURE            0x00000082 (64 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 1=Volatile 0=Bitmap 
85 02          (GLOBAL) REPORT_ID          0x02 (2) <-- Redundant: REPORT_ID is already 0x02 
09 02          (LOCAL)  USAGE              0xFF000002 <-- Warning: Undocumented usage (document it by inserting 0002 into file FF00.conf)
91 82          (MAIN)   OUTPUT             0x00000082 (64 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 1=Volatile 0=Bitmap 
85 03          (GLOBAL) REPORT_ID          0x03 (3)  
09 03          (LOCAL)  USAGE              0xFF000003 <-- Warning: Undocumented usage (document it by inserting 0003 into file FF00.conf)
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
26 FF00        (GLOBAL) LOGICAL_MAXIMUM    0x00FF (255) <-- Redundant: LOGICAL_MAXIMUM is already 255 
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field <-- Redundant: REPORT_SIZE is already 8 
95 40          (GLOBAL) REPORT_COUNT       0x40 (64) Number of fields <-- Redundant: REPORT_COUNT is already 64 
B1 82          (MAIN)   FEATURE            0x00000082 (64 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 1=Volatile 0=Bitmap 
85 03          (GLOBAL) REPORT_ID          0x03 (3) <-- Redundant: REPORT_ID is already 0x03 
09 03          (LOCAL)  USAGE              0xFF000003 <-- Warning: Undocumented usage (document it by inserting 0003 into file FF00.conf)
91 82          (MAIN)   OUTPUT             0x00000082 (64 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 1=Volatile 0=Bitmap 
85 04          (GLOBAL) REPORT_ID          0x04 (4)  
09 04          (LOCAL)  USAGE              0xFF000004 <-- Warning: Undocumented usage (document it by inserting 0004 into file FF00.conf)
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field <-- Redundant: REPORT_SIZE is already 8 
95 14          (GLOBAL) REPORT_COUNT       0x14 (20) Number of fields  
81 82          (MAIN)   INPUT              0x00000082 (20 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 1=Volatile 0=Bitmap 
85 05          (GLOBAL) REPORT_ID          0x05 (5)  
09 05          (LOCAL)  USAGE              0xFF000005 <-- Warning: Undocumented usage (document it by inserting 0005 into file FF00.conf)
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field <-- Redundant: REPORT_SIZE is already 8 
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
81 82          (MAIN)   INPUT              0x00000082 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 1=Volatile 0=Bitmap 
C0           (MAIN)   END_COLLECTION     Application 
*/

//--------------------------------------------------------------------------------
// Vendor-defined featureReport 01 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x01 (1)
                                                     // Collection: CA:
  uint8_t  VEN_0001;                                 // Usage 0xFF000001: , Value = 0 to 255
} featureReport01_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 02 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x02 (2)
                                                     // Collection: CA:
  uint8_t  VEN_0002[64];                             // Usage 0xFF000002: , Value = 0 to 255
} featureReport02_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 03 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x03 (3)
                                                     // Collection: CA:
  uint8_t  VEN_0003[64];                             // Usage 0xFF000003: , Value = 0 to 255
} featureReport03_t;


//--------------------------------------------------------------------------------
// Vendor-defined inputReport 04 (Device --> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x04 (4)
                                                     // Collection: CA:
  uint8_t  VEN_0004[20];                             // Usage 0xFF000004: , Value = 0 to 255
} inputReport04_t;


//--------------------------------------------------------------------------------
// Vendor-defined inputReport 05 (Device --> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x05 (5)
                                                     // Collection: CA:
  uint8_t  VEN_0005;                                 // Usage 0xFF000005: , Value = 0 to 255
} inputReport05_t;


//--------------------------------------------------------------------------------
// Vendor-defined outputReport 01 (Device <-- Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x01 (1)
                                                     // Collection: CA:
  uint8_t  VEN_0001;                                 // Usage 0xFF000001: , Value = 0 to 255
} outputReport01_t;


//--------------------------------------------------------------------------------
// Vendor-defined outputReport 02 (Device <-- Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x02 (2)
                                                     // Collection: CA:
  uint8_t  VEN_0002[64];                             // Usage 0xFF000002: , Value = 0 to 255
} outputReport02_t;


//--------------------------------------------------------------------------------
// Vendor-defined outputReport 03 (Device <-- Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x03 (3)
                                                     // Collection: CA:
  uint8_t  VEN_0003[64];                             // Usage 0xFF000003: , Value = 0 to 255
} outputReport03_t;
