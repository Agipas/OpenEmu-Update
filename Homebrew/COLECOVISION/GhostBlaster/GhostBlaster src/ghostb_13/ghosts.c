
#include <coleco.h>

const byte sprAlphaRLE[] = {
    0x7f,0x00,0x03,0x07,0x25,0x0c,0x5f,0x5f,0x4f,0x1e,0x1e,0x16,0x13,0x1b,0x19,0x3c,0x0c,0x00,0x60,0xf0,0xd0,0x98,0xfc,0xfc,0xf8,0x5c,0x1c,0x94,0xf4,0xe6,0x06,0x0f,
    0x03,0x00,0x03,0x07,0x05,0x2c,0x1f,0x5f,0x4e,0x1e,0x1e,0x16,0x13,0x1b,0x19,0x3c,0x0c,0x00,0x60,0xf0,0xd0,0x98,0xfc,0xfc,0x58,0x1c,0x1c,0x94,0xf4,0xe6,0x06,0x0f,
    0x03,0x03,0x07,0x05,0x0c,0x1f,0x1f,0x4e,0x4e,0x5e,0x1e,0x16,0x13,0x1b,0x19,0x3c,0x0c,0x60,0xf0,0xd0,0x98,0xfc,0xfc,0x58,0x18,0x1c,0x1c,0x94,0xf4,0xe6,0x06,0x0f,
    0x03,0x00,0x03,0x07,0x05,0x2c,0x1f,0x5f,0x4e,0x1e,0x1e,0x16,0x13,0x1b,0x19,0x3c,0x0c,0x00,0x60,0xf0,0xd0,0x98,0xfc,0xfc,0x58,0x1c,0x1c,0x94,0xf4,0xe6,0x06,0x0f,
    0x03,0x05,0x00,0x00,0x33,0x7f,0xff,0xff,0x82,0xfc,0x01,0x7c,0x3c,0x86,0x00,0x83,0xe0,0x8b,0x00,0x03,0x03,0x3f,0x7f,0xff,0x82,0xfc,0x01,0x7c,0x3c,0x86,0x00,0x83,
    0xe0,0x8b,0x00,0x03,0x03,0x3f,0x7f,0xff,0x83,0xfc,0x01,0x7c,0x30,0x85,0x00,0x83,0xe0,0x8b,0x00,0x03,0x03,0x3f,0x7f,0xff,0x82,0xfc,0x01,0x7c,0x3c,0x86,0x00,0x83,
    0xe0,0x8a,0x00,0x7d,0x06,0x0f,0x0b,0x19,0x3f,0x3f,0x1f,0x3a,0x38,0x29,0x2f,0x67,0x60,0xf0,0xc0,0x00,0xc0,0xe0,0xa4,0x30,0xfa,0xfa,0xf2,0x78,0x78,0x68,0xc8,0xd8,
    0x98,0x3c,0x30,0x00,0x06,0x0f,0x0b,0x19,0x3f,0x3f,0x1a,0x38,0x38,0x29,0x2f,0x67,0x60,0xf0,0xc0,0x00,0xc0,0xe0,0xa0,0x34,0xf8,0xfa,0x72,0x78,0x78,0x68,0xc8,0xd8,
    0x98,0x3c,0x30,0x06,0x0f,0x0b,0x19,0x3f,0x3f,0x1a,0x18,0x38,0x38,0x29,0x2f,0x67,0x60,0xf0,0xc0,0xc0,0xe0,0xa0,0x30,0xf8,0xf8,0x72,0x72,0x7a,0x78,0x68,0xc8,0xd8,
    0x98,0x3c,0x30,0x00,0x06,0x0f,0x0b,0x19,0x3f,0x3f,0x1a,0x38,0x38,0x29,0x2f,0x67,0x60,0xf0,0xc0,0x00,0xc0,0xe0,0xa0,0x34,0xf8,0xfa,0x72,0x78,0x78,0x68,0xc8,0xd8,
    0x98,0x3c,0x02,0x30,0x00,0x00,0x83,0x07,0x8b,0x00,0x03,0xcc,0xfe,0xff,0xff,0x82,0x3f,0x01,0x3e,0x3c,0x86,0x00,0x83,0x07,0x8b,0x00,0x03,0xc0,0xfc,0xfe,0xff,0x82,
    0x3f,0x01,0x3e,0x3c,0x86,0x00,0x83,0x07,0x8b,0x00,0x03,0xc0,0xfc,0xfe,0xff,0x83,0x3f,0x01,0x3e,0x0c,0x85,0x00,0x83,0x07,0x8b,0x00,0x03,0xc0,0xfc,0xfe,0xff,0x82,
    0x3f,0x01,0x3e,0x3c,0x84,0x00,0xff};

