#include <stdint.h>

// https://makecode.com/_cdKWqYhY6EPr
const uint8_t mkcdLogo[] = {
    32, 32, 86, 143, 1, 152, 7, 142, 218, 112, 203, 126, 200, 120, 202, 126, 200, 56, 150, 71, 1, 147, 3, 165, 208, 143, 210, 142, 210, 142, 210, 142, 210, 142, 210, 138, 119, 207, 137, 215, 137, 215, 137, 215, 138, 119, 95, 200, 142, 199, 120, 15, 139, 63, 112, 15, 139, 63, 112, 15, 139, 199, 120, 15, 140, 63, 124, 3, 164, 3, 148, 99, 1, 145, 71, 205, 126, 200, 120, 202, 126, 200, 96, 216, 145, 7, 154, 1, 138};

// https://makecode.com/_7VxXm3JMPXfM - file
// https://makecode.com/_LuEUCsPEKUbs - download
const uint8_t fileLogo[] = {
32, 32, 71, 140, 201, 151, 1, 2, 146, 1, 2, 146, 63, 2, 151, 9, 153, 9, 153, 9, 146, 1, 9, 146, 3, 9, 146, 7, 9, 137, 205, 72, 140, 206, 36, 139, 207, 18, 138, 206, 36, 139, 205, 72, 149, 7, 9, 146, 3, 9, 146, 1, 9, 153, 9, 153, 9, 153, 9, 148, 63, 2, 146, 1, 2, 146, 1, 2, 146, 201, 191, 191, 191, 174
};

// https://makecode.com/_bmCew5Jr0cMK
const uint8_t pendriveLogo[] = {
32, 32, 71, 137, 215, 137, 1, 143, 1, 8, 146, 203, 149, 3, 8, 32, 139, 3, 8, 112, 3, 48, 14, 17, 68, 16, 102, 17, 3, 16, 103, 136, 125, 206, 6, 16, 3, 8, 103, 28, 34, 70, 32, 76, 35, 96, 7, 64, 1, 4, 12, 138, 3, 8, 146, 203, 149, 1, 8, 146, 1, 8, 146, 1,
120, 211, 191, 191, 191, 191, 191, 191, 191, 135
};

// https://makecode.com/_TTqbj705L4mr
const uint8_t arrowLogo[] = {
32, 32, 54, 137, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 146, 211, 142, 209, 144, 207, 146, 205, 148, 203, 150, 201, 152, 199, 154, 31, 154, 7, 154, 1, 191, 191, 191, 175
};

// https://makecode.com/_HTiagjK9wE1W
const uint8_t ghiLogo[] = {
32, 32, 98, 142, 3, 152, 9, 152, 33, 153, 33, 153, 63, 1, 145, 199, 14, 144, 202, 30, 142, 204, 30, 140, 205, 62, 140, 31, 120, 30, 138, 95, 111, 125, 139, 95, 109, 125, 138, 63, 91, 123, 3, 112, 63, 124, 62, 136, 209, 62, 135, 199, 135, 111, 15, 96, 199,
126, 125, 137, 201, 126, 126, 137, 63, 64, 123, 3, 96, 205, 62, 138, 31, 96, 125, 140, 205, 62, 140, 205, 62, 141, 203, 60, 143, 202, 30, 145, 199, 14, 146, 113, 2, 146, 97, 154, 17, 154, 7, 191, 141
};

