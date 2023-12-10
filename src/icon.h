/**
 * @file icon.h
 *
 * @brief Icon bitmaps
 *
 */

#pragma once

#define logo_width 23
#define logo_height 58
#define startLogoRancilio_width 40
#define startLogoRancilio_height 40
#define startLogoGaggia_width 128
#define startLogoGaggia_height 46
#define startLogoQuickMill_width 84
#define startLogoQuickMill_height 46
#define brewlogo_width 64
#define brewlogo_height 59
#define Rancilio_Silvia_Logo_width 52
#define Rancilio_Silvia_Logo_height 49
#define Gaggia_Classic_Logo_width 46
#define Gaggia_Classic_Logo_height 49
#define Heiz_Logo_width 38
#define Heiz_Logo_height 49
#define OFFLogo_width 52
#define OFFLogo_height 53
#define steamlogo_width 60
#define steamlogo_height 58
#define water_empty_big_width 47
#define water_empty_big_height 64

static const unsigned char PROGMEM logo_bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x01, 0xff, 0x00, 0x03, 0x83, 0x80, 0x03, 0x01, 0x80, 0x06,
    0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00,
    0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0,
    0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06,
    0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00,
    0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0,
    0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06,
    0x00, 0xc0, 0x06, 0x00, 0xc0, 0x06, 0x00, 0xc0, 0x0e, 0x00, 0xe0, 0x18, 0x00, 0x70, 0x38, 0x00,
    0x30, 0x30, 0x7c, 0x18, 0x30, 0xfe, 0x18, 0x61, 0xff, 0x18, 0x61, 0xff, 0x08, 0x61, 0xff, 0x08,
    0x61, 0xff, 0x08, 0x21, 0xfe, 0x18, 0x30, 0xfc, 0x18, 0x30, 0x38, 0x30, 0x18, 0x00, 0x30, 0x0c,
    0x00, 0xe0, 0x07, 0x01, 0xc0, 0x03, 0xff, 0x80, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00
};

// Rancilio Logo
static const unsigned char PROGMEM startLogoRancilio_bits [] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x80, 0xff, 0x01, 0x7e, 0x00,
    0xc0, 0xff, 0x07, 0xfe, 0x00, 0xf0, 0xff, 0x0f, 0xfe, 0x01, 0xf0, 0xff,
    0x1f, 0xfe, 0x03, 0xf8, 0xff, 0x3f, 0xfc, 0x07, 0xfc, 0xff, 0x3f, 0xf8,
    0x0f, 0xfc, 0x83, 0x7f, 0xf0, 0x1f, 0xfe, 0x00, 0x7f, 0xe0, 0x3f, 0xfe,
    0x00, 0x7e, 0xc0, 0x7f, 0x7e, 0x00, 0x7e, 0x80, 0xff, 0x7e, 0x00, 0x7e,
    0x00, 0xff, 0x7f, 0x00, 0x7e, 0x00, 0xfe, 0x7f, 0x00, 0x7e, 0x00, 0xff,
    0x7e, 0x00, 0x7e, 0x80, 0x7f, 0x7e, 0x00, 0x7f, 0x80, 0x7f, 0x7e, 0x80,
    0x7f, 0xc0, 0x3f, 0x7e, 0xc0, 0x3f, 0xe0, 0x1f, 0x7e, 0xe0, 0x1f, 0xf0,
    0x0f, 0x7e, 0xe0, 0x1f, 0xf8, 0x0f, 0x7e, 0xf0, 0x0f, 0xf8, 0x07, 0x7e,
    0xf8, 0x07, 0xfc, 0x03, 0x7e, 0xfc, 0x03, 0xfc, 0x01, 0x7e, 0xfc, 0x01,
    0xfe, 0x00, 0x7e, 0xfe, 0x01, 0xfe, 0x00, 0x7e, 0xff, 0x00, 0x7e, 0x00,
    0xfe, 0x7f, 0x00, 0x7e, 0x00, 0xfe, 0xff, 0x00, 0x7e, 0x00, 0x7e, 0xff,
    0x01, 0x7e, 0x00, 0x7e, 0xfe, 0x03, 0x7e, 0x00, 0x7f, 0xfc, 0x07, 0xfe,
    0x00, 0x7f, 0xf8, 0x0f, 0xfe, 0xc1, 0x3f, 0xf0, 0x1f, 0xfc, 0xff, 0x3f,
    0xe0, 0x3f, 0xf8, 0xff, 0x1f, 0xc0, 0x7f, 0xf8, 0xff, 0x1f, 0x80, 0x7f,
    0xf0, 0xff, 0x0f, 0x00, 0x7f, 0xe0, 0xff, 0x03, 0x00, 0x7e, 0x80, 0xff,
    0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x10
};

