#include "font.h"
const unsigned char F6x8[92][6] =
{
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   //sp0
    { 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00 },   // !1
    { 0x00, 0x00, 0x07, 0x00, 0x07, 0x00 },   // "2
    { 0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14 },   // #3
    { 0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12 },   // $4
    { 0x00, 0x62, 0x64, 0x08, 0x13, 0x23 },   // %5
    { 0x00, 0x36, 0x49, 0x55, 0x22, 0x50 },   // &6
    { 0x00, 0x00, 0x05, 0x03, 0x00, 0x00 },   // '7
    { 0x00, 0x00, 0x1c, 0x22, 0x41, 0x00 },   // (8
    { 0x00, 0x00, 0x41, 0x22, 0x1c, 0x00 },   // )9
    { 0x00, 0x14, 0x08, 0x3E, 0x08, 0x14 },   // *10
    { 0x00, 0x08, 0x08, 0x3E, 0x08, 0x08 },   // +11
    { 0x00, 0x00, 0x00, 0xA0, 0x60, 0x00 },   // ,12
    { 0x00, 0x08, 0x08, 0x08, 0x08, 0x08 },   // -13
    { 0x00, 0x00, 0x60, 0x60, 0x00, 0x00 },   // .14
    { 0x00, 0x20, 0x10, 0x08, 0x04, 0x02 },   // /15
    { 0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E },   // 016
    { 0x00, 0x00, 0x42, 0x7F, 0x40, 0x00 },   // 117
    { 0x00, 0x42, 0x61, 0x51, 0x49, 0x46 },   // 218
    { 0x00, 0x21, 0x41, 0x45, 0x4B, 0x31 },   // 319
    { 0x00, 0x18, 0x14, 0x12, 0x7F, 0x10 },   // 420
    { 0x00, 0x27, 0x45, 0x45, 0x45, 0x39 },   // 521
    { 0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30 },   // 622
    { 0x00, 0x01, 0x71, 0x09, 0x05, 0x03 },   // 723
    { 0x00, 0x36, 0x49, 0x49, 0x49, 0x36 },   // 824
    { 0x00, 0x06, 0x49, 0x49, 0x29, 0x1E },   // 925
    { 0x00, 0x00, 0x36, 0x36, 0x00, 0x00 },   // :26
    { 0x00, 0x00, 0x56, 0x36, 0x00, 0x00 },   // ;27
    { 0x00, 0x08, 0x14, 0x22, 0x41, 0x00 },   // <28
    { 0x00, 0x14, 0x14, 0x14, 0x14, 0x14 },   // =29
    { 0x00, 0x00, 0x41, 0x22, 0x14, 0x08 },   // >30
    { 0x00, 0x02, 0x01, 0x51, 0x09, 0x06 },   // ?31
    { 0x00, 0x32, 0x49, 0x59, 0x51, 0x3E },   // @32
    { 0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C },   // A33
    { 0x00, 0x7F, 0x49, 0x49, 0x49, 0x36 },   // B34
    { 0x00, 0x3E, 0x41, 0x41, 0x41, 0x22 },   // C35
    { 0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C },   // D36
    { 0x00, 0x7F, 0x49, 0x49, 0x49, 0x41 },   // E37
    { 0x00, 0x7F, 0x09, 0x09, 0x09, 0x01 },   // F38
    { 0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A },   // G39
    { 0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F },   // H40
    { 0x00, 0x00, 0x41, 0x7F, 0x41, 0x00 },   // I41
    { 0x00, 0x20, 0x40, 0x41, 0x3F, 0x01 },   // J42
    { 0x00, 0x7F, 0x08, 0x14, 0x22, 0x41 },   // K43
    { 0x00, 0x7F, 0x40, 0x40, 0x40, 0x40 },   // L44
    { 0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F },   // M45
    { 0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F },   // N46
    { 0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E },   // O47
    { 0x00, 0x7F, 0x09, 0x09, 0x09, 0x06 },   // P48
    { 0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E },   // Q49
    { 0x00, 0x7F, 0x09, 0x19, 0x29, 0x46 },   // R50
    { 0x00, 0x46, 0x49, 0x49, 0x49, 0x31 },   // S51
    { 0x00, 0x01, 0x01, 0x7F, 0x01, 0x01 },   // T52
    { 0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F },   // U53
    { 0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F },   // V54
    { 0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F },   // W55
    { 0x00, 0x63, 0x14, 0x08, 0x14, 0x63 },   // X56
    { 0x00, 0x07, 0x08, 0x70, 0x08, 0x07 },   // Y57
    { 0x00, 0x61, 0x51, 0x49, 0x45, 0x43 },   // Z58
    { 0x00, 0x00, 0x7F, 0x41, 0x41, 0x00 },   // [59
    { 0x00, 0x02, 0x04, 0x08, 0x10, 0x20 },   // \60
    { 0x00, 0x00, 0x41, 0x41, 0x7F, 0x00 },   // ]61
    { 0x00, 0x04, 0x02, 0x01, 0x02, 0x04 },   // ^62
    { 0x00, 0x40, 0x40, 0x40, 0x40, 0x40 },   // _63
    { 0x00, 0x00, 0x01, 0x02, 0x04, 0x00 },   // '64
    { 0x00, 0x20, 0x54, 0x54, 0x54, 0x78 },   // a65
    { 0x00, 0x7F, 0x48, 0x44, 0x44, 0x38 },   // b66
    { 0x00, 0x38, 0x44, 0x44, 0x44, 0x20 },   // c67
    { 0x00, 0x38, 0x44, 0x44, 0x48, 0x7F },   // d68
    { 0x00, 0x38, 0x54, 0x54, 0x54, 0x18 },   // e69
    { 0x00, 0x08, 0x7E, 0x09, 0x01, 0x02 },   // f70
    { 0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C },   // g71
    { 0x00, 0x7F, 0x08, 0x04, 0x04, 0x78 },   // h72
    { 0x00, 0x00, 0x44, 0x7D, 0x40, 0x00 },   // i73
    { 0x00, 0x40, 0x80, 0x84, 0x7D, 0x00 },   // j74
    { 0x00, 0x7F, 0x10, 0x28, 0x44, 0x00 },   // k75
    { 0x00, 0x00, 0x41, 0x7F, 0x40, 0x00 },   // l76
    { 0x00, 0x7C, 0x04, 0x18, 0x04, 0x78 },   // m77
    { 0x00, 0x7C, 0x08, 0x04, 0x04, 0x78 },   // n78
    { 0x00, 0x38, 0x44, 0x44, 0x44, 0x38 },   // o79
    { 0x00, 0xFC, 0x24, 0x24, 0x24, 0x18 },   // p80
    { 0x00, 0x18, 0x24, 0x24, 0x18, 0xFC },   // q81
    { 0x00, 0x7C, 0x08, 0x04, 0x04, 0x08 },   // r82
    { 0x00, 0x48, 0x54, 0x54, 0x54, 0x20 },   // s83
    { 0x00, 0x04, 0x3F, 0x44, 0x40, 0x20 },   // t84
    { 0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C },   // u85
    { 0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C },   // v86
    { 0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C },   // w87
    { 0x00, 0x44, 0x28, 0x10, 0x28, 0x44 },   // x88
    { 0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C },   // y89
    { 0x00, 0x44, 0x64, 0x54, 0x4C, 0x44 },   // z90
    { 0x14, 0x14, 0x14, 0x14, 0x14, 0x14 }    // horiz lines91
};