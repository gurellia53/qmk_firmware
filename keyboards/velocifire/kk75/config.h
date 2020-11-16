#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xBEEF
#define DEVICE_VER      0x0001
#define MANUFACTURER Velocifire
#define PRODUCT KK75
#define DESCRIPTION KK75

// row0 2   PC14
// row1 3   PC13
// row2 4   PC15
// row3 12  PA2
// row4 11  PA1
// row5 10  PA0

// col00 29 PA8
// col01 14 PA4
// col02 15 PA5
// col03 16 PA6
// col04 17 PA7
// col05 18 PB0
// col06 19 PB1
// col07 20 PB2
// col08 21 PB10
// col09 22 PB11
// col10 26 PB13
// col11 27 PB14
// col12 38 PA15
// col13 39 PB3

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

#define MATRIX_COL_PINS { A8, A4, A5, A6, A7, B0, B1, B2, B10, B11, B13, B14, A15, B3 }
#define MATRIX_ROW_PINS { C14, C13, C15, A2, A1, A0 }
#define UNUSED_PINS

#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE