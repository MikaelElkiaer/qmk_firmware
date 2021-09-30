/*
Copyright 2021 @mangoiv

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_P, KC_Y, KC_U, KC_I, KC_O, LCTL_T(KC_A), KC_S, LGUI_T(KC_D), LALT_T(KC_F), RALT_T(KC_G), RALT_T(KC_SCLN), LALT_T(KC_H), RGUI_T(KC_J), KC_K, RCTL_T(KC_L), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, KC_NO, KC_NO, MO(4), LT(2,KC_SPC), LSFT_T(KC_TAB), KC_NO, RSFT_T(KC_ENT), LT(1,KC_BSPC)),
	[1] = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_PGUP, KC_NO, KC_NO, KC_LCTL, KC_SLCK, LGUI_T(KC_PGDN), LALT_T(KC_END), KC_RALT, RALT_T(KC_HOME), LALT_T(KC_LEFT), RGUI_T(KC_DOWN), KC_UP, RCTL_T(KC_RGHT), KC_NO, KC_DEL, KC_CAPS, KC_NO, KC_PAUS, KC_NO, KC_NLCK, KC_APP, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, LT(3,KC_SPC), KC_NO, KC_NO, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_NO, RALT(KC_W), KC_7, KC_8, KC_9, KC_NO, LCTL_T(KC_GRV), KC_QUOT, LGUI_T(KC_MINS), LALT_T(KC_EQL), KC_BSLS, RALT(KC_L), LALT_T(KC_4), RGUI_T(KC_5), KC_6, KC_RCTL, KC_LT, KC_GT, KC_LBRC, KC_RBRC, KC_NO, RALT(KC_Z), KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, RSFT_T(KC_0), LT(3,KC_BSPC)),
	[3] = LAYOUT(KC_MPLY, KC_MUTE, KC_NO, RESET, KC_BRIU, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, LCTL_T(KC_MPRV), LSFT_T(KC_VOLD), LGUI_T(KC_VOLU), LALT_T(KC_MNXT), KC_BRID, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO),
	[4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_BTN3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO)
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
    else if (index == 2) {
      if(clockwise) {
        tap_code(KC_WH_D);
      }
      else{
        tap_code(KC_WH_U);
      }
    }
    else if (index == 3  ) {
        // Page up/Page down
        if (clockwise) {
          tap_code(KC_WH_U);
        } else {
          tap_code(KC_WH_D);
        }
    }
    return true;
}
#endif
