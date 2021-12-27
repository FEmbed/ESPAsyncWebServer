#include "SPIFFSEditor.h"
#include <feFS.h>
using FileSystem = FEmbed::FileSystem;

//File: edit.htm.gz, Size: 4151
#define edit_htm_gz_len 4151
const uint8_t edit_htm_gz[] PROGMEM = {
 0x1F, 0x8B, 0x08, 0x08, 0xB8, 0x94, 0xB1, 0x59, 0x00, 0x03, 0x65, 0x64, 0x69, 0x74, 0x2E, 0x68,
 0x74, 0x6D, 0x00, 0xB5, 0x3A, 0x0B, 0x7B, 0xDA, 0xB8, 0xB2, 0x7F, 0xC5, 0x71, 0xCF, 0x66, 0xED,
 0x83, 0x31, 0x90, 0xA4, 0xD9, 0xD6, 0xC4, 0xC9, 0x42, 0x92, 0x36, 0x6D, 0xF3, 0x6A, 0x80, 0xB6,
 0x69, 0x4F, 0xEE, 0x7E, 0xC2, 0x16, 0xA0, 0xC6, 0x96, 0x5D, 0x5B, 0x0E, 0x49, 0x59, 0xFE, 0xFB,
 0x9D, 0x91, 0x6C, 0xB0, 0x09, 0x69, 0x77, 0xCF, 0xBD, 0xBB, 0xDD, 0x2D, 0x92, 0x46, 0x33, 0x9A,
 0x19, 0xCD, 0x53, 0xDE, 0xBD, 0x8D, 0xA3, 0x8B, 0xC3, 0xFE, 0xF5, 0xE5, 0xB1, 0x36, 0x11, 0x61,
 0xB0, 0xBF, 0x87, 0x7F, 0x6B, 0x01, 0xE1, 0x63, 0x97, 0xF2, 0xFD, 0x3D, 0xC1, 0x44, 0x40, 0xF7,
 0x8F, 0x7B, 0x97, 0xDA, 0xB1, 0xCF, 0x44, 0x94, 0xEC, 0x35, 0xD4, 0xCA, 0x5E, 0x2A, 0x1E, 0x02,
 0xAA, 0x85, 0xD4, 0x67, 0xC4, 0x4D, 0xBD, 0x84, 0xC2, 0x66, 0xDB, 0x0B, 0x67, 0xDF, 0xEB, 0x8C,
 0xFB, 0xF4, 0xDE, 0xD9, 0x6E, 0x36, 0xDB, 0x71, 0x94, 0x32, 0xC1, 0x22, 0xEE, 0x90, 0x61, 0x1A,
 0x05, 0x99, 0xA0, 0xED, 0x80, 0x8E, 0x84, 0xF3, 0x3C, 0xBE, 0x6F, 0x0F, 0xA3, 0xC4, 0xA7, 0x89,
 0xD3, 0x8A, 0xEF, 0x35, 0x00, 0x31, 0x5F, 0x7B, 0xB6, 0xB3, 0xB3, 0xD3, 0x1E, 0x12, 0xEF, 0x76,
 0x9C, 0x44, 0x19, 0xF7, 0xEB, 0x5E, 0x14, 0x44, 0x89, 0xF3, 0x6C, 0xF4, 0x1C, 0xFF, 0xB4, 0x7D,
 0x96, 0xC6, 0x01, 0x79, 0x70, 0x78, 0xC4, 0x29, 0xE0, 0xDE, 0xD7, 0xD3, 0x09, 0xF1, 0xA3, 0xA9,
 0xD3, 0xD4, 0x9A, 0x5A, 0xAB, 0x09, 0x44, 0x92, 0xF1, 0x90, 0x18, 0x4D, 0x0B, 0xFF, 0xD8, 0x3B,
 0x66, 0x7B, 0x14, 0x71, 0x51, 0x4F, 0xD9, 0x77, 0xEA, 0xB4, 0xB6, 0xE0, 0x34, 0x39, 0x1D, 0x91,
 0x90, 0x05, 0x0F, 0x4E, 0x4A, 0x78, 0x5A, 0x4F, 0x69, 0xC2, 0x46, 0x6A, 0x79, 0x4A, 0xD9, 0x78,
 0x22, 0x9C, 0xDF, 0x9A, 0xCD, 0x39, 0xF0, 0xAF, 0x65, 0xC1, 0x2C, 0x60, 0x29, 0x20, 0xA3, 0x78,
 0xEA, 0x3C, 0x11, 0xC5, 0x4E, 0x53, 0xB1, 0xDE, 0x6C, 0x87, 0x24, 0x19, 0x33, 0x0E, 0x83, 0x98,
 0xF8, 0x3E, 0xE3, 0x63, 0x47, 0xA1, 0x05, 0x6C, 0xB6, 0x90, 0x36, 0xA1, 0x01, 0x11, 0xEC, 0x8E,
 0xB6, 0x43, 0xC6, 0xEB, 0x53, 0xE6, 0x8B, 0x89, 0xB3, 0x0B, 0x3C, 0xB6, 0xBD, 0x2C, 0x49, 0x41,
 0xA6, 0x38, 0x62, 0x5C, 0xD0, 0x44, 0xA2, 0xA5, 0x31, 0xE1, 0xB3, 0x5C, 0x54, 0x54, 0x40, 0x21,
 0x27, 0xE3, 0x01, 0xE3, 0xB4, 0x3E, 0x0C, 0x22, 0xEF, 0x76, 0x71, 0xD2, 0x6E, 0x7C, 0x9F, 0x9F,
 0xE5, 0x4C, 0xA2, 0x3B, 0x9A, 0xCC, 0x96, 0xEA, 0x92, 0xD8, 0x15, 0x60, 0x85, 0x34, 0xA5, 0x74,
 0x6E, 0x8B, 0xBB, 0x0C, 0xA0, 0x96, 0xFC, 0x05, 0x29, 0x17, 0xFC, 0x2F, 0x45, 0x5A, 0x11, 0x5C,
 0xA1, 0x30, 0x1E, 0x67, 0x62, 0xF6, 0xF8, 0x2A, 0xA3, 0x98, 0x78, 0x4C, 0x3C, 0xA0, 0xFC, 0xB0,
 0x6D, 0x86, 0xBA, 0x04, 0xAC, 0x24, 0x24, 0x81, 0x86, 0x3A, 0xD7, 0x3E, 0xD0, 0xC4, 0x27, 0x9C,
 0x58, 0x9D, 0x84, 0x91, 0xC0, 0xEA, 0x2D, 0xB5, 0x5E, 0x0F, 0xA3, 0xEF, 0xF5, 0x0C, 0xC6, 0x30,
 0x0F, 0xA8, 0x27, 0x94, 0x92, 0xE1, 0x1E, 0x86, 0xB7, 0x4C, 0x3C, 0x06, 0x3C, 0x5A, 0x28, 0xA9,
 0x4B, 0x2A, 0x69, 0xA2, 0x2E, 0xB0, 0x25, 0xD5, 0x83, 0x1C, 0x4B, 0xC9, 0x95, 0x50, 0xF5, 0x61,
 0x24, 0x44, 0x14, 0x4A, 0x93, 0x5B, 0x08, 0xAC, 0x49, 0xAB, 0x79, 0xF1, 0xE8, 0x46, 0xD6, 0x6B,
 0xBF, 0x44, 0xBE, 0x0D, 0x7A, 0x15, 0xCC, 0x23, 0x41, 0x9D, 0x04, 0x6C, 0xCC, 0x9D, 0x90, 0xF9,
 0x7E, 0x40, 0x4B, 0x56, 0xEB, 0x64, 0x49, 0x60, 0xF8, 0x44, 0x10, 0x87, 0x85, 0x64, 0x4C, 0x1B,
 0x31, 0x1F, 0x03, 0x34, 0xA5, 0xBB, 0x3B, 0x16, 0xFB, 0xD0, 0xBD, 0xB8, 0x9A, 0x36, 0xDF, 0xBD,
 0x1E, 0x47, 0x1D, 0xF8, 0xE7, 0xBC, 0x37, 0x98, 0x1C, 0x0F, 0xC6, 0x30, 0xEA, 0xE2, 0xB4, 0xF3,
 0xFE, 0xB0, 0xF3, 0x1E, 0x7E, 0x0E, 0x5B, 0xB5, 0xAF, 0xA3, 0x6F, 0xB8, 0xD0, 0x7D, 0xED, 0x77,
 0xFB, 0x83, 0xE3, 0x4E, 0xE7, 0x5D, 0xE3, 0xCD, 0xF9, 0xF4, 0xE3, 0xBB, 0x5D, 0x04, 0x77, 0x83,
 0xE6, 0xD5, 0x87, 0x49, 0x73, 0xB0, 0xF5, 0x32, 0xF4, 0x4F, 0xFC, 0x89, 0x17, 0x0E, 0x3A, 0xEF,
 0x3F, 0x5E, 0xDD, 0x5D, 0x87, 0x83, 0x71, 0xEF, 0x63, 0x6B, 0xF2, 0x79, 0xEB, 0x43, 0xEF, 0xF3,
 0xC7, 0x57, 0xB7, 0xF4, 0xD3, 0xC9, 0xDB, 0xCF, 0xFD, 0x29, 0x20, 0x1C, 0x45, 0xBD, 0xC1, 0x55,
 0xF7, 0x43, 0x77, 0xFC, 0xB9, 0xEB, 0x1D, 0xDF, 0x0F, 0x83, 0xF3, 0xEE, 0xEB, 0xCE, 0xB0, 0xB3,
 0xE5, 0x51, 0x3A, 0xEE, 0x5F, 0x75, 0xB3, 0x37, 0xEF, 0x2E, 0xC6, 0x8C, 0x4D, 0x7A, 0x9F, 0xCF,
 0xFB, 0xDE, 0xE1, 0xF3, 0xD3, 0xC1, 0x49, 0x87, 0x4D, 0xCE, 0xDF, 0x5E, 0x35, 0x6F, 0x5F, 0xBF,
 0x3B, 0x3C, 0xF2, 0xAE, 0xDF, 0x5E, 0xEF, 0x1E, 0x6D, 0x37, 0x7E, 0xFB, 0xED, 0xCC, 0xBF, 0x60,
 0xBC, 0x7F, 0xF7, 0xBD, 0x33, 0x3E, 0x9C, 0xBE, 0x78, 0x48, 0xFB, 0x93, 0x37, 0x77, 0xBC, 0xF1,
 0x21, 0xFA, 0xFA, 0xE6, 0xE1, 0x0C, 0xFE, 0xBB, 0xBC, 0xAC, 0x0D, 0x7B, 0xAD, 0x74, 0xF0, 0xFE,
 0xCD, 0x87, 0xAD, 0xF4, 0xE5, 0xF3, 0xB8, 0x7B, 0x74, 0x74, 0x17, 0x0E, 0x2F, 0x1B, 0xA1, 0x7F,
 0x3B, 0x12, 0x2F, 0xB6, 0x45, 0x7C, 0x3D, 0xCE, 0x3E, 0x7F, 0x7B, 0xFE, 0x76, 0xD2, 0xB8, 0xA0,
 0xE4, 0x7A, 0x52, 0x7B, 0xF8, 0xFE, 0xF0, 0x62, 0xD2, 0x3F, 0xB9, 0x3B, 0x0F, 0xC8, 0xFD, 0xF9,
 0xB9, 0xF7, 0x3D, 0xAC, 0x05, 0xE4, 0xE5, 0x45, 0x3F, 0x20, 0x49, 0x6B, 0xE0, 0x77, 0x1A, 0xB5,
 0xC3, 0xAD, 0xCE, 0x8E, 0x48, 0xAE, 0x0E, 0xF9, 0xD1, 0xF6, 0xD7, 0xDE, 0x8B, 0x6E, 0xB7, 0x15,
 0x0D, 0xBF, 0x6D, 0xBD, 0xBE, 0xDD, 0x7D, 0x3D, 0xD8, 0x7D, 0x3F, 0x7C, 0xDF, 0xE9, 0xED, 0x74,
 0x07, 0xE4, 0xBA, 0xF7, 0xBE, 0x33, 0xDA, 0x19, 0x4E, 0x26, 0xEF, 0xDE, 0xF5, 0x5F, 0xF9, 0x9D,
 0xEF, 0x49, 0xE7, 0x62, 0xDA, 0xB9, 0x3F, 0x1E, 0x74, 0x4E, 0x6A, 0xEF, 0x8E, 0xCF, 0x9A, 0xAD,
 0xDE, 0xF5, 0xF6, 0xF8, 0x6C, 0x77, 0xDA, 0x4D, 0x8F, 0x3B, 0xEF, 0xBB, 0xCD, 0xF1, 0xDB, 0x5A,
 0x48, 0x3E, 0x47, 0x87, 0xDB, 0xE3, 0x37, 0xBB, 0xEC, 0xF2, 0x9A, 0x74, 0xDE, 0x74, 0xDF, 0xA6,
 0xEC, 0x2A, 0x3C, 0x19, 0x34, 0x3B, 0x9D, 0xD3, 0x0B, 0xFA, 0xEA, 0x70, 0x9B, 0xBC, 0xDB, 0xF2,
 0x3E, 0x82, 0xFE, 0x07, 0x9F, 0xE8, 0x6F, 0xB5, 0xCE, 0xF4, 0xA2, 0x19, 0x78, 0x2F, 0x69, 0xFF,
 0xE4, 0xBA, 0x2F, 0x6F, 0xE7, 0x38, 0x78, 0xD5, 0xBF, 0xED, 0x65, 0xEF, 0xC3, 0xC3, 0x43, 0x53,
 0xE3, 0x51, 0x3D, 0xA1, 0x31, 0x25, 0xA2, 0x1C, 0xAE, 0x16, 0xFE, 0x01, 0xB6, 0xB5, 0xB4, 0xC2,
 0xDC, 0x4F, 0x05, 0xBD, 0x17, 0x75, 0x9F, 0x7A, 0x51, 0x42, 0xE4, 0x1E, 0x40, 0xA0, 0x09, 0x9A,
 0xD8, 0xFC, 0x77, 0x19, 0x3F, 0x35, 0x15, 0x3F, 0x35, 0xC2, 0x7D, 0xCD, 0x28, 0x1C, 0x01, 0x83,
 0x87, 0x4F, 0xEF, 0x98, 0x47, 0xEB, 0x31, 0xBB, 0xA7, 0x41, 0x5D, 0x22, 0x3B, 0x4D, 0x73, 0x26,
 0xFD, 0xAD, 0xD8, 0x46, 0x38, 0x98, 0x9A, 0xA4, 0x5A, 0x2C, 0xF8, 0x5F, 0x89, 0x47, 0x21, 0xB0,
 0x81, 0xCB, 0x84, 0xF8, 0xAB, 0x7C, 0x27, 0x4A, 0xEA, 0xC3, 0x6C, 0x3C, 0x62, 0xF7, 0xE0, 0xD0,
 0x23, 0xC6, 0x99, 0xA0, 0x5A, 0x2B, 0x9D, 0xFF, 0x5E, 0x90, 0xB9, 0xA5, 0x0F, 0xA3, 0x84, 0x84,
 0x34, 0xD5, 0xFE, 0x22, 0x99, 0xD9, 0x28, 0x89, 0xC2, 0x65, 0x10, 0x99, 0x8B, 0xA8, 0x34, 0x99,
 0xCF, 0x9F, 0x65, 0x71, 0x10, 0x11, 0x10, 0x73, 0x4D, 0xE4, 0x50, 0xF1, 0x34, 0x91, 0x6E, 0xB5,
 0x88, 0xAB, 0xB9, 0x9B, 0x6D, 0xA1, 0x5B, 0x96, 0xDD, 0x7A, 0x6B, 0x67, 0xE9, 0xBA, 0x75, 0xB9,
 0x17, 0xE3, 0xFD, 0x9A, 0x4C, 0x81, 0xF1, 0xA0, 0x14, 0xEE, 0x9E, 0x09, 0x50, 0xE9, 0x13, 0x87,
 0xCB, 0x43, 0xF2, 0xC8, 0xB0, 0x60, 0x40, 0x05, 0xEA, 0x96, 0x8C, 0xD4, 0x85, 0x24, 0xB0, 0x6F,
 0xFE, 0x8C, 0xCA, 0xBC, 0x67, 0x3D, 0x8B, 0x13, 0xB8, 0x0D, 0x3A, 0xFD, 0x11, 0xCD, 0x42, 0xA6,
 0x2A, 0x6D, 0x45, 0x53, 0x65, 0xBC, 0x5C, 0x84, 0x65, 0xDA, 0x93, 0xBC, 0x16, 0xA4, 0x1F, 0x4B,
 0x05, 0xE0, 0x05, 0x37, 0xCF, 0x91, 0x9B, 0x1F, 0x6A, 0x75, 0x7B, 0xF7, 0x97, 0x9C, 0x87, 0x9D,
 0xE6, 0x2F, 0x73, 0x3B, 0xDF, 0x5B, 0xA4, 0xE4, 0x56, 0x13, 0xFE, 0x29, 0x32, 0xEF, 0x8B, 0x25,
 0x0B, 0xC3, 0xE7, 0xF8, 0xA7, 0x60, 0x10, 0xE9, 0x94, 0x80, 0xDB, 0x3B, 0x2F, 0x5F, 0xF8, 0xC3,
 0x02, 0x98, 0x0B, 0xF6, 0x24, 0x3C, 0x21, 0x3E, 0xCB, 0x52, 0xE7, 0x79, 0xF3, 0x97, 0x5C, 0x9F,
 0x5B, 0x3B, 0x28, 0xFB, 0xE2, 0x2E, 0x71, 0xB2, 0xB4, 0xD8, 0x34, 0x66, 0x5C, 0xDB, 0x4A, 0x35,
 0xBC, 0x6F, 0x92, 0x2C, 0x0C, 0xB3, 0x92, 0xED, 0xE7, 0xBF, 0x2F, 0x4D, 0x13, 0xF7, 0xCF, 0x9A,
 0xBF, 0xCC, 0x44, 0x02, 0xD9, 0x64, 0x04, 0xB9, 0xC6, 0x49, 0x22, 0x41, 0x04, 0x35, 0x9A, 0xE6,
 0x1C, 0x84, 0x5B, 0x03, 0xD8, 0xDE, 0x6D, 0xFA, 0x74, 0x6C, 0xCE, 0xE7, 0x7B, 0x0D, 0x99, 0xD7,
 0xA0, 0x6C, 0xF1, 0x12, 0x16, 0x8B, 0xFD, 0x51, 0xC6, 0x3D, 0xE4, 0x41, 0x1B, 0x53, 0x83, 0x9A,
 0xB3, 0x84, 0x8A, 0x2C, 0xE1, 0x9A, 0x1F, 0x79, 0x19, 0x1A, 0xBB, 0x3D, 0xA6, 0xE2, 0x58, 0xD9,
 0x7D, 0xF7, 0xE1, 0x8D, 0x0F, 0x3B, 0xE6, 0x0B, 0x04, 0x6F, 0x2D, 0x02, 0x38, 0x30, 0x9C, 0x97,
 0xE3, 0x54, 0xF6, 0x43, 0x82, 0x01, 0x22, 0xEF, 0xE8, 0x83, 0x41, 0x2D, 0xB1, 0x40, 0xA4, 0x36,
 0xAE, 0x1B, 0xC5, 0x2E, 0x80, 0x71, 0x73, 0x76, 0x07, 0x4A, 0x20, 0x2E, 0xFD, 0x22, 0x6E, 0x2C,
 0xE6, 0x72, 0xF8, 0x69, 0xE7, 0xBB, 0xC9, 0x1E, 0x3B, 0xA8, 0xB7, 0x1C, 0xB2, 0xCF, 0x0E, 0x5A,
 0xE0, 0x5E, 0x65, 0x6E, 0xE4, 0xB9, 0xAF, 0x58, 0x40, 0x07, 0xB9, 0xC3, 0xE1, 0x31, 0x48, 0x6C,
 0xB1, 0x85, 0x28, 0xE2, 0x5B, 0xCD, 0xE6, 0x86, 0x4B, 0x0F, 0x48, 0x00, 0x39, 0xCC, 0xD0, 0x8F,
 0xAF, 0xAE, 0x2E, 0xAE, 0xBE, 0xE8, 0x35, 0x5A, 0xD3, 0x6F, 0x1C, 0x4D, 0xAF, 0x71, 0xD3, 0x11,
 0x76, 0x42, 0x47, 0x09, 0x4D, 0x27, 0x97, 0x44, 0x4C, 0x8C, 0xD4, 0xBE, 0x23, 0x41, 0x56, 0x16,
 0x84, 0xA1, 0xDC, 0xC8, 0xA2, 0x70, 0x39, 0x9D, 0x6A, 0xAF, 0x40, 0xCD, 0x47, 0x90, 0xEA, 0xDA,
 0xC2, 0x26, 0x71, 0x4C, 0xB9, 0x6F, 0xE8, 0x31, 0x20, 0xEA, 0x16, 0x35, 0xAD, 0x84, 0x7E, 0xCB,
 0x68, 0x2A, 0x52, 0x1B, 0x2C, 0xD7, 0xD0, 0x2F, 0x07, 0x7D, 0xDD, 0xD2, 0x1B, 0xE8, 0x47, 0x3A,
 0xF0, 0x46, 0xCC, 0x39, 0x52, 0x89, 0x5C, 0xD0, 0xA4, 0x3E, 0xCC, 0xC0, 0xA0, 0xB8, 0x6E, 0xB6,
 0x23, 0x9B, 0x71, 0x4E, 0x93, 0x93, 0xFE, 0xD9, 0xA9, 0xAB, 0x5F, 0x29, 0x46, 0xB4, 0x53, 0x28,
 0x48, 0x74, 0x4B, 0x5E, 0x51, 0x7E, 0xC8, 0xE1, 0x84, 0x05, 0xBE, 0x11, 0x99, 0x6D, 0x24, 0xE1,
 0x49, 0x12, 0xB2, 0x40, 0x01, 0x0A, 0x9E, 0x2D, 0x1E, 0x62, 0xEA, 0xEA, 0x23, 0x50, 0x86, 0x6E,
 0x79, 0x76, 0x98, 0x05, 0x82, 0xC5, 0x01, 0x75, 0x37, 0x5A, 0x30, 0xE3, 0x60, 0x41, 0xAE, 0x8E,
 0xB9, 0x19, 0x61, 0xCC, 0x77, 0x75, 0x15, 0xA1, 0xF2, 0xB8, 0xB6, 0xEE, 0x14, 0x4F, 0x9D, 0x92,
 0x56, 0x4E, 0x49, 0xCB, 0xB8, 0x4A, 0xE0, 0x34, 0x3F, 0x18, 0xC3, 0x3C, 0xCE, 0xD4, 0x51, 0x05,
 0xCC, 0xA7, 0x23, 0x02, 0x9C, 0x7C, 0x40, 0x6D, 0xBA, 0x7A, 0x63, 0xDD, 0x41, 0xA9, 0x3A, 0xC8,
 0xAF, 0x6A, 0xC4, 0x2F, 0x6B, 0x44, 0xDD, 0xEE, 0x3A, 0x64, 0x5F, 0x21, 0x07, 0x55, 0xE4, 0xA0,
 0x8C, 0x7C, 0x28, 0x8D, 0x64, 0x1D, 0x72, 0xA0, 0x90, 0x93, 0x8A, 0x88, 0x89, 0x14, 0x51, 0x85,
 0xBD, 0x3A, 0x6A, 0x13, 0x05, 0xD2, 0xAD, 0xA4, 0x22, 0x66, 0x62, 0x83, 0x97, 0x92, 0x61, 0x40,
 0x7D, 0x77, 0xA3, 0x09, 0x33, 0x2C, 0xB6, 0xDD, 0xAD, 0xE6, 0x9A, 0x33, 0x12, 0x75, 0x46, 0x56,
 0x65, 0x30, 0x2B, 0x33, 0xA8, 0xF5, 0xC8, 0x1D, 0xD5, 0xD6, 0x31, 0x98, 0x99, 0x56, 0x60, 0x47,
 0xDC, 0x0B, 0x98, 0x77, 0xEB, 0x2E, 0xBD, 0xC5, 0x9C, 0xB1, 0x85, 0x85, 0x5A, 0x5C, 0x06, 0xBA,
 0x01, 0x94, 0x5E, 0x8B, 0xA5, 0x7C, 0x80, 0xFA, 0x9E, 0x5B, 0xD9, 0x5A, 0x02, 0xDC, 0xA6, 0xF7,
 0xD4, 0x3B, 0x8C, 0xC2, 0x90, 0xA0, 0xED, 0xA6, 0xC0, 0x41, 0x3E, 0xD1, 0xCD, 0xB9, 0x15, 0xAD,
 0xC5, 0x79, 0xC2, 0x45, 0x2C, 0x7F, 0x3D, 0x8B, 0x23, 0x03, 0x5C, 0xCE, 0xF5, 0x6C, 0xD4, 0x61,
 0x6A, 0x83, 0x1E, 0xC7, 0x62, 0xF2, 0x13, 0x17, 0x2A, 0x0C, 0x54, 0xA2, 0x7C, 0x69, 0xDE, 0x58,
 0x0B, 0x91, 0x56, 0x7C, 0xEA, 0xA2, 0xB7, 0xE2, 0x54, 0xA8, 0xBC, 0x8A, 0x5D, 0x9A, 0x4B, 0x1D,
 0x94, 0x61, 0xB9, 0xBD, 0x2F, 0xA0, 0xFA, 0x7C, 0x0E, 0xE7, 0x01, 0xFF, 0x13, 0x68, 0xF9, 0xE8,
 0x5F, 0x17, 0x60, 0xC9, 0xA3, 0x34, 0x78, 0x8B, 0xBB, 0x0D, 0xE3, 0xC0, 0xF9, 0x8F, 0x6D, 0x7C,
 0xF9, 0x1F, 0xFB, 0xA6, 0x66, 0x9A, 0x07, 0xFF, 0x6A, 0x48, 0x0D, 0x1B, 0xC2, 0xFC, 0xD2, 0xBA,
 0xB1, 0x08, 0x80, 0xED, 0x7F, 0x9B, 0xFF, 0xB1, 0x25, 0xB8, 0x02, 0x6B, 0xDF, 0x45, 0x90, 0x49,
 0xF0, 0x24, 0x34, 0xB0, 0x68, 0xA4, 0x91, 0xCD, 0x4D, 0x43, 0xB8, 0xA4, 0x72, 0x8D, 0x35, 0x51,
 0xD3, 0x6D, 0x88, 0x53, 0x50, 0x5B, 0xAC, 0x04, 0xBF, 0x3E, 0x24, 0x7A, 0x15, 0x5B, 0x17, 0x00,
 0xC9, 0x3D, 0xCA, 0x0C, 0x3D, 0x22, 0x97, 0x52, 0xCB, 0x0C, 0x02, 0x42, 0xA7, 0x89, 0xE7, 0x2A,
 0xAD, 0x1D, 0x14, 0x30, 0x17, 0xA2, 0xE0, 0xBC, 0x1C, 0x2D, 0x15, 0xEA, 0xAA, 0xFD, 0x17, 0x0A,
 0xA3, 0xD6, 0x12, 0x8A, 0x04, 0x31, 0xAD, 0xD8, 0x79, 0xC6, 0x72, 0x75, 0x4C, 0x59, 0xBA, 0x35,
 0x59, 0x5D, 0x96, 0xAD, 0x04, 0xAE, 0x2F, 0x8D, 0xFE, 0xD7, 0x3D, 0x16, 0x8E, 0xB5, 0x12, 0x3F,
 0xF8, 0x97, 0xFB, 0x2B, 0x46, 0xE4, 0xCD, 0x3F, 0xBC, 0x21, 0x70, 0x05, 0xA6, 0x41, 0x6D, 0x1E,
 0x4D, 0x0D, 0xB3, 0xF6, 0xAB, 0xAE, 0x49, 0x8A, 0xAE, 0x1E, 0x92, 0xFB, 0xBC, 0xA7, 0xC4, 0x8C,
 0xD7, 0xD6, 0x70, 0x5E, 0xB4, 0x28, 0xF9, 0x82, 0xEC, 0xE6, 0x48, 0x26, 0xA2, 0xB6, 0x56, 0x64,
 0x52, 0xD5, 0xCA, 0xE8, 0x5A, 0x63, 0xFF, 0xD7, 0x4A, 0x40, 0xB7, 0x98, 0xBA, 0x4E, 0x15, 0x8C,
 0xB3, 0x00, 0x1C, 0x93, 0x3E, 0x1D, 0x69, 0x03, 0x26, 0x03, 0x75, 0x35, 0x46, 0x5A, 0x81, 0xC1,
 0xCC, 0x03, 0xC3, 0x2B, 0xFB, 0xF3, 0x1E, 0x16, 0xBF, 0xFB, 0x97, 0xAA, 0xAA, 0x81, 0xD4, 0x8B,
 0x33, 0x5D, 0x59, 0x59, 0xD5, 0x4B, 0xE0, 0xD2, 0x08, 0xA0, 0x5B, 0x8B, 0x3C, 0x3A, 0x8C, 0xFC,
 0x87, 0x52, 0xF6, 0x4D, 0xBB, 0x0F, 0x87, 0x01, 0x49, 0xD3, 0x73, 0xB8, 0x01, 0x43, 0xF7, 0x42,
 0x50, 0xB8, 0xB2, 0xC2, 0xFD, 0xE6, 0xE6, 0x66, 0x15, 0x29, 0xA1, 0x21, 0x14, 0xDB, 0x8A, 0x2B,
 0xF0, 0x49, 0xD3, 0xF1, 0x81, 0x30, 0x18, 0xD2, 0x1A, 0xC6, 0xF0, 0x25, 0xE3, 0x47, 0x5C, 0x71,
 0xF4, 0xF4, 0x22, 0xA6, 0xFC, 0x33, 0xDC, 0x95, 0x32, 0xCB, 0x1A, 0xAD, 0xA6, 0x68, 0xFA, 0x8F,
 0xD8, 0x3E, 0xCA, 0x0D, 0x76, 0xC1, 0x7A, 0xBA, 0x56, 0xA1, 0xFC, 0x9F, 0x61, 0xB9, 0x94, 0x28,
 0xD6, 0x70, 0x9C, 0x40, 0x80, 0x5A, 0xC3, 0x31, 0xC4, 0x1A, 0x41, 0x17, 0xFC, 0x26, 0x6B, 0xF9,
 0xCD, 0xFE, 0x19, 0x7E, 0x97, 0x76, 0x1E, 0x15, 0x25, 0x91, 0xAA, 0xAF, 0x50, 0x02, 0x9F, 0xDD,
 0xE9, 0xA6, 0x15, 0xB9, 0x55, 0x0A, 0x50, 0x1B, 0x46, 0x41, 0xD0, 0x8F, 0xE2, 0x83, 0x27, 0xD6,
 0x9D, 0xC5, 0x7A, 0x31, 0xC8, 0xD9, 0x5C, 0x6E, 0xB1, 0xBC, 0xB5, 0x44, 0x4F, 0xA1, 0xEC, 0x5F,
 0x4B, 0x15, 0x01, 0x3F, 0x23, 0x8B, 0x7B, 0xAC, 0xD4, 0xA5, 0x36, 0x28, 0x0F, 0x56, 0x3F, 0xD5,
 0x3C, 0xCB, 0x5F, 0xCC, 0xAE, 0x6B, 0x51, 0x9B, 0xC0, 0x38, 0x57, 0x92, 0x8B, 0x4A, 0xB2, 0xC8,
 0x13, 0x01, 0xA8, 0x58, 0xC7, 0x2E, 0xC4, 0x4D, 0x6B, 0x7A, 0x7C, 0xBF, 0x5C, 0x83, 0xC2, 0xDF,
 0xF5, 0xD5, 0x12, 0x33, 0x08, 0xC4, 0xD3, 0x95, 0x4B, 0x29, 0x5F, 0x37, 0x29, 0x8A, 0x0E, 0x62,
 0x47, 0xA3, 0x51, 0x4A, 0xC5, 0x47, 0x0C, 0x49, 0x56, 0xB2, 0x98, 0x9F, 0xC8, 0x90, 0x04, 0x8C,
 0x45, 0x3C, 0x8C, 0xB2, 0x94, 0x46, 0x99, 0xA8, 0xA4, 0x16, 0x63, 0x21, 0xCC, 0x5E, 0xFA, 0xE7,
 0x9F, 0x8B, 0xC9, 0x7E, 0x5A, 0x0B, 0x96, 0xD3, 0xEB, 0x3D, 0xBF, 0x34, 0xD9, 0xF7, 0x6B, 0x89,
 0xB9, 0x7A, 0xE9, 0xFF, 0x67, 0x4B, 0x21, 0x65, 0x4B, 0xF1, 0xB0, 0x54, 0x2E, 0x62, 0x62, 0x29,
 0xE6, 0xC9, 0x82, 0x91, 0x97, 0x7C, 0x16, 0x0D, 0x1A, 0x2B, 0x25, 0x55, 0x9E, 0x97, 0x7D, 0x95,
 0x43, 0x40, 0x59, 0x71, 0xE5, 0x35, 0x11, 0x06, 0x34, 0xE0, 0x63, 0x64, 0xF2, 0x41, 0xEB, 0xA7,
 0xD1, 0x94, 0x26, 0x87, 0x24, 0xA5, 0x06, 0x24, 0xCD, 0x65, 0xDC, 0x41, 0xA8, 0xE9, 0x04, 0xEB,
 0x76, 0x6D, 0x6E, 0x12, 0x05, 0xCE, 0x33, 0x77, 0xC4, 0xB1, 0x26, 0x03, 0xF9, 0xB2, 0xCA, 0x09,
 0xD4, 0xC6, 0xBE, 0x12, 0xA4, 0x3E, 0x52, 0x25, 0xA8, 0x61, 0x5A, 0xD0, 0x76, 0xC0, 0x35, 0x5F,
 0x26, 0x51, 0x4C, 0xC6, 0xB2, 0x07, 0x83, 0x35, 0x74, 0x0F, 0xA4, 0x66, 0x6D, 0x34, 0x91, 0x60,
 0xA9, 0x73, 0x29, 0xFC, 0x66, 0xD9, 0xC2, 0x70, 0x4B, 0x57, 0xC9, 0xB0, 0xBD, 0xF4, 0xA5, 0x35,
 0x59, 0x83, 0xE0, 0x0B, 0x6C, 0x62, 0xE0, 0x1E, 0x68, 0x64, 0xF2, 0x7B, 0x00, 0x77, 0x6B, 0xB6,
 0xA3, 0x3D, 0xD6, 0x8E, 0x6A, 0x35, 0x53, 0x55, 0xE9, 0xAE, 0x0B, 0x6D, 0x4E, 0x74, 0x23, 0x0B,
 0x4B, 0x10, 0xAA, 0x9A, 0x59, 0x0C, 0x38, 0x1B, 0x81, 0xAA, 0xBA, 0xC0, 0x11, 0xD6, 0x98, 0x66,
 0xA9, 0x23, 0xF1, 0x97, 0x1D, 0xC9, 0x13, 0xB5, 0x07, 0x95, 0xF5, 0x05, 0xD4, 0x31, 0xAB, 0x25,
 0x86, 0x30, 0xD3, 0x29, 0x13, 0xDE, 0x04, 0x03, 0x90, 0x07, 0x5A, 0xD5, 0x05, 0x14, 0xB5, 0x8E,
 0x1C, 0x4D, 0x44, 0xB8, 0x1C, 0x05, 0xF9, 0xF0, 0x6B, 0x9A, 0x0F, 0xBC, 0xB4, 0x18, 0xDD, 0x97,
 0x80, 0x50, 0xD2, 0xE6, 0xE0, 0x88, 0x8F, 0xF2, 0x21, 0xF4, 0xB2, 0x05, 0x9D, 0x02, 0x58, 0xFC,
 0xC6, 0x71, 0x3E, 0x8A, 0x27, 0xC5, 0x68, 0x42, 0xEF, 0x17, 0x78, 0x51, 0x01, 0xF5, 0xA9, 0xEE,
 0x28, 0x1B, 0xDB, 0x68, 0xCE, 0xF3, 0x41, 0x6B, 0x29, 0x7F, 0xF0, 0xFF, 0x28, 0x7F, 0xCC, 0xC7,
 0x85, 0x34, 0x71, 0x31, 0x1A, 0xB3, 0x42, 0x96, 0x61, 0x18, 0xFF, 0x90, 0x93, 0xA4, 0xD4, 0x13,
 0x97, 0x7A, 0x5A, 0xF1, 0xB3, 0xB6, 0x53, 0x98, 0x8E, 0x31, 0xAA, 0xF8, 0xE3, 0xC8, 0xF6, 0xF0,
 0xF7, 0x3C, 0xF2, 0x65, 0x6D, 0x69, 0x5A, 0xA1, 0x31, 0x82, 0x3A, 0x57, 0x37, 0xCB, 0x7E, 0x9A,
 0xFD, 0xB7, 0xAD, 0xE8, 0xD1, 0xF1, 0xE9, 0x71, 0xFF, 0xB8, 0x5C, 0x38, 0x23, 0xE7, 0x25, 0x93,
 0x8A, 0x2B, 0x5D, 0xFA, 0xB2, 0x22, 0x80, 0x02, 0x1B, 0x45, 0x01, 0x7B, 0xDD, 0xDC, 0x54, 0x7E,
 0xF1, 0xB6, 0x77, 0x71, 0x6E, 0xC7, 0x24, 0x01, 0x8F, 0x24, 0x15, 0xE6, 0xC2, 0x82, 0x44, 0xF9,
 0xE0, 0xD7, 0xC7, 0xA5, 0x72, 0x5D, 0x7E, 0x61, 0x70, 0xC4, 0xDC, 0x52, 0xA7, 0xA9, 0x7E, 0x78,
 0xE2, 0x62, 0x5D, 0x99, 0xBF, 0x04, 0x41, 0x72, 0x1A, 0x2D, 0x13, 0x55, 0x11, 0x67, 0x46, 0xE5,
 0x30, 0x2F, 0xEE, 0xB2, 0x75, 0x0D, 0xD3, 0xC8, 0xB4, 0xC4, 0x84, 0xA5, 0xE5, 0x46, 0xA5, 0x12,
 0x14, 0xFE, 0xA2, 0xB6, 0xE7, 0x8B, 0x91, 0x24, 0xB7, 0x5A, 0x73, 0xAB, 0x6F, 0x41, 0x2A, 0x3E,
 0x58, 0x04, 0x23, 0x66, 0x39, 0xDB, 0x16, 0x77, 0xA3, 0x43, 0xEE, 0x61, 0x5C, 0x7F, 0xBA, 0x35,
 0x78, 0xD2, 0x3C, 0x79, 0x61, 0x9E, 0xFC, 0xB1, 0x7B, 0x2E, 0x1C, 0x45, 0xF9, 0xDA, 0xE2, 0x98,
 0xF6, 0x10, 0x58, 0xBB, 0x6D, 0x2F, 0x7D, 0x18, 0x20, 0xD2, 0x83, 0xCB, 0x00, 0xF4, 0x63, 0x58,
 0xFF, 0x4A, 0xEE, 0x88, 0x7A, 0x09, 0xAA, 0xA2, 0xAD, 0x73, 0x54, 0xD8, 0xEE, 0xFD, 0x81, 0xA3,
 0xF2, 0xCE, 0x65, 0x18, 0x48, 0x97, 0xC3, 0x92, 0x37, 0x8B, 0x75, 0xC1, 0x61, 0x19, 0x31, 0x64,
 0x6C, 0x00, 0xE3, 0xCD, 0x5D, 0x49, 0x13, 0xD5, 0x1C, 0xB4, 0xF0, 0x1B, 0x08, 0x8A, 0x4F, 0x39,
 0xCE, 0x9A, 0x38, 0xAD, 0x62, 0x72, 0xC5, 0x23, 0xC8, 0x4A, 0x67, 0x89, 0xC0, 0x6E, 0x10, 0x0D,
 0x0D, 0x7C, 0x64, 0x9A, 0xA1, 0xB6, 0x1D, 0x3E, 0x37, 0xD7, 0xBC, 0xD9, 0x54, 0xFA, 0x4B, 0x62,
 0x79, 0xD5, 0xB0, 0x8B, 0x1C, 0x56, 0xCC, 0x75, 0x7D, 0x1F, 0xF4, 0xA3, 0x4E, 0x29, 0xAF, 0x48,
 0xA4, 0x53, 0xD1, 0x83, 0xC4, 0x86, 0xA2, 0x41, 0xBE, 0x91, 0x40, 0x44, 0x72, 0x4A, 0x33, 0x5D,
 0xC7, 0xCA, 0xD2, 0x0B, 0x28, 0x49, 0x7A, 0xB2, 0x73, 0x95, 0x49, 0x6B, 0x25, 0x06, 0xFE, 0xC8,
 0xD7, 0xF0, 0xC7, 0xA1, 0xD0, 0xA3, 0x83, 0x9B, 0x49, 0x2B, 0x83, 0xA4, 0x23, 0x64, 0x83, 0xA9,
 0x37, 0xE4, 0xBB, 0xA8, 0x2D, 0x2F, 0xCB, 0xB4, 0x16, 0x50, 0x70, 0x71, 0x83, 0xBB, 0x11, 0x30,
 0x52, 0x5A, 0xC4, 0x9E, 0x94, 0xA8, 0xC7, 0x8F, 0x10, 0x1F, 0x53, 0x4A, 0x20, 0x06, 0x20, 0xA6,
 0x40, 0xD0, 0xA7, 0x42, 0x8A, 0x54, 0xE6, 0x92, 0x53, 0x2A, 0x20, 0xCA, 0x48, 0xCD, 0xE2, 0xC1,
 0x85, 0x78, 0xD4, 0x46, 0xD6, 0x80, 0xFD, 0xDC, 0xBD, 0x73, 0x33, 0xDE, 0x90, 0x68, 0x09, 0x56,
 0x36, 0x3D, 0x9A, 0xA6, 0x52, 0x5C, 0x54, 0xC7, 0x19, 0xF8, 0xA8, 0xA1, 0x03, 0x5A, 0x23, 0x84,
 0x11, 0x1E, 0x84, 0x8A, 0x01, 0x40, 0x7F, 0x42, 0xC3, 0x1C, 0x22, 0x70, 0x08, 0x20, 0x82, 0xA0,
 0x7F, 0x49, 0x0D, 0xF7, 0x64, 0x05, 0xC9, 0xF8, 0xD8, 0x6D, 0x35, 0xF0, 0x9D, 0x66, 0x95, 0xEC,
 0x20, 0xA5, 0xBD, 0x68, 0x24, 0xFA, 0x64, 0x98, 0x1A, 0x50, 0x00, 0xAC, 0xD9, 0x01, 0xA0, 0x1E,
 0x24, 0x5E, 0x63, 0x2B, 0x3F, 0xEF, 0x04, 0x2A, 0xBB, 0x00, 0xAB, 0xBB, 0x8E, 0x87, 0x5F, 0x39,
 0x4F, 0x19, 0xA7, 0x39, 0x26, 0x00, 0x7B, 0x93, 0x68, 0x7A, 0x99, 0x30, 0x2E, 0xCE, 0x64, 0x1B,
 0x6A, 0x6C, 0xB4, 0xE4, 0xF5, 0xA9, 0x87, 0x15, 0x79, 0x3F, 0xC5, 0x8B, 0xCB, 0x0C, 0xF3, 0xBA,
 0x53, 0x79, 0x77, 0xB1, 0x86, 0x70, 0x21, 0x50, 0x66, 0x38, 0xB3, 0x29, 0x74, 0xB0, 0xFA, 0xA1,
 0x48, 0x82, 0x7A, 0x4F, 0xB7, 0x42, 0xE2, 0xC1, 0x44, 0xED, 0x81, 0xF9, 0xDC, 0xC2, 0xD8, 0xE1,
 0x94, 0x83, 0x5A, 0x0A, 0xB5, 0x02, 0x45, 0xC6, 0x95, 0xCD, 0x98, 0x35, 0x1D, 0x6A, 0x58, 0x88,
 0x61, 0xE0, 0xAF, 0xFE, 0x05, 0x0F, 0x1E, 0x1C, 0xC8, 0x55, 0x3F, 0xE1, 0x23, 0xE3, 0x7E, 0xF4,
 0x23, 0x3E, 0x3E, 0xAF, 0xF0, 0xF1, 0x79, 0x1D, 0x1F, 0xB4, 0xAA, 0x3C, 0x98, 0x0C, 0x80, 0xEC,
 0x19, 0xE1, 0x64, 0x4C, 0x13, 0x58, 0xC0, 0x43, 0x50, 0x25, 0x7F, 0x8B, 0xB3, 0x84, 0xFE, 0x98,
 0xB3, 0xDE, 0x84, 0x8D, 0xC4, 0x23, 0xFE, 0x8A, 0xD5, 0xFF, 0x82, 0x4B, 0x3C, 0x70, 0x3D, 0x97,
 0x79, 0x6D, 0x5A, 0x49, 0x28, 0x3F, 0x7E, 0x2B, 0x91, 0x7E, 0xE4, 0x42, 0x78, 0xA9, 0x38, 0xC8,
 0xDF, 0xB7, 0xF4, 0x00, 0xBC, 0x11, 0xF8, 0x29, 0x35, 0x75, 0xBC, 0x0B, 0xA5, 0xFC, 0x29, 0x30,
 0x64, 0xA8, 0xC0, 0x47, 0xDD, 0xD9, 0xDC, 0x12, 0xAE, 0x01, 0x8A, 0xF1, 0xA3, 0x29, 0xB0, 0xEA,
 0xC9, 0x02, 0xD7, 0x9E, 0x40, 0x26, 0x04, 0x91, 0xE0, 0x48, 0xC8, 0xA7, 0x8D, 0x2F, 0x07, 0x9B,
 0x37, 0x35, 0xC8, 0x43, 0x2E, 0xFC, 0x98, 0x2E, 0x0C, 0x36, 0x6F, 0xFE, 0x6D, 0x36, 0xC6, 0xCC,
 0x5A, 0x76, 0xA4, 0x96, 0x4C, 0xF6, 0xF4, 0x0B, 0xBF, 0x71, 0x09, 0x48, 0x5D, 0x49, 0x78, 0x45,
 0x34, 0x03, 0x6B, 0x43, 0x61, 0xE1, 0x07, 0xFF, 0x47, 0x09, 0xF8, 0x91, 0x9E, 0x07, 0xCE, 0xBD,
 0xE6, 0x3D, 0x5E, 0x2F, 0x3E, 0x85, 0xE9, 0x56, 0xE9, 0xC1, 0x4A, 0xC7, 0xEF, 0x53, 0x3A, 0x76,
 0x59, 0xA2, 0x14, 0x4A, 0x14, 0x59, 0x88, 0x1A, 0x6A, 0x50, 0x0E, 0x51, 0x98, 0x89, 0x17, 0xCD,
 0x81, 0x02, 0x9B, 0x73, 0x34, 0x5B, 0x3A, 0x02, 0x0F, 0xF4, 0xF5, 0x45, 0xEE, 0xFC, 0x74, 0x76,
 0x7A, 0x22, 0x44, 0x7C, 0xA5, 0x62, 0x22, 0xD0, 0xAA, 0x2E, 0x2C, 0x2F, 0xCF, 0x9C, 0x89, 0xE4,
 0xA1, 0x28, 0x75, 0x30, 0x31, 0x28, 0x87, 0xFE, 0x74, 0x31, 0xFC, 0x0A, 0x71, 0xD6, 0xD0, 0xCF,
 0x52, 0x48, 0x58, 0x5B, 0x36, 0xA2, 0xF7, 0xFB, 0x97, 0xF6, 0xAE, 0xDD, 0x84, 0xBA, 0x00, 0xB4,
 0x0A, 0x69, 0x19, 0xEE, 0x7D, 0xFE, 0xB7, 0x90, 0xB7, 0xFF, 0x1E, 0x32, 0x83, 0xA8, 0x95, 0x42,
 0x58, 0x2A, 0xF0, 0xAB, 0xB8, 0x93, 0x24, 0x9A, 0x4A, 0xB4, 0xE3, 0x24, 0xC1, 0x4B, 0xE9, 0x43,
 0x85, 0xA2, 0x0D, 0x61, 0x31, 0xA5, 0x89, 0xE6, 0x47, 0x34, 0xD5, 0x78, 0x24, 0xB4, 0x34, 0x8B,
 0x63, 0x68, 0x5C, 0x56, 0xF4, 0x61, 0xEB, 0xC5, 0xEB, 0xCB, 0xFB, 0x8C, 0x66, 0xD4, 0xCF, 0x97,
 0x69, 0x52, 0xD1, 0x0B, 0x56, 0x50, 0xDF, 0x10, 0xEE, 0x7E, 0xB9, 0xC9, 0xEB, 0xA9, 0x8C, 0x73,
 0x8C, 0xA2, 0x1B, 0x2D, 0x35, 0x07, 0xE9, 0x26, 0x40, 0xD5, 0xE5, 0x59, 0x10, 0xCC, 0xDB, 0x2B,
 0xB4, 0xA0, 0xF1, 0x8A, 0x44, 0x24, 0x9F, 0xCB, 0x67, 0x7F, 0xE4, 0xC9, 0xA9, 0xE2, 0x82, 0x50,
 0xF2, 0x54, 0xA9, 0x36, 0xAD, 0x0D, 0x63, 0x83, 0x6A, 0x8C, 0xA7, 0x82, 0x70, 0x0F, 0xAF, 0x51,
 0xE9, 0xC2, 0x2C, 0x6A, 0x29, 0xDC, 0xDE, 0x46, 0x5F, 0xCB, 0x6D, 0xE9, 0x89, 0x7C, 0x2A, 0x25,
 0xE3, 0xAE, 0xAE, 0x63, 0x55, 0x45, 0xB1, 0x3E, 0x25, 0x61, 0x5A, 0x26, 0x5B, 0x54, 0x06, 0x26,
 0x77, 0x0B, 0x70, 0x9B, 0x06, 0x29, 0x1C, 0xBD, 0x7E, 0x7F, 0xCE, 0x46, 0xD1, 0xCE, 0x11, 0x80,
 0x69, 0xC5, 0x3E, 0x93, 0xD7, 0xE0, 0x24, 0xCC, 0x73, 0x07, 0x32, 0xE9, 0x4A, 0x03, 0x0E, 0xA9,
 0x98, 0x44, 0xFE, 0x81, 0x7E, 0xA0, 0x3B, 0x3A, 0xFC, 0xBB, 0x09, 0x35, 0x47, 0xCD, 0xA5, 0xD0,
 0xA4, 0xFA, 0x74, 0x70, 0xF5, 0x06, 0xC2, 0x53, 0x0C, 0xA5, 0x01, 0x17, 0x50, 0x34, 0xD7, 0x74,
 0x7C, 0x7A, 0x7D, 0x0C, 0x29, 0xC8, 0x7F, 0x21, 0x37, 0x66, 0xBB, 0xAA, 0x6C, 0xB8, 0xF3, 0xEA,
 0x75, 0x56, 0x2E, 0x03, 0x7A, 0x61, 0x8C, 0x58, 0x0F, 0x29, 0x7E, 0xFB, 0x7B, 0xF4, 0x9E, 0x8D,
 0x15, 0xD2, 0x6A, 0x5D, 0x6F, 0xCE, 0x76, 0x90, 0x67, 0x89, 0xD5, 0x43, 0x2C, 0x70, 0x97, 0x1F,
 0x29, 0x59, 0x95, 0x35, 0xDC, 0xF6, 0x48, 0x10, 0xE0, 0xC7, 0x5A, 0x03, 0x1B, 0x6A, 0x22, 0xB2,
 0xD4, 0x42, 0x22, 0x29, 0x08, 0x90, 0xD2, 0x3E, 0x84, 0x39, 0xD3, 0x92, 0x65, 0x86, 0xB2, 0xA1,
 0xBC, 0xFF, 0xC5, 0x9A, 0xA3, 0x64, 0x46, 0xE8, 0xCE, 0xF9, 0x6C, 0x73, 0x53, 0xD8, 0x85, 0x99,
 0x18, 0x05, 0x52, 0x8A, 0x01, 0x1C, 0x9A, 0x7D, 0x68, 0x2D, 0x8C, 0xB2, 0x90, 0x58, 0xAB, 0x3D,
 0xD2, 0xB6, 0x51, 0x55, 0x03, 0x54, 0x7C, 0x46, 0x01, 0x03, 0xCE, 0xB2, 0x24, 0x80, 0xA8, 0x8B,
 0x39, 0xBA, 0xB2, 0x2D, 0xC5, 0xBA, 0xD0, 0x84, 0x0E, 0xEC, 0x67, 0xC8, 0x12, 0x95, 0x97, 0xAD,
 0xA2, 0x27, 0x12, 0xC5, 0x77, 0x95, 0x9E, 0xC8, 0x6F, 0xE5, 0x84, 0xAA, 0xC8, 0x77, 0x88, 0x2F,
 0x13, 0x5C, 0xD4, 0xD1, 0x13, 0xA0, 0x24, 0x83, 0x52, 0x34, 0x60, 0x2A, 0x2C, 0x37, 0xEE, 0xEB,
 0xD3, 0xE9, 0xB4, 0x8E, 0xDF, 0x6A, 0xEB, 0x70, 0x82, 0xB2, 0x02, 0x5F, 0x5F, 0xC7, 0x21, 0x47,
 0x15, 0x58, 0xF8, 0x6E, 0xE1, 0xAC, 0xBA, 0xE8, 0x42, 0x7F, 0x2B, 0xDE, 0xD4, 0xAA, 0xD2, 0x59,
 0xE1, 0x73, 0x79, 0xDB, 0x7B, 0x3B, 0x2B, 0x20, 0x32, 0xC4, 0xAF, 0xB2, 0x90, 0x69, 0x20, 0x0D,
 0x3B, 0xE5, 0x46, 0x56, 0x25, 0x85, 0x65, 0x5C, 0xB0, 0xE3, 0x2C, 0x9D, 0x18, 0x33, 0x60, 0xDD,
 0x11, 0x96, 0xD2, 0x95, 0x43, 0x2D, 0x65, 0xB7, 0x0E, 0xB7, 0x0A, 0xFB, 0x70, 0x30, 0x83, 0x94,
 0x79, 0xFB, 0xF3, 0x4F, 0x39, 0x5B, 0xDE, 0xF6, 0x92, 0x62, 0x71, 0xE1, 0xF3, 0xFC, 0xA9, 0x35,
 0xAF, 0x69, 0xA5, 0xD1, 0xAF, 0xC4, 0x97, 0xBD, 0x46, 0xFE, 0x19, 0x3B, 0xFF, 0x9C, 0xAD, 0x81,
 0xB1, 0x43, 0x23, 0x2A, 0xDC, 0x4C, 0x8C, 0xEA, 0x2F, 0x34, 0xE6, 0x63, 0x79, 0x29, 0xBF, 0x2D,
 0xA0, 0x54, 0xA9, 0xD3, 0x68, 0x78, 0x3E, 0xFF, 0x9A, 0x42, 0x19, 0x1D, 0x65, 0xFE, 0x28, 0x20,
 0x09, 0xC5, 0x82, 0xA3, 0x41, 0xBE, 0x92, 0xFB, 0x46, 0xC0, 0x86, 0x69, 0x03, 0x93, 0x6D, 0xCB,
 0xDE, 0xB2, 0x77, 0x71, 0x64, 0x7F, 0x4D, 0xF7, 0x57, 0x4F, 0xD8, 0x5F, 0x34, 0x69, 0x58, 0x0B,
 0xE7, 0xB5, 0xAB, 0x8A, 0x4D, 0x6A, 0x83, 0xFB, 0xC4, 0xA7, 0x70, 0x3D, 0x6F, 0xB3, 0xCC, 0xB6,
 0x1A, 0xE4, 0x5F, 0x60, 0xD4, 0x31, 0xBA, 0x95, 0x2F, 0x92, 0xF4, 0x81, 0x7B, 0x18, 0x5B, 0x17,
 0x54, 0x26, 0x70, 0x49, 0xD5, 0x87, 0x34, 0xB9, 0xD3, 0x9C, 0x2F, 0x39, 0xC3, 0xB7, 0x3C, 0xA8,
 0x03, 0xE4, 0x37, 0x9C, 0x72, 0x39, 0xB0, 0xBF, 0x07, 0x5D, 0x33, 0x2A, 0x41, 0x79, 0xB1, 0x26,
 0x9B, 0xE6, 0x7C, 0x02, 0x82, 0x01, 0x70, 0xB1, 0xA3, 0x48, 0xCD, 0x2B, 0xCB, 0x98, 0x9B, 0x57,
 0x96, 0x54, 0xE2, 0x5F, 0x59, 0xCC, 0xDB, 0x9F, 0xFC, 0xDB, 0x4C, 0xF9, 0x7F, 0x5B, 0x28, 0x36,
 0x32, 0xF9, 0xE1, 0x09, 0xF7, 0x56, 0x3F, 0x45, 0xAD, 0x47, 0x51, 0xBB, 0xF7, 0xFF, 0x17, 0x53,
 0xE8, 0x9D, 0x36, 0x92, 0x29, 0x00, 0x00
};

