#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>


#define USB_VID            0x239A
#define USB_PID            0x80EB
#define USB_MANUFACTURER   "senseBox"
#define USB_PRODUCT        "senseBox MCU-S2"
#define USB_SERIAL         "" // Empty string for MAC adddress

// Default USB FirmwareMSC Settings
#define USB_FW_MSC_VENDOR_ID 		"ESP32-S2" 		//max 8 chars
#define USB_FW_MSC_PRODUCT_ID 		"Firmware MSC"	//max 16 chars
#define USB_FW_MSC_PRODUCT_REVISION	"1.23" 			//max 4 chars
#define USB_FW_MSC_VOLUME_NAME 		"senseBox" 	//max 11 chars
#define USB_FW_MSC_SERIAL_NUMBER 	0x00000000


#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       20

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)

// sesneBox MCU-S2 ESP32-S2
#define PIN_UART_TXD  43
#define PIN_UART_RXD  44       

#define PIN_XBEE_INT    33
#define PIN_XBEE_CS     34
#define PIN_XBEE_MOSI   35
#define PIN_XBEE_SCLK   36
#define PIN_XBEE_MISO   37
#define PIN_XBEE_RESET  38

#define PIN_QWICC_SDA         39
#define PIN_QWICC_SCL         40

#define PIN_XBEE_ENABLE       41

#define PIN_I2C_SCL           42
#define PIN_I2C_SDA           45
#define PIN_I2C_INT           46

// #define PIN_BOOT               0
#define PIN_LED                1
#define PIN_IO2                2
#define PIN_IO3                3
#define PIN_IO4                4
#define PIN_IO5                5
#define PIN_IO6                6
#define PIN_IO7                7

#define PIN_IO_ENABLE          8

#define PIN_SD_ENABLE          9
#define PIN_SD_CS             10
#define PIN_SD_MOSI           11
#define PIN_SD_SCLK           12
#define PIN_SD_MISO           13

#define PIN_SPI_ENABLE          9
#define PIN_SPI_CS             10
#define PIN_SPI_MOSI           11
#define PIN_SPI_SCLK           12
#define PIN_SPI_MISO           13

#define PIN_PD_SENSE          14

#define PIN_XBEE_TXD          17
#define PIN_XBEE_RXD          18

#define PIN_USB_DM            19
#define PIN_USB_DP            20

#define PIN_PD_ENABLE         21
#define PIN_UART_ENABLE       26


////////////////////////////////////////////////

static const uint8_t LED_BUILTIN = 1;
#define BUILTIN_LED     LED_BUILTIN;


//Wire 
static const uint8_t SDA = PIN_QWICC_SDA; // QWICC SDA
static const uint8_t SCL = PIN_QWICC_SCL; // QWICC SCL

//Wire1
#define WIRE1_PIN_DEFINED 1             // See Wire.cpp at bool TwoWire::initPins(int sdaPin, int sclPin)
static const uint8_t SDA1 = PIN_I2C_SDA; // I2C SDA
static const uint8_t SCL1 = PIN_I2C_SCL; // I2C SCL

static const uint8_t SS    = PIN_SPI_CS;
static const uint8_t MOSI  = PIN_SPI_MOSI;
static const uint8_t SCK   = PIN_SPI_SCLK;
static const uint8_t MISO  = PIN_SPI_MISO;

static const uint8_t A2 = PIN_IO2;
static const uint8_t A3 = PIN_IO3;
static const uint8_t A4 = PIN_IO4;
static const uint8_t A5 = PIN_IO5;
static const uint8_t A6 = PIN_IO6;
static const uint8_t A7 = PIN_IO7;


static const uint8_t TX = PIN_UART_TXD;
static const uint8_t RX = PIN_UART_RXD;

#define TX1 TX
#define RX1 RX

// Alias Serial to SerialUSB
#define Serial                      SerialUSB

#endif /* Pins_Arduino_h */

/*
- MCUv2-display-hdc1080.ino working -> wire 
- 
*/ 