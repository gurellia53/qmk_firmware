/* Copyright 2020 KnoblesseOblige
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layer_names {
    L0,
    L1,
    L2,
    L3
};
#define INDICATOR_LED B5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L0] = LAYOUT(
                 MO(1),     KC_HOME,    KC_PGUP,
                 KC_DEL,    KC_END,     KC_PGDN,
                 
                            KC_UP,
                 KC_LEFT,   KC_DOWN,    KC_RIGHT),
    [L1] = LAYOUT(
                 _______,   _______,    KC_VOLU,
                 _______,   _______,    KC_VOLD,
                 
                            _______,
                 _______,   _______,    _______),
    [L2] = LAYOUT(
                 _______,   _______,    _______,
                 _______,   _______,    _______,
                 
                            _______,
                 _______,   _______,    _______),
    [L3] = LAYOUT(
                 _______,   _______,    _______,
                 _______,   _______,    _______,
                 
                            _______,
                 _______,   _______,    _______)
};

layer_state_t layer_state_set_kb(layer_state_t state) {
    switch (get_highest_layer(state)) {
      case 0:
        writePinHigh(INDICATOR_LED);
        break;
      default:
        writePinLow(INDICATOR_LED);
        break;
      }
    return layer_state_set_user(state);
}