const byte sprBetaRLE[] = {
    0x04,0x0f,0x3f,0x7d,0x75,0xf0,0x83,0xe0,0x81,0x60,0x0c,0x30,0x1b,0x0c,0x04,0x06,0xfc,0xfe,0xff,0x49,0x5d,0x7f,0x7f,0x3e,0x84,0x00,0x08,0x80,0x00,0x00,0x0f,0x3f,
    0x7d,0x7d,0xf8,0xf8,0x82,0xf0,0x0e,0x70,0x60,0x36,0x09,0x08,0x0c,0x00,0xfc,0xfe,0xff,0x49,0x5d,0x7f,0x7f,0x3e,0x88,0x00,0x03,0x0f,0x3f,0x7d,0x75,0x83,0xf0,0x04,
    0x78,0x3b,0x04,0x04,0x06,0x82,0x00,0x0a,0xfc,0xfe,0xff,0x49,0x5d,0x7f,0x7f,0x3e,0x00,0x00,0x80,0x84,0x00,0x03,0x0f,0x3f,0x7d,0x75,0x82,0xe0,0x14,0xf0,0x70,0x38,
    0x0d,0x06,0x02,0x03,0x00,0x00,0xfc,0xfe,0xff,0x49,0x5d,0x7f,0x7f,0x3e,0x00,0x00,0x80,0x40,0x87,0x00,0x04,0x10,0x1a,0x1a,0x1f,0x03,0x88,0x00,0x81,0x3e,0x82,0x00,
    0x05,0x92,0xc0,0x6c,0x32,0x10,0x18,0x87,0x00,0x04,0x08,0x0d,0x0d,0x0f,0x09,0x87,0x00,0x81,0x3e,0x82,0x00,0x06,0x12,0xc0,0xe0,0x36,0x19,0x08,0x0c,0x86,0x00,0x81,
    0x0a,0x01,0x0f,0x07,0x89,0x00,0x81,0x3e,0x82,0x00,0x06,0x92,0xc0,0x60,0x2c,0x12,0x10,0x18,0x84,0x00,0x05,0x10,0x1a,0x1a,0x0e,0x0f,0x03,0x88,0x00,0x81,0x3e,0x82,
    0x00,0x0e,0x12,0x80,0xd8,0x64,0x20,0x30,0x00,0x3f,0x7f,0xff,0x92,0xba,0xfe,0xfe,0x7c,0x84,0x00,0x07,0x01,0x00,0x00,0xf0,0xfc,0xbe,0xae,0x0f,0x83,0x07,0x81,0x06,
    0x0c,0x0c,0xd8,0x30,0x20,0x60,0x3f,0x7f,0xff,0x92,0xba,0xfe,0xfe,0x7c,0x87,0x00,0x05,0xf0,0xfc,0xbe,0xbe,0x1f,0x1f,0x82,0x0f,0x12,0x0e,0x06,0x6c,0x90,0x10,0x30,
    0x00,0x00,0x3f,0x7f,0xff,0x92,0xba,0xfe,0xfe,0x7c,0x00,0x00,0x01,0x84,0x00,0x03,0xf0,0xfc,0xbe,0xae,0x83,0x0f,0x04,0x1e,0xdc,0x20,0x20,0x60,0x82,0x00,0x0b,0x3f,
    0x7f,0xff,0x92,0xba,0xfe,0xfe,0x7c,0x00,0x00,0x01,0x02,0x83,0x00,0x03,0xf0,0xfc,0xbe,0xae,0x82,0x07,0x06,0x0f,0x0e,0x1c,0xb0,0x60,0x40,0xc0,0x83,0x00,0x81,0x7c,
    0x82,0x00,0x05,0x49,0x03,0x36,0x4c,0x08,0x18,0x86,0x00,0x04,0x08,0x58,0x58,0xf8,0xc0,0x88,0x00,0x81,0x7c,0x82,0x00,0x06,0x48,0x03,0x07,0x6c,0x98,0x10,0x30,0x86,
    0x00,0x04,0x10,0xb0,0xb0,0xf0,0x90,0x88,0x00,0x81,0x7c,0x82,0x00,0x06,0x49,0x03,0x06,0x34,0x48,0x08,0x18,0x85,0x00,0x81,0x50,0x01,0xf0,0xe0,0x89,0x00,0x81,0x7c,
    0x82,0x00,0x05,0x48,0x01,0x1b,0x26,0x04,0x0c,0x85,0x00,0x05,0x08,0x58,0x58,0x70,0xf0,0xc0,0x84,0x00,0xff};