// Gaggia Logo
static const unsigned char PROGMEM startLogoGaggia_bits [] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF0, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x0F, 0xE0, 0x03, 0x00, 0x0F, 0x00,
    0x00, 0xFC, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x3F, 0x00, 0xC0, 0x0F, 0xE0, 0x03, 0x00, 0x0F, 0x00,
    0x00, 0xFE, 0x00, 0x00, 0x1E, 0x00, 0x80, 0x3F, 0x00, 0xE0, 0x0F, 0xE0, 0x03, 0x00, 0x0F, 0x00,
    0x00, 0x7F, 0x00, 0x00, 0x1E, 0x00, 0xC0, 0x1F, 0x00, 0xF0, 0x07, 0xE0, 0x03, 0x00, 0x0F, 0x00,
    0x80, 0x1F, 0x00, 0x00, 0x3F, 0x00, 0xE0, 0x07, 0x00, 0xF8, 0x01, 0xE0, 0x03, 0x80, 0x1F, 0x00,
    0xC0, 0x0F, 0x00, 0x00, 0x3F, 0x00, 0xF0, 0x03, 0x00, 0xFC, 0x00, 0xE0, 0x03, 0x80, 0x1F, 0x00,
    0xE0, 0x07, 0x00, 0x00, 0x3F, 0x00, 0xF8, 0x01, 0x00, 0x7E, 0x00, 0xE0, 0x03, 0x80, 0x1F, 0x00,
    0xE0, 0x03, 0x00, 0x80, 0x7F, 0x00, 0xF8, 0x00, 0x00, 0x3E, 0x00, 0xE0, 0x03, 0xC0, 0x3F, 0x00,
    0xF0, 0x01, 0x00, 0x80, 0x7F, 0x00, 0x7C, 0x00, 0x00, 0x1F, 0x00, 0xE0, 0x03, 0xC0, 0x3F, 0x00,
    0xF0, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x3C, 0x00, 0x00, 0x0F, 0x00, 0xE0, 0x03, 0xC0, 0x3F, 0x00,
    0xF8, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x3E, 0x00, 0x80, 0x0F, 0x00, 0xE0, 0x03, 0xC0, 0x3F, 0x00,
    0x78, 0x00, 0x00, 0xC0, 0xF3, 0x00, 0x1E, 0x00, 0x80, 0x07, 0x00, 0xE0, 0x03, 0xE0, 0x79, 0x00,
    0x78, 0x00, 0x00, 0xC0, 0xF3, 0x00, 0x1E, 0x00, 0x80, 0x07, 0x00, 0xE0, 0x03, 0xE0, 0x79, 0x00,
    0x78, 0x00, 0x00, 0xC0, 0xF3, 0x00, 0x1E, 0x00, 0x80, 0x07, 0x00, 0xE0, 0x03, 0xE0, 0x79, 0x00,
    0x78, 0x00, 0x00, 0xC0, 0xF3, 0x00, 0x1E, 0x00, 0x80, 0x07, 0x00, 0xE0, 0x03, 0xE0, 0x79, 0x00,
    0x78, 0xC0, 0x03, 0xE0, 0xF3, 0x01, 0x1E, 0xF0, 0x80, 0x07, 0x3C, 0xE0, 0x03, 0xF0, 0xF9, 0x00,
    0x78, 0xC0, 0x03, 0xE0, 0xE1, 0x01, 0x1E, 0xF0, 0x80, 0x07, 0x3C, 0xE0, 0x03, 0xF0, 0xF0, 0x00,
    0x78, 0xC0, 0x03, 0xE0, 0xE1, 0x01, 0x1E, 0xF0, 0x80, 0x07, 0x3C, 0xE0, 0x03, 0xF0, 0xF0, 0x00,
    0x78, 0xC0, 0x03, 0xF0, 0xE1, 0x03, 0x1E, 0xF0, 0x80, 0x07, 0x3C, 0xE0, 0x03, 0xF8, 0xF0, 0x01,
    0xF8, 0xC0, 0x03, 0xF0, 0xFF, 0x03, 0x3E, 0xF0, 0x80, 0x0F, 0x3C, 0xE0, 0x03, 0xF8, 0xFF, 0x01,
    0xF8, 0xC0, 0x03, 0xF0, 0xFF, 0x03, 0x3E, 0xF0, 0x80, 0x0F, 0x3C, 0xE0, 0x03, 0xF8, 0xFF, 0x01,
    0xF0, 0xC1, 0x03, 0xF0, 0xFF, 0x03, 0x7C, 0xF0, 0x00, 0x1F, 0x3C, 0xE0, 0x03, 0xF8, 0xFF, 0x01,
    0xF0, 0xC1, 0x03, 0xF8, 0xFF, 0x07, 0x7C, 0xF0, 0x00, 0x1F, 0x3C, 0xE0, 0x03, 0xFC, 0xFF, 0x03,
    0xE0, 0xC3, 0x03, 0xF8, 0xFF, 0x07, 0xF8, 0xF0, 0x00, 0x3E, 0x3C, 0xE0, 0x03, 0xFC, 0xFF, 0x03,
    0xE0, 0xC7, 0x03, 0x78, 0x80, 0x07, 0xF8, 0xF1, 0x00, 0x7E, 0x3C, 0xE0, 0x03, 0x3C, 0xC0, 0x03,
    0xC0, 0xCF, 0x03, 0x7C, 0x80, 0x0F, 0xF0, 0xF3, 0x00, 0xFC, 0x3C, 0xE0, 0x03, 0x3E, 0xC0, 0x07,
    0x80, 0xFF, 0x03, 0x7C, 0x80, 0x0F, 0xE0, 0xFF, 0x00, 0xF8, 0x3F, 0xE0, 0x03, 0x3E, 0xC0, 0x07,
    0x00, 0xFF, 0x03, 0x3C, 0x00, 0x0F, 0xC0, 0xFF, 0x00, 0xF0, 0x3F, 0xE0, 0x03, 0x1E, 0x80, 0x07,
    0x00, 0xFE, 0x03, 0x3C, 0x00, 0x0F, 0x80, 0xFF, 0x00, 0xE0, 0x3F, 0xE0, 0x03, 0x1E, 0x80, 0x07,
    0x00, 0xF8, 0x03, 0x3E, 0x00, 0x1F, 0x00, 0xFE, 0x00, 0x80, 0x3F, 0xE0, 0x03, 0x1F, 0x80, 0x0F,
    0x00, 0xE0, 0x03, 0x1E, 0x00, 0x1E, 0x00, 0xF8, 0x00, 0x00, 0x3E, 0xE0, 0x03, 0x0F, 0x00, 0x0F,
    0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F,
    0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F,
    0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F,
    0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// QuickMill Logo
