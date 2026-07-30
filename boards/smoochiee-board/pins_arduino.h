#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 11;
static const uint8_t SCL = 12;

// Default hardware SPI fallbacks
static const uint8_t SS = 10;
static const uint8_t MOSI = 13;
static const uint8_t MISO = 14;
static const uint8_t SCK = 12;

#define SERIAL_RX 44
#define SERIAL_TX 43
#define BAD_RX SERIAL_RX
#define BAD_TX SERIAL_TX
#define GPS_SERIAL_TX -1
#define GPS_SERIAL_RX -1
#define USB_as_HID 1

// ==========================================
// NO PHYSICAL NAVIGATION BUTTONS (WEBUI ONLY)
// ==========================================
#define BTN_ALIAS "\"WEB\""
#define HAS_NO_BUTTONS 1
#define BUTTONS_AXIS 0

// ==========================================
// CUSTOM 2.4" UNO PARALLEL TFT PIN LAYOUT
// ==========================================
#define HAS_SCREEN 1
#define ROTATION 1
#define MINBRIGHT (uint8_t)1

#define USER_SETUP_LOADED 1
#define ILI9341_DRIVER 1 // Change to ST7789 if display is white after boot
#define TFT_PARALLEL_8_BIT 1

// Parallel Data Bus Pins (Connected below GPIO 32 for maximum speed)
#define TFT_D0   1
#define TFT_D1   2
#define TFT_D2   3
#define TFT_D3   4
#define TFT_D4   5
#define TFT_D5   6
#define TFT_D6   7
#define TFT_D7   8

// TFT Control Signal Lines
#define TFT_RST  9
#define TFT_CS   10
#define TFT_DC   11
#define TFT_WR   12
#define TFT_RD   13

#define SMOOTH_FONT 1

// Disable unused hardware targets to maximize available RAM
#define SDCARD_CS -1
#define GROVE_SDA -1
#define GROVE_SCL -1
#define SYS_I2C_SDA -1
#define SYS_I2C_SCL -1

#endif /* Pins_Arduino_h */