const byte sprBooRLE[] = {
    0x46,0x00,0x01,0x03,0x07,0x0f,0x3f,0x7f,0x7f,0x3f,0x1f,0x3f,0x7f,0x7f,0x1f,0x03,0x00,0x70,0xfc,0xfe,0xd6,0x93,0x93,0xff,0xfe,0xce,0xcc,0xfe,0xfe,0xf8,0xf0,0xf0,
    0x60,0x00,0x01,0x03,0x07,0x1f,0x7f,0x7f,0x3f,0x1f,0x1f,0x3f,0x7f,0xff,0x3f,0x07,0x00,0x70,0xfc,0xfe,0xd6,0x93,0x93,0xff,0xce,0x86,0x87,0xcf,0xf8,0xf8,0xf0,0xf0,
    0xe0,0x00,0x01,0x03,0x0f,0x7f,0x7f,0x3f,0x82,0x1f,0x35,0x3f,0x7f,0x7f,0x1f,0x03,0x00,0x70,0xfc,0xfe,0xd6,0x93,0x93,0xff,0xce,0x87,0x87,0xcc,0xf8,0xf8,0xf0,0xf0,
    0x60,0x00,0x01,0x03,0x07,0x1f,0x7f,0x7f,0x3f,0x1f,0x1f,0x3f,0x7f,0xff,0x3f,0x07,0x00,0x70,0xfc,0xfe,0xd6,0x93,0x93,0xff,0xfe,0xce,0xcf,0xff,0xf8,0xf8,0xf0,0xf0,
    0xe0,0x92,0x00,0x07,0x28,0x6c,0x6c,0x00,0x30,0x78,0x78,0x30,0x97,0x00,0x07,0x28,0x6c,0x6c,0x00,0x30,0x78,0x78,0x30,0x97,0x00,0x07,0x28,0x6c,0x6c,0x00,0x30,0x78,
    0x78,0x30,0x97,0x00,0x07,0x28,0x6c,0x6c,0x00,0x30,0x78,0x78,0x30,0x84,0x00,0x56,0x0e,0x3f,0x7f,0x6b,0xc9,0xc9,0xff,0x7f,0x73,0x33,0x7f,0x7f,0x1f,0x0f,0x0f,0x06,
    0x00,0x80,0xc0,0xe0,0xf0,0xfc,0xfe,0xfe,0xfc,0xf8,0xfc,0xfe,0xfe,0xf8,0xc0,0x00,0x0e,0x3f,0x7f,0x6b,0xc9,0xc9,0xff,0x73,0x61,0xe1,0xf3,0x1f,0x1f,0x0f,0x0f,0x07,
    0x00,0x80,0xc0,0xe0,0xf8,0xfe,0xfe,0xfc,0xf8,0xf8,0xfc,0xfe,0xff,0xfc,0xe0,0x00,0x0e,0x3f,0x7f,0x6b,0xc9,0xc9,0xff,0x73,0xe1,0xe1,0x33,0x1f,0x1f,0x0f,0x0f,0x06,
    0x00,0x80,0xc0,0xf0,0xfe,0xfe,0xfc,0x82,0xf8,0x24,0xfc,0xfe,0xfe,0xf8,0xc0,0x00,0x0e,0x3f,0x7f,0x6b,0xc9,0xc9,0xff,0x7f,0x73,0xf3,0xff,0x1f,0x1f,0x0f,0x0f,0x07,
    0x00,0x80,0xc0,0xe0,0xf8,0xfe,0xfe,0xfc,0xf8,0xf8,0xfc,0xfe,0xff,0xfc,0xe0,0x83,0x00,0x07,0x14,0x36,0x36,0x00,0x0c,0x1e,0x1e,0x0c,0x97,0x00,0x07,0x14,0x36,0x36,
    0x00,0x0c,0x1e,0x1e,0x0c,0x97,0x00,0x07,0x14,0x36,0x36,0x00,0x0c,0x1e,0x1e,0x0c,0x97,0x00,0x07,0x14,0x36,0x36,0x00,0x0c,0x1e,0x1e,0x0c,0x94,0x00,0xff};

