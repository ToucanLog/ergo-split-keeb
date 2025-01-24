#pragma once
 
#define SPLIT_USB_DETECT

#define EE_HANDS /* see https://docs.qmk.fm/features/split_keyboard#serial-wiring */
#define SPLIT_USB_DETECT
#define USE_SERIAL

// #define SOFT_SERIAL_PIN GP13
// #define SERIAL_PIO_USE_PIO1

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP18
#define SERIAL_USART_RX_PIN GP19
#define SERIAL_USART_PIN_SWAP

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_COLS 10

#define MATRIX_ROW_PINS { GP21, GP22, GP23, GP24, GP25, GP7, GP8 }
#define MATRIX_COL_PINS { GP12, GP13, GP14, GP15, GP16, GP17, GP20, GP9, GP10, GP11 }
#define MATRIX_ROW_PINS_RIGHT { GP21, GP22, GP23, GP24, GP25, GP14, GP15 }
#define MATRIX_COL_PINS_RIGHT { GP13, GP12, GP11, GP10, GP9, GP8, GP7, GP16, GP17, GP20 }

#define DIODE_DIRECTION ROW2COL

#define SERIAL_DEBUG


