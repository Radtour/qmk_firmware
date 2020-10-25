#include "radtour.h"

enum {
  DEF = 0,
  FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[DEF] = KEYMAP
	(
		KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,              KC_PSCR,   KC_SLCK,   KC_PAUS,
		KC_GRV,   KC_1,    KC_2, 	KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,   KC_INS,    KC_HOME,   KC_PGUP,
		KC_TAB,   KC_Q,    KC_W, 	KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,             KC_DEL,    KC_END,    KC_PGDN,
		KC_CAPS,  KC_A,    KC_S, 	KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,
		KC_LSFT,  KC_NUBS, KC_Z, 	KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,              KC_UP,
		KC_LCTL,  KC_LGUI, KC_LALT,	                           KC_SPC,                             KC_RALT,  MO(FN),   KC_LOCK,  KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT
	),

	[FN] = KEYMAP
	(
		RESET,    RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, XXXXXXX, XXXXXXX,  XXXXXXX,  VLK_TOG,             XXXXXXX,   XXXXXXX,   KC_MUTE,
		XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,   KC_MPLY,   KC_MSTP,   KC_VOLU,
		_______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,             KC_MPRV,   KC_MNXT,   KC_VOLD,
		_______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
		_______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,            _______,              _______,
		_______,  _______, _______,	                           _______,                            _______,  _______,  _______,  _______,   _______,   _______,   _______
	)
};