const byte sprDeltaRLE[] = {
    0x07,0x01,0x07,0x0f,0x1c,0x18,0x18,0x38,0x3c,0x83,0x3f,0x0b,0x7f,0x3d,0x18,0x00,0xe0,0xf8,0xfc,0xf2,0x60,0x60,0x61,0xf3,0x84,0xff,0x0a,0xef,0xc6,0x00,0x01,0x07,
    0x0f,0x1c,0x18,0x18,0x38,0x3c,0x84,0x3f,0x0a,0x3b,0x31,0x00,0xe0,0xf8,0xfc,0xf2,0x60,0x60,0x61,0xf3,0x84,0xff,0x0a,0xde,0x8c,0x00,0x01,0x07,0x0f,0x1c,0x18,0x18,
    0x38,0x3c,0x84,0x3f,0x0a,0x6f,0x46,0x00,0xe0,0xf8,0xfc,0xf2,0x60,0x60,0x61,0xf3,0x84,0xff,0x0a,0x7b,0x31,0x00,0x01,0x07,0x0f,0x1c,0x18,0x18,0x38,0x3c,0x83,0x3f,
    0x0b,0x7f,0xde,0x0c,0x00,0xe0,0xf8,0xfc,0xf2,0x60,0x60,0x61,0xf3,0x84,0xff,0x01,0xf7,0x63,0x82,0x00,0x0a,0x03,0x07,0x07,0x06,0x06,0x07,0x03,0x00,0x00,0x01,0x02,
    0x84,0x00,0x0a,0x0c,0x9e,0x9e,0x18,0x18,0x9e,0x0c,0x00,0x00,0x98,0x64,0x84,0x00,0x09,0x03,0x07,0x07,0x06,0x06,0x07,0x03,0x00,0x00,0x03,0x85,0x00,0x0a,0x0c,0x9e,
    0x9e,0x18,0x18,0x9e,0x0c,0x00,0x00,0x30,0xcc,0x84,0x00,0x0a,0x03,0x07,0x07,0x06,0x06,0x07,0x03,0x00,0x00,0x02,0x01,0x84,0x00,0x0a,0x0c,0x9e,0x9e,0x18,0x18,0x9e,
    0x0c,0x00,0x00,0x64,0x98,0x84,0x00,0x06,0x03,0x07,0x07,0x06,0x06,0x07,0x03,0x82,0x00,0x00,0x03,0x84,0x00,0x0a,0x0c,0x9e,0x9e,0x18,0x18,0x9e,0x0c,0x00,0x00,0xcc,
    0x30,0x82,0x00,0x07,0x07,0x1f,0x3f,0x4f,0x06,0x06,0x86,0xcf,0x84,0xff,0x0a,0xf7,0x63,0x00,0x80,0xe0,0xf0,0x38,0x18,0x18,0x1c,0x3c,0x83,0xfc,0x0b,0xfe,0xbc,0x18,
    0x00,0x07,0x1f,0x3f,0x4f,0x06,0x06,0x86,0xcf,0x84,0xff,0x0a,0x7b,0x31,0x00,0x80,0xe0,0xf0,0x38,0x18,0x18,0x1c,0x3c,0x84,0xfc,0x0a,0xdc,0x8c,0x00,0x07,0x1f,0x3f,
    0x4f,0x06,0x06,0x86,0xcf,0x84,0xff,0x0a,0xde,0x8c,0x00,0x80,0xe0,0xf0,0x38,0x18,0x18,0x1c,0x3c,0x84,0xfc,0x0a,0xf6,0x62,0x00,0x07,0x1f,0x3f,0x4f,0x06,0x06,0x86,
    0xcf,0x84,0xff,0x0a,0xef,0xc6,0x00,0x80,0xe0,0xf0,0x38,0x18,0x18,0x1c,0x3c,0x83,0xfc,0x02,0xfe,0x7b,0x30,0x82,0x00,0x0a,0x30,0x79,0x79,0x18,0x18,0x79,0x30,0x00,
    0x00,0x19,0x26,0x84,0x00,0x0a,0xc0,0xe0,0xe0,0x60,0x60,0xe0,0xc0,0x00,0x00,0x80,0x40,0x84,0x00,0x0a,0x30,0x79,0x79,0x18,0x18,0x79,0x30,0x00,0x00,0x0c,0x33,0x84,
    0x00,0x09,0xc0,0xe0,0xe0,0x60,0x60,0xe0,0xc0,0x00,0x00,0xc0,0x85,0x00,0x0a,0x30,0x79,0x79,0x18,0x18,0x79,0x30,0x00,0x00,0x26,0x19,0x84,0x00,0x0a,0xc0,0xe0,0xe0,
    0x60,0x60,0xe0,0xc0,0x00,0x00,0x40,0x80,0x84,0x00,0x0a,0x30,0x79,0x79,0x18,0x18,0x79,0x30,0x00,0x00,0x33,0x0c,0x84,0x00,0x06,0xc0,0xe0,0xe0,0x60,0x60,0xe0,0xc0,
    0x82,0x00,0x00,0xc0,0x82,0x00,0xff};

