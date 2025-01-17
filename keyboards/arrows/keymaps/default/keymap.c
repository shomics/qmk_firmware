// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x15(
        KC_NO,    KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,    KC_RBRC,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,    KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_UP,    KC_PGUP,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        LT(1, KC_ENT),    KC_A,    KC_NO,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LEFT,    KC_RIGHT,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,    KC_X,    KC_NO,    KC_C,    KC_V,    KC_B,    KC_PGDN,    KC_DOWN,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_RSFT,
        KC_LCTL,    KC_LWIN,    KC_LALT,    KC_EQL,    KC_NO,    KC_INT5,    KC_SPC,   LT(1, KC_SPC),    LT(1, KC_ENT),    KC_ENT,    KC_INT4,    LT(1, KC_APP),    KC_RALT,    KC_RWIN,    KC_RCTL
    ),
    [1] = LAYOUT_ortho_5x15(
        KC_NO,    KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_LBRC,    KC_RBRC,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_DEL,
        KC_TAB,    KC_NO,    KC_BSPC,    KC_UP,    KC_DEL,    KC_R,    KC_T,    KC_VOLU,    KC_HOME,    KC_Y,    KC_U,    KC_I,    KC_F11,    KC_F12,    LSFT(KC_GRV),
        MO(1),    KC_LEFT,    KC_NO,    KC_DOWN,    KC_RIGHT,    KC_F,    KC_G,    KC_LEFT,    KC_RIGHT,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
       KC_LSFT,    KC_Z,    KC_X,    KC_NO,    KC_C,    KC_V,    KC_B,    KC_END,    KC_VOLD,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_INT3,    KC_RSFT,
        KC_LCTL,    KC_LWIN,    KC_LALT,    KC_EQL,    KC_NO,    KC_INT5,    KC_SPC,    MO(1),    MO(1),    KC_ENT,    KC_INT4,    MO(1),    KC_RALT,    KC_RWIN,    KC_RCTL
    )
};
