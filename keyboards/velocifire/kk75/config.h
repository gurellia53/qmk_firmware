#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFE69
#define PRODUCT_ID      0x0075
#define DEVICE_VER      0x0001
#define MANUFACTURER Velocifire
#define PRODUCT Velocifire KK75
#define DESCRIPTION Velocifire KK75

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