const byte sprIotaRLE[] = {
    0x81,0x00,0x03,0x03,0x0f,0x1f,0x1f,0x83,0x3e,0x81,0x1f,0x01,0x0f,0x23,0x83,0x00,0x0b,0xc4,0xf0,0xf8,0x18,0x2c,0x0c,0x0c,0xcc,0x18,0xf8,0xf0,0xc0,0x85,0x00,0x09,
    0x03,0x0f,0x1e,0x3e,0x3e,0x1e,0x0f,0x03,0x00,0x20,0x83,0x00,0x09,0xc4,0x00,0xc0,0x10,0x28,0x0c,0x0c,0xc8,0x10,0xc0,0x85,0x00,0x00,0x20,0x82,0x00,0x03,0x06,0x1e,
    0x1e,0x06,0x87,0x00,0x81,0xc0,0x81,0x00,0x03,0x20,0x08,0x08,0xc0,0x82,0x00,0x00,0x04,0x83,0x00,0x09,0x20,0x00,0x03,0x0f,0x1e,0x3e,0x3e,0x1e,0x0f,0x03,0x85,0x00,
    0x0b,0xc0,0x00,0xc0,0x10,0x28,0x0c,0x0c,0xc8,0x10,0xc0,0x00,0x04,0x82,0x00,0x02,0x40,0x30,0x20,0x87,0x00,0x07,0x20,0x70,0x60,0x80,0x01,0x06,0x0e,0x04,0x87,0x00,
    0x08,0x04,0x0c,0x02,0x00,0x00,0x40,0x33,0x2c,0x10,0x85,0x00,0x09,0x10,0x2c,0x73,0x60,0x80,0x01,0x06,0xce,0x34,0x08,0x85,0x00,0x29,0x08,0x34,0xcc,0x02,0x00,0x80,
    0x60,0x73,0x2f,0x1f,0x18,0x20,0x00,0x00,0x20,0x18,0x1f,0x2f,0x33,0x40,0x00,0x00,0x02,0xcc,0xf4,0xf8,0x18,0x04,0x00,0x00,0x04,0x18,0xf8,0xf4,0xce,0x06,0x01,0x80,
    0x60,0x73,0x2c,0x10,0x85,0x00,0x09,0x10,0x2c,0x33,0x40,0x00,0x00,0x02,0xcc,0x34,0x08,0x85,0x00,0x12,0x08,0x34,0xce,0x06,0x01,0x00,0x00,0x23,0x0f,0x1f,0x18,0x34,
    0x30,0x30,0x33,0x18,0x1f,0x0f,0x03,0x83,0x00,0x03,0xc0,0xf0,0xf8,0xf8,0x83,0x7c,0x81,0xf8,0x01,0xf0,0xc4,0x83,0x00,0x09,0x23,0x00,0x03,0x08,0x14,0x30,0x30,0x13,
    0x08,0x03,0x87,0x00,0x09,0xc0,0xf0,0x78,0x7c,0x7c,0x78,0xf0,0xc0,0x00,0x04,0x83,0x00,0x81,0x03,0x81,0x00,0x03,0x04,0x10,0x10,0x03,0x82,0x00,0x00,0x20,0x83,0x00,
    0x00,0x04,0x82,0x00,0x03,0x60,0x78,0x78,0x60,0x87,0x00,0x0b,0x03,0x00,0x03,0x08,0x14,0x30,0x30,0x13,0x08,0x03,0x00,0x20,0x83,0x00,0x09,0x04,0x00,0xc0,0xf0,0x78,
    0x7c,0x7c,0x78,0xf0,0xc0,0x83,0x00,0x03,0x80,0x60,0x70,0x20,0x87,0x00,0x07,0x20,0x30,0x40,0x00,0x00,0x02,0x0c,0x04,0x87,0x00,0x08,0x04,0x0e,0x06,0x01,0x80,0x60,
    0x73,0x2c,0x10,0x85,0x00,0x09,0x10,0x2c,0x33,0x40,0x00,0x00,0x02,0xcc,0x34,0x08,0x85,0x00,0x29,0x08,0x34,0xce,0x06,0x01,0x00,0x40,0x33,0x2f,0x1f,0x18,0x20,0x00,
    0x00,0x20,0x18,0x1f,0x2f,0x73,0x60,0x80,0x01,0x06,0xce,0xf4,0xf8,0x18,0x04,0x00,0x00,0x04,0x18,0xf8,0xf4,0xcc,0x02,0x00,0x00,0x40,0x33,0x2c,0x10,0x85,0x00,0x09,
    0x10,0x2c,0x73,0x60,0x80,0x01,0x06,0xce,0x34,0x08,0x85,0x00,0x04,0x08,0x34,0xcc,0x02,0x00,0xff};