static const unsigned char PROGMEM startLogoQuickMill_bits [] = {
    0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0xfe, 0xff, 0x7f, 0x00, 0x00, 0xe0,
    0xff, 0xff, 0x07, 0x00, 0x80, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xf0,
    0xff, 0x0f, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
    0x3f, 0x00, 0xe0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x7f,
    0x00, 0xf0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00,
    0xf8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0xf8,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0xfc, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x03, 0x7c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0x3e, 0xe0, 0x1f, 0x78,
    0x3c, 0x3e, 0xf8, 0x0c, 0x8f, 0xc7, 0x07, 0x1e, 0xf8, 0x3f, 0x7c, 0x3c,
    0x3e, 0xfe, 0x8f, 0xcf, 0x83, 0x07, 0x0e, 0x7c, 0x7c, 0x3e, 0x3e, 0x1e,
    0x1f, 0x87, 0xe7, 0x01, 0x07, 0x0f, 0x7c, 0x3c, 0x3e, 0x3e, 0x1f, 0x0f,
    0x87, 0x77, 0x00, 0x0f, 0x0f, 0x3c, 0x3c, 0x1e, 0x1e, 0x1f, 0x0f, 0xc7,
    0x3f, 0x00, 0x0e, 0x07, 0x3e, 0x3c, 0x1f, 0x1f, 0x8f, 0x0f, 0xc3, 0x1f,
    0x00, 0x0e, 0x07, 0x3e, 0x1e, 0x1f, 0x8f, 0x8f, 0x07, 0xe0, 0x1f, 0x00,
    0x0e, 0x07, 0x1e, 0x1e, 0x8f, 0x8f, 0xc7, 0x07, 0xe0, 0x7f, 0x00, 0x0e,
    0x07, 0x1f, 0x9f, 0x8f, 0x8f, 0xc7, 0xc3, 0xe1, 0x79, 0x00, 0x0e, 0x0f,
    0x1f, 0x8f, 0x87, 0xc7, 0xc7, 0xc3, 0xf1, 0xf9, 0x00, 0x0e, 0x0f, 0x9f,
    0x8f, 0xc7, 0xc7, 0xe3, 0xe3, 0xf0, 0xf0, 0x00, 0x0f, 0x0e, 0xff, 0x8f,
    0xff, 0xe3, 0xc3, 0xff, 0xf8, 0xf0, 0x00, 0x07, 0x1e, 0xfc, 0x03, 0xff,
    0xe1, 0x81, 0x7f, 0xf8, 0xf0, 0x80, 0x07, 0x3e, 0xfc, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x7c, 0xe0, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xe0, 0x03, 0xf8, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0x03, 0xf8, 0x01, 0x00, 0x00, 0x44, 0x45, 0x00, 0x00,
    0x00, 0xf8, 0x01, 0xf0, 0x07, 0x00, 0x00, 0x6c, 0x45, 0x00, 0x00, 0x00,
    0xfe, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0x7c, 0x45, 0x00, 0x00, 0x80, 0x7f,
    0x00, 0xc0, 0xff, 0x00, 0x00, 0x54, 0x45, 0x00, 0x00, 0xf0, 0x3f, 0x00,
    0x80, 0xff, 0x07, 0x00, 0x44, 0xdd, 0x01, 0x00, 0xfe, 0x1f, 0x00, 0x00,
    0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x0f, 0x00, 0x00, 0xfc,
    0xff, 0x0f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0x00, 0x00, 0xf8, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0xe0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff,
    0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x07, 0x00, 0x00,
    0x00, 0x00
};

