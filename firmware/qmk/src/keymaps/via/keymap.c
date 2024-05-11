/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		         KC_Q,
		KC_ESC,                    KC_E,    KC_BTN1,
		                  KC_W,
		KC_LSFT,                            KC_BTN2,
		         KC_A,    KC_S,    KC_D,
		KC_LCTL,                            KC_BTN3,
		         KC_LSFT,
		                           MO(1),    KC_SPC
	),

	[1] = LAYOUT(
		         KC_Q,
		KC_ESC,                    KC_E,    RGB_TOG,
		                  KC_W,
		KC_LSFT,                            RGB_VAI,
		         KC_A,    KC_S,    KC_D,
		KC_LCTL,                            RGB_VAD,
		         KC_LSFT,
		                           MO(1),    KC_SPC
	),

	[2] = LAYOUT(
		          XXXXXXX,
    XXXXXXX,                      XXXXXXX,  XXXXXXX,
                        XXXXXXX,
		XXXXXXX,                                XXXXXXX,
              XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,                                XXXXXXX,
              XXXXXXX,
		                              XXXXXXX,  XXXXXXX
	),

};
