// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_BSPC, KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_QUOT, KC_SCLN, KC_L,    KC_K,    KC_J,    KC_H, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_RSFT, KC_SLSH, KC_DOT,  KC_COMM, KC_M,    KC_N, 
                                   KC_LGUI, KC_BSPC, KC_SPC,           KC_SPC,  KC_ENT,  KC_RALT
    )
};