const byte sprZetaRLE[] = {
    0x84,0x00,0x07,0x3f,0x18,0x00,0x1f,0x0f,0x07,0x07,0x03,0x82,0x00,0x04,0x30,0x1e,0x37,0xc1,0xe0,0x82,0x70,0x81,0xe0,0x82,0xf0,0x01,0xf8,0x78,0x84,0x00,0x08,0x38,
    0x3f,0x00,0x00,0x1f,0x0f,0x0f,0x07,0x01,0x82,0x00,0x04,0x70,0x3e,0x37,0xc1,0xe0,0x82,0x70,0x81,0xe0,0x82,0xf0,0x01,0xf8,0xf0,0x83,0x00,0x11,0x30,0x3c,0x1b,0x00,
    0x00,0x1f,0x1f,0x0f,0x03,0x01,0x01,0x00,0x00,0x30,0x1e,0x37,0xc1,0xe0,0x82,0x70,0x81,0xe0,0x82,0xf0,0x01,0xf8,0xc8,0x84,0x00,0x10,0x38,0x3f,0x00,0x00,0x3f,0x1f,
    0x07,0x03,0x03,0x01,0x00,0x00,0x70,0x3e,0x37,0xc1,0xe0,0x82,0x70,0x81,0xe0,0x82,0xf0,0x06,0xf8,0x38,0x00,0x11,0x39,0x0c,0x03,0x86,0x00,0x0a,0x06,0x0c,0x19,0x13,
    0x02,0x00,0x80,0x8c,0xde,0x1c,0x0c,0x85,0x00,0x07,0xc0,0x80,0x00,0x00,0x11,0x39,0x0c,0x03,0x86,0x00,0x0a,0x06,0x0c,0x19,0x13,0x02,0x00,0x80,0x8c,0xde,0x1c,0x0c,
    0x85,0x00,0x07,0xc0,0x80,0x00,0x00,0x11,0x39,0x0c,0x03,0x86,0x00,0x0a,0x06,0x0c,0x19,0x13,0x02,0x00,0x80,0x8c,0xde,0x1c,0x0c,0x85,0x00,0x07,0xc0,0x80,0x00,0x00,
    0x11,0x39,0x0c,0x03,0x86,0x00,0x0a,0x06,0x0c,0x19,0x13,0x02,0x00,0x80,0x8c,0xde,0x1c,0x0c,0x85,0x00,0x08,0xc0,0x80,0x00,0x00,0x0c,0x78,0xec,0x83,0x07,0x82,0x0e,
    0x81,0x07,0x82,0x0f,0x01,0x1f,0x1e,0x85,0x00,0x07,0xfc,0x18,0x00,0xf8,0xf0,0xe0,0xe0,0xc0,0x82,0x00,0x04,0x0e,0x7c,0xec,0x83,0x07,0x82,0x0e,0x81,0x07,0x82,0x0f,
    0x01,0x1f,0x0f,0x84,0x00,0x08,0x1c,0xfc,0x00,0x00,0xf8,0xf0,0xf0,0xe0,0x80,0x82,0x00,0x04,0x0c,0x78,0xec,0x83,0x07,0x82,0x0e,0x81,0x07,0x82,0x0f,0x01,0x1f,0x13,
    0x83,0x00,0x11,0x0c,0x3c,0xd8,0x00,0x00,0xf8,0xf8,0xf0,0xc0,0x80,0x80,0x00,0x00,0x0e,0x7c,0xec,0x83,0x07,0x82,0x0e,0x81,0x07,0x82,0x0f,0x01,0x1f,0x1c,0x84,0x00,
    0x09,0x1c,0xfc,0x00,0x00,0xfc,0xf8,0xe0,0xc0,0xc0,0x80,0x82,0x00,0x04,0x01,0x31,0x7b,0x38,0x30,0x85,0x00,0x07,0x03,0x01,0x00,0x00,0x88,0x9c,0x30,0xc0,0x86,0x00,
    0x0a,0x60,0x30,0x98,0xc8,0x40,0x00,0x01,0x31,0x7b,0x38,0x30,0x85,0x00,0x07,0x03,0x01,0x00,0x00,0x88,0x9c,0x30,0xc0,0x86,0x00,0x0a,0x60,0x30,0x98,0xc8,0x40,0x00,
    0x01,0x31,0x7b,0x38,0x30,0x85,0x00,0x07,0x03,0x01,0x00,0x00,0x88,0x9c,0x30,0xc0,0x86,0x00,0x0a,0x60,0x30,0x98,0xc8,0x40,0x00,0x01,0x31,0x7b,0x38,0x30,0x85,0x00,
    0x07,0x03,0x01,0x00,0x00,0x88,0x9c,0x30,0xc0,0x86,0x00,0x04,0x60,0x30,0x98,0xc8,0x40,0xff};