#define SPIFFS_MAXLENGTH_FILEPATH 32
const char *excludeListFile = "/.exclude.files";

typedef struct ExcludeListS {
    char *item;
    ExcludeListS *next;
} ExcludeList;

static ExcludeList *excludes = NULL;

static bool matchWild(const char *pattern, const char *testee) {
  const char *nxPat = NULL, *nxTst = NULL;

  while (*testee) {
    if (( *pattern == '?' ) || (*pattern == *testee)){
      pattern++;testee++;
      continue;
    }
    if (*pattern=='*'){
      nxPat=pattern++; nxTst=testee;
      continue;
    }
    if (nxPat){ 
      pattern = nxPat+1; testee=++nxTst;
      continue;
    }
    return false;
  }
  while (*pattern=='*'){pattern++;}  
  return (*pattern == 0);
}

static bool addExclude(const char *item){
    size_t len = strlen(item);
    if(!len){
        return false;
    }
    ExcludeList *e = (ExcludeList *)malloc(sizeof(ExcludeList));
    if(!e){
        return false;
    }
    e->item = (char *)malloc(len+1);
    if(!e->item){
        free(e);
        return false;
    }
    memcpy(e->item, item, len+1);
    e->next = excludes;
    excludes = e;
    return true;
}

static void loadExcludeList(FileSystem &_fs, const char *filename){
    static char linebuf[SPIFFS_MAXLENGTH_FILEPATH];
    File excludeFile=_fs.open(filename);
    if(!excludeFile){
        //addExclude("/*.js.gz");
        return;
    }
#ifdef ESP32
    if(excludeFile->isDirectory()){
      excludeFile->close();
      return;
    }
#endif
    if (excludeFile->size() > 0){
      uint8_t idx;
      bool isOverflowed = false;
      while (excludeFile->available()){
        linebuf[0] = '\0';
        idx = 0;
        int lastChar;
        do {
          lastChar = excludeFile->read();
          if(lastChar != '\r'){
            linebuf[idx++] = (char) lastChar;
          }
        } while ((lastChar >= 0) && (lastChar != '\n') && (idx < SPIFFS_MAXLENGTH_FILEPATH));

        if(isOverflowed){
          isOverflowed = (lastChar != '\n');
          continue;
        }
        isOverflowed = (idx >= SPIFFS_MAXLENGTH_FILEPATH);
        linebuf[idx-1] = '\0';
        if(!addExclude(linebuf)){
            excludeFile->close();
            return;
        }
      }
    }
    excludeFile->close();
}

