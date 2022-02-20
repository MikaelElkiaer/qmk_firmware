/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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
#include <stdio.h>
#include "drivers/sensors/pimoroni_trackball.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_P, KC_Y, KC_U, KC_I, KC_O, LCTL_T(KC_A), LSFT_T(KC_S), LGUI_T(KC_D), LALT_T(KC_F), RALT_T(KC_G), RALT_T(KC_SCLN), LALT_T(KC_H), RGUI_T(KC_J), RSFT_T(KC_K), RCTL_T(KC_L), LT(4, KC_Z), KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, LT(3,KC_ESC), LT(2,KC_SPC), KC_TAB, KC_ENT, LT(1,KC_BSPC)),
	[1] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_PGUP, KC_INS, KC_NO, KC_LCTL, LSFT_T(KC_SLCK), LGUI_T(KC_PGDN), KC_LALT, RALT_T(KC_END), RALT_T(KC_HOME), LALT_T(KC_LEFT), RGUI_T(KC_DOWN), RSFT_T(KC_UP), RCTL_T(KC_RGHT), KC_NO, KC_DEL, KC_CAPS, KC_NO, KC_PAUS, KC_NLCK, KC_NO, KC_APP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS),
	[2] = LAYOUT(KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_7, KC_8, KC_9, RALT(KC_W), LCTL_T(KC_GRV), LSFT_T(KC_MINS), LGUI_T(KC_EQL), LALT_T(KC_QUOT), RALT_T(KC_BSLS), KC_NO, LALT_T(KC_4), RGUI_T(KC_5), RSFT_T(KC_6), RALT(KC_L), KC_LT, KC_GT, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_1, KC_2, KC_3, RALT(KC_Z), KC_NO, KC_TRNS, KC_NO, KC_NO, KC_0),
	[3] = LAYOUT(KC_MPLY, KC_MUTE, KC_NO, RESET, KC_BRIU, KC_NO, KC_F7, KC_F8, KC_F9, KC_F12, LCTL_T(KC_MPRV), LSFT_T(KC_VOLD), LGUI_T(KC_VOLU), LALT_T(KC_MNXT), RALT_T(KC_BRID), KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F10, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_BTN3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