const uint8_t font8[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x06, 0x5f, 0x5f, 0x06, 0x00, 0x00, 
0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x00, 
0x14, 0x7f, 0x7f, 0x14, 0x7f, 0x7f, 0x14, 0x00, 
0x24, 0x2e, 0x6b, 0x6b, 0x3a, 0x12, 0x00, 0x00, 
0x46, 0x66, 0x30, 0x18, 0x0c, 0x66, 0x62, 0x00, 
0x30, 0x7a, 0x4f, 0x5d, 0x37, 0x7a, 0x48, 0x00, 
0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1c, 0x3e, 0x63, 0x41, 0x00, 0x00, 0x00, 
0x00, 0x41, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00, 
0x08, 0x2a, 0x3e, 0x1c, 0x1c, 0x3e, 0x2a, 0x08, 
0x08, 0x08, 0x3e, 0x3e, 0x08, 0x08, 0x00, 0x00, 
0x00, 0x80, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 
0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 
0x3e, 0x7f, 0x71, 0x59, 0x4d, 0x7f, 0x3e, 0x00, 
0x40, 0x42, 0x7f, 0x7f, 0x40, 0x40, 0x00, 0x00, 
0x62, 0x73, 0x59, 0x49, 0x6f, 0x66, 0x00, 0x00, 
0x22, 0x63, 0x49, 0x49, 0x7f, 0x36, 0x00, 0x00, 
0x18, 0x1c, 0x16, 0x53, 0x7f, 0x7f, 0x50, 0x00, 
0x27, 0x67, 0x45, 0x45, 0x7d, 0x39, 0x00, 0x00, 
0x3c, 0x7e, 0x4b, 0x49, 0x79, 0x30, 0x00, 0x00, 
0x03, 0x03, 0x71, 0x79, 0x0f, 0x07, 0x00, 0x00, 
0x36, 0x7f, 0x49, 0x49, 0x7f, 0x36, 0x00, 0x00, 
0x06, 0x4f, 0x49, 0x69, 0x3f, 0x1e, 0x00, 0x00, 
0x00, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0xe6, 0x66, 0x00, 0x00, 0x00, 0x00, 
0x08, 0x1c, 0x36, 0x63, 0x41, 0x00, 0x00, 0x00, 
0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 
0x00, 0x41, 0x63, 0x36, 0x1c, 0x08, 0x00, 0x00, 
0x02, 0x03, 0x51, 0x59, 0x0f, 0x06, 0x00, 0x00, 
0x3e, 0x7f, 0x41, 0x5d, 0x5d, 0x1f, 0x1e, 0x00, 
0x7c, 0x7e, 0x13, 0x13, 0x7e, 0x7c, 0x00, 0x00, 
0x41, 0x7f, 0x7f, 0x49, 0x49, 0x7f, 0x36, 0x00, 
0x1c, 0x3e, 0x63, 0x41, 0x41, 0x63, 0x22, 0x00, 
0x41, 0x7f, 0x7f, 0x41, 0x63, 0x3e, 0x1c, 0x00, 
0x41, 0x7f, 0x7f, 0x49, 0x5d, 0x41, 0x63, 0x00, 
0x41, 0x7f, 0x7f, 0x49, 0x1d, 0x01, 0x03, 0x00, 
0x1c, 0x3e, 0x63, 0x41, 0x51, 0x73, 0x72, 0x00, 
0x7f, 0x7f, 0x08, 0x08, 0x7f, 0x7f, 0x00, 0x00, 
0x00, 0x41, 0x7f, 0x7f, 0x41, 0x00, 0x00, 0x00, 
0x30, 0x70, 0x40, 0x41, 0x7f, 0x3f, 0x01, 0x00, 
0x41, 0x7f, 0x7f, 0x08, 0x1c, 0x77, 0x63, 0x00, 
0x41, 0x7f, 0x7f, 0x41, 0x40, 0x60, 0x70, 0x00, 
0x7f, 0x7f, 0x0e, 0x1c, 0x0e, 0x7f, 0x7f, 0x00, 
0x7f, 0x7f, 0x06, 0x0c, 0x18, 0x7f, 0x7f, 0x00, 
0x1c, 0x3e, 0x63, 0x41, 0x63, 0x3e, 0x1c, 0x00, 
0x41, 0x7f, 0x7f, 0x49, 0x09, 0x0f, 0x06, 0x00, 
0x1e, 0x3f, 0x21, 0x71, 0x7f, 0x5e, 0x00, 0x00, 
0x41, 0x7f, 0x7f, 0x09, 0x19, 0x7f, 0x66, 0x00, 
0x26, 0x6f, 0x4d, 0x59, 0x73, 0x32, 0x00, 0x00, 
0x03, 0x41, 0x7f, 0x7f, 0x41, 0x03, 0x00, 0x00, 
0x7f, 0x7f, 0x40, 0x40, 0x7f, 0x7f, 0x00, 0x00, 
0x1f, 0x3f, 0x60, 0x60, 0x3f, 0x1f, 0x00, 0x00, 
0x7f, 0x7f, 0x30, 0x18, 0x30, 0x7f, 0x7f, 0x00, 
0x43, 0x67, 0x3c, 0x18, 0x3c, 0x67, 0x43, 0x00, 
0x07, 0x4f, 0x78, 0x78, 0x4f, 0x07, 0x00, 0x00, 
0x47, 0x63, 0x71, 0x59, 0x4d, 0x67, 0x73, 0x00, 
0x00, 0x7f, 0x7f, 0x41, 0x41, 0x00, 0x00, 0x00, 
0x01, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x00, 
0x00, 0x41, 0x41, 0x7f, 0x7f, 0x00, 0x00, 0x00, 
0x08, 0x0c, 0x06, 0x03, 0x06, 0x0c, 0x08, 0x00, 
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, 0x00, 
0x20, 0x74, 0x54, 0x54, 0x3c, 0x78, 0x40, 0x00, 
0x41, 0x7f, 0x3f, 0x48, 0x48, 0x78, 0x30, 0x00, 
0x38, 0x7c, 0x44, 0x44, 0x6c, 0x28, 0x00, 0x00, 
0x30, 0x78, 0x48, 0x49, 0x3f, 0x7f, 0x40, 0x00, 
0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00, 0x00, 
0x48, 0x7e, 0x7f, 0x49, 0x03, 0x02, 0x00, 0x00, 
0x98, 0xbc, 0xa4, 0xa4, 0xf8, 0x7c, 0x04, 0x00, 
0x41, 0x7f, 0x7f, 0x08, 0x04, 0x7c, 0x78, 0x00, 
0x00, 0x44, 0x7d, 0x7d, 0x40, 0x00, 0x00, 0x00, 
0x60, 0xe0, 0x80, 0x80, 0xfd, 0x7d, 0x00, 0x00, 
0x41, 0x7f, 0x7f, 0x10, 0x38, 0x6c, 0x44, 0x00, 
0x00, 0x41, 0x7f, 0x7f, 0x40, 0x00, 0x00, 0x00, 
0x7c, 0x7c, 0x18, 0x38, 0x1c, 0x7c, 0x78, 0x00, 
0x7c, 0x7c, 0x04, 0x04, 0x7c, 0x78, 0x00, 0x00, 
0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00, 0x00, 
0x84, 0xfc, 0xf8, 0xa4, 0x24, 0x3c, 0x18, 0x00, 
0x18, 0x3c, 0x24, 0xa4, 0xf8, 0xfc, 0x84, 0x00, 
0x44, 0x7c, 0x78, 0x4c, 0x04, 0x1c, 0x18, 0x00, 
0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00, 0x00, 
0x00, 0x04, 0x3e, 0x7f, 0x44, 0x24, 0x00, 0x00, 
0x3c, 0x7c, 0x40, 0x40, 0x3c, 0x7c, 0x40, 0x00, 
0x1c, 0x3c, 0x60, 0x60, 0x3c, 0x1c, 0x00, 0x00, 
0x3c, 0x7c, 0x70, 0x38, 0x70, 0x7c, 0x3c, 0x00, 
0x44, 0x6c, 0x38, 0x10, 0x38, 0x6c, 0x44, 0x00, 
0x9c, 0xbc, 0xa0, 0xa0, 0xfc, 0x7c, 0x00, 0x00, 
0x4c, 0x64, 0x74, 0x5c, 0x4c, 0x64, 0x00, 0x00, 
0x08, 0x08, 0x3e, 0x77, 0x41, 0x41, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, 0x00, 
0x41, 0x41, 0x77, 0x3e, 0x08, 0x08, 0x00, 0x00, 
0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