const byte sprDanielRLE[] = {
    0x7f,0x41,0xa7,0x4d,0x1a,0x17,0x3a,0x37,0x2f,0x35,0x0b,0x1d,0x2b,0x6f,0x46,0x23,0x01,0xc0,0xa0,0x10,0x08,0x08,0x0c,0xe4,0x6c,0x4c,0x00,0x88,0xd8,0x70,0xb0,0x60,
    0xc0,0x01,0x07,0x0d,0x1a,0x17,0x3a,0x36,0x2f,0x35,0x0b,0x1d,0x0b,0x0f,0x00,0x0d,0x07,0xc2,0xa5,0x12,0x08,0x08,0x0c,0xe4,0x6c,0x4c,0x00,0x88,0xd8,0x70,0xb0,0x60,
    0xc0,0x01,0x07,0x0d,0x1a,0x17,0x3a,0x36,0x2f,0x35,0x0b,0x1d,0x0b,0x0f,0x06,0x03,0x01,0xc0,0xa0,0x10,0x08,0x08,0x0c,0xe4,0x6c,0x4c,0x00,0x88,0xd8,0x70,0x80,0x68,
    0xf0,0x01,0x07,0x0d,0x1a,0x17,0x3a,0x36,0x2f,0x35,0x0b,0x1d,0x0b,0x0f,0x06,0x03,0x01,0xc0,0xa0,0x10,0x08,0x08,0x0c,0xe4,0x6c,0x4c,0x00,0x88,0xda,0x71,0xb3,0x62,
    0xc0,0x03,0x40,0xe3,0x4f,0x0f,0x86,0x1f,0x08,0x0f,0x1f,0x37,0x03,0x00,0x00,0xc2,0xf0,0xf0,0x86,0xf8,0x81,0xf0,0x06,0xe0,0xc0,0x00,0x00,0x43,0x0f,0x0f,0x86,0x1f,
    0x81,0x0f,0x06,0x07,0x03,0x00,0x02,0xc7,0xf2,0xf0,0x86,0xf8,0x81,0xf0,0x06,0xe0,0xc0,0x00,0x00,0x03,0x0f,0x0f,0x86,0x1f,0x81,0x0f,0x06,0x07,0x03,0x00,0x00,0xc2,
    0xf0,0xf0,0x86,0xf8,0x82,0xf0,0x05,0xd0,0x00,0x00,0x43,0x0f,0x0f,0x86,0x1f,0x81,0x0f,0x06,0x07,0x03,0x00,0x00,0xc0,0xf0,0xf0,0x86,0xf8,0x7f,0xf0,0xf6,0xe4,0xc0,
    0x00,0x41,0xa7,0x4d,0x1a,0x17,0x3a,0x36,0x2f,0x35,0x0b,0x1d,0x2b,0x6f,0x46,0x23,0x01,0xc0,0xa0,0x10,0x08,0x08,0x0c,0xe4,0x6c,0x4c,0x00,0x88,0xd8,0x70,0xb0,0x60,
    0xc0,0x01,0x07,0x0d,0x1a,0x17,0x3a,0x36,0x2f,0x35,0x0b,0x1d,0x0b,0x0f,0x00,0x0d,0x07,0xc2,0xa5,0x12,0x08,0x08,0x0c,0xe4,0x6c,0x4c,0x00,0x88,0xd8,0x70,0xb0,0x60,
    0xc0,0x01,0x07,0x0d,0x1a,0x17,0x3a,0x36,0x2f,0x35,0x0b,0x1d,0x0b,0x0f,0x06,0x03,0x01,0xc0,0xa0,0x10,0x08,0x08,0x0c,0xe4,0x6c,0x4c,0x00,0x88,0xd8,0x70,0x80,0x68,
    0xf0,0x01,0x07,0x0d,0x1a,0x17,0x3a,0x36,0x2f,0x35,0x0b,0x1d,0x0b,0x0f,0x06,0x03,0x01,0xc0,0xa0,0x10,0x08,0x08,0x0c,0xe4,0x6c,0x4c,0x00,0x88,0x08,0xda,0x71,0xb3,
    0x62,0xc0,0x40,0xe3,0x4f,0x0f,0x86,0x1f,0x08,0x0f,0x1f,0x37,0x03,0x00,0x00,0xc2,0xf0,0xf0,0x86,0xf8,0x81,0xf0,0x06,0xe0,0xc0,0x00,0x00,0x43,0x0f,0x0f,0x86,0x1f,
    0x81,0x0f,0x06,0x07,0x03,0x00,0x02,0xc7,0xf2,0xf0,0x86,0xf8,0x81,0xf0,0x06,0xe0,0xc0,0x00,0x00,0x03,0x0f,0x0f,0x86,0x1f,0x81,0x0f,0x06,0x07,0x03,0x00,0x00,0xc2,
    0xf0,0xf0,0x86,0xf8,0x82,0xf0,0x05,0xd0,0x00,0x00,0x43,0x0f,0x0f,0x86,0x1f,0x81,0x0f,0x06,0x07,0x03,0x00,0x00,0xc0,0xf0,0xf0,0x86,0xf8,0x04,0xf0,0xf6,0xe4,0xc0,
    0x00,0xff};

