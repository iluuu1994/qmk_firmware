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
#include "quantum/keymap_extras/keymap_swiss_de.h"

#define X XXXXXXX

#undef KC_LGUI
#define KC_LGUI KC_LALT

// enum custom_keycodes {
// 	GRV_SPACE = SAFE_RANGE,
// 	TILD_SPACE,
// };

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
// 	switch (keycode) {
// 		case GRV_SPACE:
// 			if (record->event.pressed) {
// 				SEND_STRING("");
// 			}
// 			break;
// 		case TILD_SPACE:
// 			if (record->event.pressed) {
// 				SEND_STRING("~");
// 			}
// 			break;
// 	}
// 	return true;
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I, KC_O, KC_P, CH_DIAE,
		KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K, KC_L, CH_QUOT, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		MO(1), MT(MOD_LCTL, KC_LGUI), MO(2), KC_BSPC, KC_SPC, MO(3)
	),
	[1] = LAYOUT_split_3x6_3(
		X, CH_LBRC, CH_RBRC, CH_LABK, CH_RABK, CH_AT,    CH_GRV, CH_LPRN, CH_RPRN, CH_LCBR, CH_RCBR, X,
		X, CH_PLUS, CH_AMPR, CH_SLSH, CH_ASTR, CH_TILD,  CH_QUOT, CH_DLR, CH_EQL, CH_EXLM, CH_QUES, X,
		X, CH_MINS, CH_PIPE, CH_BSLS, CH_HASH, CH_CIRC,  CH_DQUO, CH_PERC, CH_SCLN, CH_COLN, CH_UNDS, X,
		X, X, X, X, KC_SPC, X
	),
	[2] = LAYOUT_split_3x6_3(
		X, X, X, X, X, X,  X, KC_7, KC_8, KC_9, X, X,
		X, X, X, X, X, X,  X, KC_4, KC_5, KC_6, X, X,
		X, X, X, X, X, X,  X, KC_1, KC_2, KC_3, X, X,
		X, X, X, X, KC_0, X
	),
	[3] = LAYOUT_split_3x6_3(
		X, X, LCTL(KC_RIGHT), KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, X,  X, KC_PGDN, KC_PGUP, KC_HOME, KC_END, KC_DEL,
		X, X, KC_MPRV, KC_MPLY, KC_MNXT, X,	                          KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, X, X,
		KC_LSFT, X, X, X, X, LCTL(KC_LEFT),	                          X, X, X, X, X, KC_RSFT,
		X, KC_LCTL, X, X, X, X
	),
};