static bool isExcluded(FileSystem &_fs, const char *filename) {
  if(excludes == NULL){
      loadExcludeList(_fs, excludeListFile);
  }
  ExcludeList *e = excludes;
  while(e){
    if (matchWild(e->item, filename)){
      return true;
    }
    e = e->next;
  }
  return false;
}

// WEB HANDLER IMPLEMENTATION

#ifdef ESP32
SPIFFSEditor::SPIFFSEditor(const FileSystem& fs, const String& username, const String& password)
#else
SPIFFSEditor::SPIFFSEditor(const String& username, const String& password, const FileSystem& fs)
#endif
:_fs(fs)
,_username(username)
,_password(password)
,_authenticated(false)
,_startTime(0)
{}

bool SPIFFSEditor::canHandle(AsyncWebServerRequest *request){
  if(request->url().equalsIgnoreCase("/edit")){
    if(request->method() == HTTP_GET){
      if(request->hasParam("list"))
        return true;
      if(request->hasParam("edit")){
        request->_tempFile = _fs.open(request->arg("edit"));
        if(!request->_tempFile){
          return false;
        }
#ifdef ESP32
        if(request->_tempFile->isDirectory()){
          request->_tempFile->close();
          return false;
        }
#endif
      }
      if(request->hasParam("download")){
        request->_tempFile = _fs.open(request->arg("download"));
        if(!request->_tempFile){
          return false;
        }
#ifdef ESP32
        if(request->_tempFile->isDirectory()){
          request->_tempFile->close();
          return false;
        }
#endif
      }
      request->addInterestingHeader("If-Modified-Since");
      return true;
    }
    else if(request->method() == HTTP_POST)
      return true;
    else if(request->method() == HTTP_DELETE)
      return true;
    else if(request->method() == HTTP_PUT)
      return true;

  }
  return false;
}


