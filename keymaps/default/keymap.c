// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#define LAYOUT_MIRROR_RIGHT( \
    L00, L01, L02, L03, L04, L05,       R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,       R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,       R20, R21, R22, R23, R24, R25, \
                   L30, L31, L32,       R30, R31, R32 \
) \
LAYOUT( \
    L00, L01, L02, L03, L04, L05,       R05, R04, R03, R02, R01, R00, \
    L10, L11, L12, L13, L14, L15,       R15, R14, R13, R12, R11, R10, \
    L20, L21, L22, L23, L24, L25,       R25, R24, R23, R22, R21, R20, \
                   L30, L31, L32,       R30, R31, R32 \
)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_MIRROR_RIGHT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                   KC_LGUI, KC_BSPC, KC_SPC,           KC_SPC,  KC_ENT,  KC_RALT
    )
};
