#include QMK_KEYBOARD_H

#define _BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
    KC_ESC,  KC_HOME, KC_PGUP, KC_CAPS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
    KC_NUM,  KC_END,  KC_PGDN, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
    KC_P7,   KC_P8,   KC_P9,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
    KC_P4,   KC_P5,   KC_P6,   KC_DEL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
    KC_P1,   KC_P2,   KC_P3,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
    KC_P0,   KC_PDOT, KC_ENT,  KC_LCTL, KC_NUBS, KC_LGUI, KC_LALT, KC_SPC,  KC_ENT
)

};