static const unsigned char PROGMEM antenna_OK[] = {
    B11111000,
    B10101000,
    B10101000,
    B01110000,
    B00100000,
    B00100000,
    B00100000,
    B00100000
};

static const unsigned char PROGMEM antenna_NOK[] = {
    B10111100,
    B01000100,
    B00100100,
    B00010000,
    B00001000,
    B00010100,
    B00010010,
    B00010001
};

static const unsigned char PROGMEM logo_bits_u8g2[] = {
    0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x80, 0xff, 0x00, 0xc0, 0xc1, 0x01, 0xc0, 0x80, 0x01, 0x60,
    0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00,
    0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03,
    0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60,
    0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00,
    0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03,
    0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x60,
    0x00, 0x03, 0x60, 0x00, 0x03, 0x60, 0x00, 0x03, 0x70, 0x00, 0x07, 0x18, 0x00, 0x0e, 0x1c, 0x00,
    0x0c, 0x0c, 0x3e, 0x18, 0x0c, 0x7f, 0x18, 0x86, 0xff, 0x18, 0x86, 0xff, 0x10, 0x86, 0xff, 0x10,
    0x86, 0xff, 0x10, 0x84, 0x7f, 0x18, 0x0c, 0x3f, 0x18, 0x0c, 0x1c, 0x0c, 0x18, 0x00, 0x0c, 0x18,
    0x00, 0x07, 0xe0, 0x80, 0x03, 0xc0, 0xff, 0x01, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char PROGMEM antenna_OK_u8g2[] = {
    B00011111,
    B00010101,
    B00010101,
    B00001110,
    B00000100,
    B00000100,
    B00000100,
    B00000100
};

static const unsigned char PROGMEM antenna_NOK_u8g2[] = {
    B00111101,
    B00100010,
    B00100100,
    B00001000,
    B00010000,
    B00101000,
    B01001000,
    B10001000
};

static const unsigned char PROGMEM water_EMPTY_u8g2[] = {
    B00001001,
    B01001010,
    B00011100,
    B00010100,
    B00101110,
    B00111110,
    B01011100,
    B10000000
};

// "water empty logo"
static const unsigned char PROGMEM water_EMPTY_big_u8g2[] = {
    0x00,0x00,0xfc,0x07,0x00,0x00,0x00,0x80,0xff,0x3f,0x00,0x00,0x00,0xe0,
    0x07,0xfc,0x00,0x00,0x00,0xf0,0x00,0xe0,0x01,0x00,0x00,0x3c,0xf0,0x81,
    0x03,0x00,0x00,0x1e,0xfe,0x0f,0x07,0x00,0x00,0x87,0x1f,0x3f,0x0e,0x00,
    0x00,0xc3,0x01,0x78,0x1c,0x00,0x80,0xf3,0x00,0xe0,0x38,0x00,0xc0,0x31,
    0x00,0xc0,0x31,0x00,0xc0,0x18,0x00,0x80,0x73,0x00,0xe0,0x1c,0x00,0x00,
    0x67,0x00,0x60,0x0c,0x00,0x00,0xe6,0x00,0x60,0x0e,0x00,0x00,0xc6,0x00,
    0x60,0x06,0x00,0x00,0xcc,0x00,0x70,0x06,0x00,0x00,0xcc,0x00,0x30,0x06,
    0x00,0x00,0xcc,0x00,0xfc,0x0f,0x00,0x00,0xcc,0x00,0xfc,0x1f,0x00,0x00,
    0xcc,0x00,0x0c,0x18,0x00,0x00,0xcc,0x00,0x0c,0x18,0x00,0x00,0xcc,0x00,
    0x0c,0x18,0x00,0x00,0xcc,0x00,0x0c,0x18,0x00,0x00,0xcc,0x01,0x0e,0x18,
    0x00,0x00,0xcc,0x01,0x06,0x38,0x00,0x00,0xcc,0x01,0x0e,0x38,0x00,0x00,
    0xcc,0x01,0xfe,0x3f,0x00,0x00,0xcc,0x01,0xfc,0x1f,0x00,0x00,0xcc,0x01,
    0x00,0x00,0x00,0x00,0xcc,0x01,0x00,0x00,0x00,0x00,0xcc,0x01,0x00,0x00,
    0x80,0x03,0xcc,0x01,0x00,0x00,0xc0,0x07,0xcc,0x01,0x00,0x00,0xe0,0x0f,
    0xcc,0x01,0x80,0x00,0x60,0x1c,0xcc,0x01,0xc0,0x01,0x70,0x38,0xfe,0x01,
    0xe0,0x03,0xe0,0x70,0xfe,0x03,0x70,0x03,0xc0,0xe1,0x86,0x03,0x30,0x06,
    0x80,0xe3,0x06,0x03,0x38,0x0e,0x00,0x77,0x06,0x03,0x1c,0x0c,0x00,0x7e,
    0x06,0x03,0x0c,0x1c,0x00,0xfc,0x86,0x03,0x4e,0x18,0x00,0xc0,0x87,0x03,
    0xc6,0x30,0x00,0x80,0xff,0x03,0x47,0x30,0x00,0x00,0xff,0x03,0x03,0x70,
    0x00,0x00,0x86,0x03,0x03,0x60,0x00,0x00,0x07,0x03,0x73,0x60,0x00,0x00,
    0x03,0x07,0x63,0x70,0x00,0x00,0x03,0x07,0x47,0x30,0x00,0x00,0x07,0x03,
    0x0e,0x38,0x00,0x00,0x8e,0x03,0x1c,0x1c,0x00,0x00,0xfe,0x03,0xf8,0x0f,
    0x00,0x00,0xfe,0x03,0xf0,0x07,0x00,0x00,0x86,0x03,0x00,0x00,0x00,0x00,
    0x86,0x03,0x00,0x00,0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,0x06,0x03,
    0x00,0x00,0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,0x8e,0x03,0x00,0x00,
    0x00,0xf0,0xff,0x7f,0x00,0x00,0x00,0xf0,0xff,0x7f,0x00,0x00,0x00,0x30,
    0x00,0x60,0x00,0x00,0x00,0x30,0x00,0x60,0x00,0x00,0x00,0xf0,0xff,0x7f,
    0x00,0x00,0x00,0xf0,0xff,0x7f
};

// 'logo', 64x59px
static const unsigned char brewlogo_bits_u8g2 [] PROGMEM = {
    0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x43, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x8E, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9E, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1E, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3C, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3C, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1E, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x3C, 0x27, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFC, 0x1E, 0xE7, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE,
    0x9C, 0xF3, 0x03, 0x00, 0x00, 0x00, 0x80, 0x7F, 0x9E, 0xF3, 0x07, 0x00,
    0x00, 0x00, 0xC0, 0x7F, 0xCF, 0xF3, 0x0F, 0x00, 0x00, 0x00, 0xF0, 0x3F,
    0xCF, 0xF1, 0x3F, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0xCF, 0xC1, 0x3F, 0x00,
    0x00, 0x00, 0xF8, 0x87, 0xE7, 0x0C, 0xFF, 0x00, 0x00, 0x00, 0xFC, 0x11,
    0xE7, 0x3C, 0xFE, 0x00, 0x00, 0x00, 0xFE, 0x98, 0xE7, 0xF8, 0xFC, 0x01,
    0x00, 0x00, 0x7E, 0x9E, 0x67, 0xE0, 0xF9, 0x03, 0x00, 0x00, 0x3F, 0x8E,
    0xE3, 0xC0, 0xF1, 0x03, 0x00, 0x00, 0x3F, 0x87, 0x63, 0x00, 0xE3, 0x03,
    0x00, 0x80, 0x9F, 0x83, 0x43, 0x00, 0x00, 0x00, 0x00, 0x80, 0x9F, 0x81,
    0xE3, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xCF, 0x80, 0x41, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xCF, 0x80, 0x83, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE7, 0x80,
    0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x67, 0x80, 0x03, 0x00, 0x00, 0x00,
    0x00, 0xC0, 0x67, 0x00, 0x03, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x77, 0x00,
    0x02, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x67, 0x00, 0x06, 0x00, 0x00, 0x00,
    0xFE, 0xFF, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x67, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xF8, 0xFB, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xE0, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x67, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xC0, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xCF, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x9F, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x9F, 0x03, 0x00, 0x00, 0x42, 0x02, 0x00, 0x00, 0x3F, 0x07,
    0x00, 0x80, 0xF3, 0x03, 0x00, 0x00, 0x7F, 0x0E, 0x00, 0xC0, 0xF9, 0x03,
    0x00, 0x00, 0x7E, 0x3C, 0x00, 0xE0, 0xF8, 0x01, 0x00, 0x00, 0xFC, 0x78,
    0x00, 0x78, 0xFC, 0x01, 0x00, 0x00, 0xFC, 0xE3, 0x47, 0x3F, 0xFE, 0x00,
    0x00, 0x00, 0xF8, 0x87, 0xFF, 0x87, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0x1F,
    0xFC, 0xC2, 0x3F, 0x00, 0x00, 0x00, 0xE0, 0x7F, 0x00, 0xF8, 0x1F, 0x00,
    0x00, 0x00, 0xC0, 0xFF, 0x97, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xFF,
    0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x01, 0x00,
    0x00, 0x00, 0x00, 0xF8, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
    0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};

static const unsigned char Rancilio_Silvia_Logo[] PROGMEM = {
    0x00, 0xc0, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x40, 0x00, 0xc0, 0x07,
    0x00, 0x08, 0x00, 0x40, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x40, 0x00,
    0xc0, 0x07, 0x00, 0x08, 0x00, 0x40, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00,
    0x40, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x40, 0x00, 0xc0, 0x07, 0x00,
    0x08, 0x00, 0x40, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x40, 0x00, 0xc0,
    0x07, 0x00, 0x08, 0x00, 0x40, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x40,
    0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x78, 0x00, 0xc0, 0x07, 0x00, 0x08,
    0x00, 0x78, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x78, 0x00, 0xc0, 0x07,
    0x00, 0x08, 0x00, 0x78, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x78, 0x00,
    0xc0, 0x07, 0x00, 0x08, 0x00, 0x78, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00,
    0x40, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x40, 0x00, 0xc0, 0x07, 0x00,
    0x08, 0x00, 0xc0, 0xff, 0xff, 0x07, 0x00, 0x08, 0x00, 0x00, 0xff, 0xff,
    0x07, 0x00, 0x08, 0x00, 0x00, 0xff, 0xff, 0x07, 0x00, 0x08, 0xc0, 0x7f,
    0x04, 0xc8, 0x07, 0x00, 0x08, 0xf0, 0xff, 0xff, 0xcf, 0x07, 0x00, 0x08,
    0xf8, 0xff, 0x19, 0xc6, 0x07, 0x00, 0x08, 0xfc, 0x1f, 0xf0, 0xc3, 0x07,
    0x00, 0x08, 0x3e, 0x00, 0xe0, 0xc0, 0x07, 0x00, 0x08, 0x1f, 0x00, 0xa0,
    0xc0, 0x07, 0x00, 0x08, 0x0e, 0x00, 0xe0, 0xc0, 0x07, 0x00, 0x08, 0x00,
    0x00, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00,
    0x08, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc0,
    0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x00,
    0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x08,
    0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc0, 0x07,
    0x00, 0x08, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00,
    0xc0, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00,
    0x00, 0x00, 0xc0, 0x07, 0x00, 0x08, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xff,
    0x0f, 0x00, 0x10, 0x00, 0xc0, 0xff, 0xff, 0x0f, 0x00, 0xf0, 0xff, 0xff,
    0xff, 0xff, 0x0f, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 0xf0,
    0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x0f,
    0x00, 0xe0, 0x00, 0x00, 0x00, 0xc0, 0x01
};

static const unsigned char Heiz_Logo[] = {
    0x10, 0x00, 0x02, 0x40, 0x00, 0x10, 0x00, 0x02, 0x40, 0x00, 0x38, 0x00,
    0x07, 0xe0, 0x00, 0x38, 0x00, 0x07, 0xe0, 0x00, 0x7c, 0x80, 0x0f, 0xf0,
    0x01, 0x7c, 0x80, 0x0f, 0xf0, 0x01, 0xfe, 0xc0, 0x1f, 0xf8, 0x03, 0xfe,
    0xc0, 0x1f, 0xf8, 0x03, 0x38, 0x00, 0x07, 0xe0, 0x00, 0x38, 0x00, 0x07,
    0xe0, 0x00, 0x38, 0x00, 0x07, 0xe0, 0x00, 0x38, 0x00, 0x07, 0xe0, 0x00,
    0x78, 0x00, 0x0f, 0xe0, 0x01, 0x70, 0x00, 0x0e, 0xc0, 0x01, 0x70, 0x00,
    0x0e, 0xc0, 0x01, 0x70, 0x00, 0x0e, 0xc0, 0x01, 0xf0, 0x00, 0x1e, 0xc0,
    0x03, 0xe0, 0x00, 0x1c, 0x80, 0x03, 0xe0, 0x00, 0x1c, 0x80, 0x03, 0xe0,
    0x00, 0x1c, 0x80, 0x03, 0xe0, 0x01, 0x3c, 0x80, 0x07, 0xc0, 0x01, 0x38,
    0x00, 0x07, 0xc0, 0x01, 0x38, 0x00, 0x07, 0xc0, 0x03, 0x78, 0x00, 0x0f,
    0x80, 0x03, 0x70, 0x00, 0x0e, 0x80, 0x03, 0x70, 0x00, 0x0e, 0x80, 0x07,
    0xf0, 0x00, 0x1e, 0x00, 0x07, 0xe0, 0x00, 0x1c, 0x00, 0x07, 0xe0, 0x00,
    0x1c, 0x00, 0x07, 0xe0, 0x00, 0x1c, 0x00, 0x07, 0xe0, 0x00, 0x1c, 0x80,
    0x07, 0xf0, 0x00, 0x1e, 0x80, 0x03, 0x70, 0x00, 0x0e, 0xc0, 0x03, 0x78,
    0x00, 0x0f, 0xc0, 0x01, 0x38, 0x00, 0x07, 0xe0, 0x01, 0x3c, 0x80, 0x07,
    0xe0, 0x00, 0x1c, 0x80, 0x03, 0xf0, 0x00, 0x1e, 0xc0, 0x03, 0x70, 0x00,
    0x0e, 0xc0, 0x01, 0x78, 0x00, 0x0f, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x1f,
    0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char OFFLogo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
    0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0x1c, 0xc0, 0x3f, 0x80, 0x03, 0x00, 0x00, 0x3e,
    0xc0, 0x3f, 0xc0, 0x07, 0x00, 0x00, 0x7f, 0xc0, 0x3f, 0xe0, 0x0f, 0x00,
    0x80, 0x7f, 0xc0, 0x3f, 0xe0, 0x1f, 0x00, 0xc0, 0x7f, 0xc0, 0x3f, 0xe0,
    0x3f, 0x00, 0xc0, 0x7f, 0xc0, 0x3f, 0xe0, 0x3f, 0x00, 0xe0, 0x3f, 0xc0,
    0x3f, 0xc0, 0x7f, 0x00, 0xf0, 0x1f, 0xc0, 0x3f, 0x80, 0xff, 0x00, 0xf0,
    0x0f, 0xc0, 0x3f, 0x00, 0xff, 0x00, 0xf8, 0x07, 0xc0, 0x3f, 0x00, 0xfe,
    0x01, 0xf8, 0x07, 0xc0, 0x3f, 0x00, 0xfe, 0x01, 0xfc, 0x03, 0xc0, 0x3f,
    0x00, 0xfc, 0x03, 0xfc, 0x03, 0xc0, 0x3f, 0x00, 0xfc, 0x03, 0xfc, 0x01,
    0xc0, 0x3f, 0x00, 0xf8, 0x03, 0xfc, 0x01, 0xc0, 0x3f, 0x00, 0xf8, 0x03,
    0xfc, 0x01, 0xc0, 0x3f, 0x00, 0xf8, 0x03, 0xfe, 0x00, 0xc0, 0x3f, 0x00,
    0xf0, 0x07, 0xfe, 0x00, 0xc0, 0x3f, 0x00, 0xf0, 0x07, 0xfe, 0x00, 0xc0,
    0x3f, 0x00, 0xf0, 0x07, 0xfe, 0x00, 0xc0, 0x3f, 0x00, 0xf0, 0x07, 0xfe,
    0x00, 0xc0, 0x3f, 0x00, 0xf0, 0x07, 0xfe, 0x00, 0xc0, 0x3f, 0x00, 0xf0,
    0x07, 0xfc, 0x01, 0xc0, 0x3f, 0x00, 0xf8, 0x03, 0xfc, 0x01, 0xc0, 0x3f,
    0x00, 0xf8, 0x03, 0xfc, 0x01, 0xc0, 0x3f, 0x00, 0xf8, 0x03, 0xfc, 0x03,
    0xc0, 0x3f, 0x00, 0xfc, 0x03, 0xfc, 0x03, 0x80, 0x1f, 0x00, 0xfc, 0x03,
    0xf8, 0x07, 0x00, 0x00, 0x00, 0xfe, 0x01, 0xf8, 0x07, 0x00, 0x00, 0x00,
    0xfe, 0x01, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0xff, 0x00, 0xf0, 0x1f, 0x00,
    0x00, 0x80, 0xff, 0x00, 0xe0, 0x3f, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0xc0,
    0x7f, 0x00, 0x00, 0xe0, 0x3f, 0x00, 0xc0, 0xff, 0x01, 0x00, 0xf8, 0x3f,
    0x00, 0x80, 0xff, 0x03, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xff, 0x0f, 0x00,
    0xff, 0x0f, 0x00, 0x00, 0xfe, 0x7f, 0xe0, 0xff, 0x07, 0x00, 0x00, 0xfc,
    0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x01, 0x00,
    0x00, 0xe0, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x1f,
    0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0xe0,
    0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char steamlogo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0x01, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01,
    0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0xf0, 0x01, 0x00, 0x00,
    0x00, 0x00, 0xf8, 0x01, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00,
    0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0xe0, 0x03, 0x00, 0x00,
    0x00, 0x00, 0xf8, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00,
    0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xe0, 0xe0, 0x03, 0x00, 0x00,
    0x00, 0x00, 0xfc, 0xf0, 0xe1, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xf0,
    0xe1, 0x07, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xf0, 0xc1, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x7c, 0xf0, 0xc1, 0x07, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xf0,
    0xc1, 0x07, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xf0, 0xc1, 0x07, 0x00, 0x00,
    0x00, 0x0c, 0x7e, 0xf0, 0xc1, 0x0f, 0x06, 0x00, 0x00, 0x1e, 0x7e, 0xf0,
    0xc1, 0x0f, 0x0f, 0x00, 0x00, 0x1f, 0x3e, 0xf0, 0x81, 0x0f, 0x1f, 0x00,
    0x80, 0x1f, 0x3e, 0xf0, 0x81, 0x0f, 0x3f, 0x00, 0xc0, 0x0f, 0x3e, 0xf0,
    0x81, 0x0f, 0x7e, 0x00, 0xc0, 0x0f, 0x1c, 0xf0, 0x01, 0x07, 0x7e, 0x00,
    0xe0, 0x07, 0x00, 0xf0, 0x01, 0x00, 0xfc, 0x00, 0xe0, 0x03, 0x00, 0xf0,
    0x01, 0x00, 0xf8, 0x00, 0xf0, 0x03, 0x00, 0xf0, 0x01, 0x00, 0xf8, 0x01,
    0xf0, 0x03, 0x00, 0xf0, 0x01, 0x00, 0xf8, 0x01, 0xf0, 0x01, 0x00, 0xf0,
    0x01, 0x00, 0xf0, 0x01, 0xf0, 0x01, 0x00, 0xf0, 0x01, 0x00, 0xf0, 0x01,
    0xf0, 0x01, 0x00, 0xf0, 0x01, 0x00, 0xf8, 0x01, 0xf0, 0x03, 0x00, 0xe0,
    0x00, 0x00, 0xf8, 0x01, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00,
    0xe0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0xe0, 0x0f, 0x00, 0x00,
    0x00, 0x00, 0xfe, 0x00, 0xc0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00,
    0xc0, 0x7f, 0x00, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0x80, 0xff, 0x03, 0x00,
    0x00, 0xf8, 0x3f, 0x00, 0x00, 0xff, 0x0f, 0x00, 0x00, 0xfe, 0x1f, 0x00,
    0x00, 0xfe, 0x1f, 0x00, 0x00, 0xff, 0x0f, 0x00, 0x00, 0xf8, 0x3f, 0x00,
    0x80, 0xff, 0x03, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0xc0, 0x7f, 0x00, 0x00,
    0x00, 0x00, 0xfe, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01,
    0xf0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x0f, 0xfe, 0x07, 0x00, 0x00,
    0x00, 0x00, 0xf8, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff,
    0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x7f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char  Gaggia_Classic_Logo[] = {
    0x00, 0x00, 0xe0, 0xff, 0xff, 0x3f, 0x00, 0x80, 0x3f, 0x10, 0x00, 0x20,
    0x00, 0xe0, 0x00, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x20,
    0x00, 0x20, 0x00, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x20,
    0x00, 0x20, 0x70, 0x10, 0x00, 0x20, 0x00, 0x20, 0xf8, 0x10, 0x00, 0x20,
    0x00, 0x20, 0xfc, 0x11, 0x00, 0x20, 0x00, 0x20, 0xfc, 0x11, 0x00, 0x20,
    0x00, 0x20, 0xfc, 0x11, 0x00, 0x20, 0x00, 0x20, 0xf8, 0x10, 0x00, 0x20,
    0x00, 0x20, 0x70, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x20,
    0x00, 0x20, 0x00, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x20,
    0x00, 0x20, 0x00, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x20,
    0x00, 0x20, 0x00, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x20,
    0x00, 0x20, 0x00, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x20,
    0x00, 0x20, 0x00, 0x10, 0x00, 0x20, 0x00, 0xe0, 0xff, 0xff, 0x00, 0x20,
    0x00, 0x00, 0x02, 0x88, 0x00, 0x20, 0xfe, 0x1f, 0xfe, 0x8f, 0x00, 0x20,
    0x03, 0xf0, 0x0f, 0x86, 0x00, 0x20, 0x01, 0x00, 0x08, 0x82, 0x00, 0x20,
    0x03, 0x00, 0xff, 0x83, 0x00, 0x20, 0xfe, 0xff, 0xe1, 0x80, 0x00, 0x20,
    0x00, 0x00, 0xa0, 0x80, 0x03, 0x20, 0x00, 0x00, 0xe0, 0x00, 0x02, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20,
    0x00, 0x80, 0xff, 0xff, 0x03, 0x20, 0x00, 0x80, 0x00, 0x00, 0x00, 0x20,
    0x00, 0xc0, 0x00, 0x00, 0x00, 0x20, 0x00, 0x40, 0x00, 0x00, 0x00, 0x20,
    0x00, 0x60, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20,
    0x00, 0xe0, 0xff, 0xff, 0xff, 0x3f
};