void SPIFFSEditor::handleRequest(AsyncWebServerRequest *request){
  if(_username.length() && _password.length() && !request->authenticate(_username.c_str(), _password.c_str()))
    return request->requestAuthentication();

  if(request->method() == HTTP_GET){
    if(request->hasParam("list")){
      String path = request->getParam("list")->value();
#ifdef ESP32
      File dir = _fs.open(path);
#else
      Dir dir = _fs.openDir(path);
#endif
      path = String();
      String output = "[";
#ifdef ESP32
      File entry = dir->openNextFile();
      while(entry){
#else
      while(dir->next()){
        File entry = dir->openFile("r");
#endif
        if (isExcluded(_fs, entry->name())) {
#ifdef ESP32
            entry = dir->openNextFile();
#endif
            continue;
        }
        if (output != "[") output += ',';
        output += "{\"type\":\"";
        output += "file";
        output += "\",\"name\":\"";
        output += String(entry->name());
        output += "\",\"size\":";
        output += String(entry->size());
        output += "}";
#ifdef ESP32
        entry = dir->openNextFile();
#else
        entry->close();
#endif
      }
#ifdef ESP32
      dir->close();
#endif
      output += "]";
      request->send(200, "application/json", output);
      output = String();
    }
    else if(request->hasParam("edit") || request->hasParam("download")){
      request->send(request->_tempFile, request->_tempFile->name(), String(), request->hasParam("download"));
    }
    else {
      const char * buildTime = __DATE__ " " __TIME__ " GMT";
      if (request->header("If-Modified-Since").equals(buildTime)) {
        request->send(304);
      } else {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", edit_htm_gz, edit_htm_gz_len);
        response->addHeader("Content-Encoding", "gzip");
        response->addHeader("Last-Modified", buildTime);
        request->send(response);
      }
    }
  } else if(request->method() == HTTP_DELETE){
    if(request->hasParam("path", true)){
        _fs.remove(request->getParam("path", true)->value());
      request->send(200, "", "DELETE: "+request->getParam("path", true)->value());
    } else
      request->send(404);
  } else if(request->method() == HTTP_POST){
    if(request->hasParam("data", true, true) && _fs.exists(request->getParam("data", true, true)->value()))
      request->send(200, "", "UPLOADED: "+request->getParam("data", true, true)->value());
    else
      request->send(500);
  } else if(request->method() == HTTP_PUT){
    if(request->hasParam("path", true)){
      String filename = request->getParam("path", true)->value();
      if(_fs.exists(filename)){
        request->send(200);
      } else {
        File f = _fs.open(filename, FEmbed::FM_WRONLY);
        if(f){
          f->write((uint8_t)0x00);
          f->close();
          request->send(200, "", "CREATE: "+filename);
        } else {
          request->send(500);
        }
      }
    } else
      request->send(400);
  }
}

void SPIFFSEditor::handleUpload(AsyncWebServerRequest *request, const String& filename, size_t index, uint8_t *data, size_t len, bool final){
  if(!index){
    if(!_username.length() || request->authenticate(_username.c_str(),_password.c_str())){
      _authenticated = true;
      request->_tempFile = _fs.open(filename, FEmbed::FM_WRONLY);
      _startTime = millis();
    }
  }
  if(_authenticated && request->_tempFile){
    if(len){
      request->_tempFile->write(data,len);
    }
    if(final){
      request->_tempFile->close();
    }
  }
}