const byte sprLegsRLE[] = {
    0x87,0x00,0x00,0x0f,0x86,0x07,0x87,0x00,0x81,0xe0,0x84,0x60,0x00,0xb0,0x87,0x00,0x07,0x0f,0x07,0x07,0x0e,0x0e,0x1c,0x1c,0x0e,0x87,0x00,0x06,0xf0,0xf8,0x38,0x78,
    0xf0,0x60,0x20,0x88,0x00,0x06,0x0f,0x07,0x0f,0x3e,0x3c,0x38,0x20,0x88,0x00,0x81,0xe0,0x81,0x70,0x82,0x38,0x00,0x3c,0x87,0x00,0x06,0x0f,0x07,0x07,0x1f,0x1f,0x1e,
    0x10,0x88,0x00,0x81,0xe0,0x81,0x60,0x82,0x70,0x00,0x78,0x87,0x00,0x07,0x0f,0x07,0x03,0x07,0x07,0x03,0x02,0x01,0x87,0x00,0x82,0xc0,0x81,0x80,0x02,0x40,0xc0,0xe0,
    0x87,0x00,0x07,0x0f,0x07,0x00,0x01,0x03,0x01,0x02,0x03,0x87,0x00,0x07,0xe0,0xf0,0xf0,0xe0,0xc0,0x80,0x80,0x40,0x87,0x00,0x07,0x0f,0x07,0x00,0x07,0x07,0x0e,0x0e,
    0x0f,0x87,0x00,0x01,0xe0,0xf0,0x82,0x70,0x00,0x78,0x89,0x00,0x07,0x0f,0x07,0x01,0x04,0x0e,0x0e,0x1c,0x1e,0x87,0x00,0x83,0xe0,0x03,0xf0,0x70,0x70,0x78,0x87,0x00,
    0x81,0x07,0x84,0x06,0x00,0x0d,0x87,0x00,0x00,0xf0,0x86,0xe0,0x87,0x00,0x06,0x0f,0x1f,0x1c,0x1e,0x0f,0x06,0x04,0x88,0x00,0x07,0xf0,0xe0,0xe0,0x70,0x70,0x38,0x38,
    0x70,0x87,0x00,0x81,0x07,0x81,0x0e,0x82,0x1c,0x00,0x3c,0x87,0x00,0x06,0xf0,0xe0,0xf0,0x7c,0x3c,0x1c,0x04,0x88,0x00,0x81,0x07,0x81,0x06,0x82,0x0e,0x00,0x1e,0x87,
    0x00,0x06,0xf0,0xe0,0xe0,0xf8,0xf8,0x78,0x08,0x88,0x00,0x82,0x03,0x81,0x01,0x02,0x02,0x03,0x07,0x87,0x00,0x07,0xf0,0xe0,0xc0,0xe0,0xe0,0xc0,0x40,0x80,0x87,0x00,
    0x07,0x07,0x0f,0x0f,0x07,0x03,0x01,0x01,0x02,0x87,0x00,0x07,0xf0,0xe0,0x00,0x80,0xc0,0x80,0x40,0xc0,0x87,0x00,0x01,0x07,0x0f,0x82,0x0e,0x00,0x1e,0x89,0x00,0x07,
    0xf0,0xe0,0x00,0xe0,0xe0,0x70,0x70,0xf0,0x87,0x00,0x83,0x07,0x03,0x0f,0x0e,0x0e,0x1e,0x87,0x00,0x07,0xf0,0xe0,0x80,0x20,0x70,0x70,0x38,0x78,0xff};