// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* LAYOUT_ortho_5x15[0]
     * ┌───────────┬────────┬────────┬────────┬───────────────┬───────┬───────────┬───────────┬───────┬────────┬─────────┬─────┬─────┬───────┐
     * │ NO   │ ESC│      1 │      2 │      3 │             4 │     5 │     6     │     7     │   8   │   9    │    0    │  -  │  =  │  BS   │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │   Tab     │ NO │ Q │      W │      E │             R │     T │     Y     │     U     │   I   │   O    │    P    │  ~  │  [  │ Enter │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │    E/J    │      A │ NO │ S │      D │             F │     G │     H     │     J     │   K   │   L    │    ;    │  '  │  ]  │ Enter │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Shift     │      Z │      X │ NO │ C │             V │     B │     N     │     M     │   ,   │   .    │    /    │  \  │  ↑  │  MO1  │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Ctrl      │    Win │    ALT │  Enter │ NO │ muhenkan │ Spece │   Space   │  Henkan   │ Enter │   DEL  │  Enter  │  ←  │  ↓  │   →   │
     * └───────────┴────────┴────────┴────────┴───────────────┴───────┴───────────┴───────────┴───────┴────────┴─────────┴─────┴─────┴───────┘
     */
    /* LAYOUT_ortho_5x15[1]
     * ┌───────────┬────────┬────────┬────────┬───────────────┬───────┬───────────┬───────────┬───────┬────────┬─────────┬─────┬─────┬───────┐
     * │ NO   │ ESC│     F1 │     F2 │     F3 │            F4 │    F5 │    F6     │    F7     │   F8  │   F9   │   F10   │ F11 │ F12 │  BS   │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │   Tab     │ NO │ Q │      W │      E │             R │     T │     Y     │     U     │   I   │   O    │    P    │  ~  │  [  │ Enter │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │    E/J    │      A │ NO │ S │      D │             F │     G │     H     │     J     │   K   │   L    │    ;    │  '  │  ]  │ Enter │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Shift     │      Z │      X │ NO │ C │             V │     B │     N     │     M     │   ,   │   .    │    /    │  \  │  ↑  │  MO1  │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Ctrl      │    Win │    ALT │  Enter │ NO │ muhenkan │ Spece │   Space   │  Henkan   │ Enter │   DEL  │  Enter  │  ←  │  ↓  │   →   │
     * └───────────┴────────┴────────┴────────┴───────────────┴───────┴───────────┴───────────┴───────┴────────┴─────────┴─────┴─────┴───────┘
     */
    [0] = LAYOUT_ortho_5x15(
        KC_NO,    KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,    KC_BSPC,
        KC_TAB,    KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,    KC_LBRC,    KC_ENT,
        KC_LNG5,    KC_A,    KC_NO,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,    KC_RBRC,    KC_ENT,
        KC_LSFT,    KC_Z,    KC_X,    KC_NO,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_INT3,    KC_UP,    MO(1),
        KC_LCTL,    KC_LWIN,    KC_LALT,    KC_ENTER,    KC_NO,    KC_INT5,    KC_SPC,    KC_SPC,    KC_INT4,    KC_ENTER,    KC_DEL,    KC_ENTER,    KC_LEFT,    KC_DOWN,    KC_RIGHT
    ),
    [1] = LAYOUT_ortho_5x15(
        KC_NO,    KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,    KC_BSPC,
        KC_TAB,    KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,    KC_LBRC,    KC_ENT,
        KC_LNG5,    KC_A,    KC_NO,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,    KC_RBRC,    KC_ENT,
        KC_LSFT,    KC_Z,    KC_X,    KC_NO,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_INT3,    KC_UP,    MO(1),
        KC_LCTL,    KC_LWIN,    KC_LALT,    KC_ENTER,    KC_NO,    KC_INT5,    KC_SPC,    KC_SPC,    KC_INT4,    KC_ENTER,    KC_DEL,    KC_ENTER,    KC_LEFT,    KC_DOWN,    KC_RIGHT
    )
};


const uint16_t us2jis[][2] = {
  {KC_LPRN, JP_LPRN},
  {KC_RPRN, JP_RPRN},
  {KC_AT,   JP_AT},
  {KC_LBRC, JP_LBRC},
  {KC_RBRC, JP_RBRC},
  {KC_LCBR, JP_LCBR},
  {KC_RCBR, JP_RCBR},
  {KC_MINS, JP_MINS},
  {KC_EQL,  JP_EQL},
  {KC_BSLS, JP_BSLS},
  {KC_SCLN, JP_SCLN},
  {KC_QUOT, JP_QUOT},
  {KC_GRV,  JP_GRV},
  {KC_PLUS, JP_PLUS},
  {KC_COLN, JP_COLN},
  {KC_UNDS, JP_UNDS},
  {KC_PIPE, JP_PIPE},
  {KC_DQT,  JP_DQUO},
  {KC_ASTR, JP_ASTR},
  {KC_TILD, JP_TILD},
  {KC_AMPR, JP_AMPR},
  {KC_CIRC, JP_CIRC},
};

bool twpair_on_jis(uint16_t keycode, keyrecord_t *record) {
  if (!record->event.pressed) return true;

  uint16_t skeycode; // シフトビットを反映したキーコード
  bool lshifted = keyboard_report->mods & MOD_BIT(KC_LSFT); // シフトキーの状態
  bool rshifted = keyboard_report->mods & MOD_BIT(KC_RSFT);
  bool shifted = lshifted | rshifted;

  if (shifted) {
    skeycode = QK_LSFT | keycode;
  } else {
    skeycode = keycode;
  }

  for (int i = 0; i < sizeof(us2jis) / sizeof(us2jis[0]); i++) {
    if (us2jis[i][0] == skeycode) {
      unregister_code(KC_LSFT);
      unregister_code(KC_RSFT);
      if ((us2jis[i][1] & QK_LSFT) == QK_LSFT || (us2jis[i][1] & QK_RSFT) == QK_RSFT) {
        register_code(KC_LSFT);
        tap_code(us2jis[i][1]);
        unregister_code(KC_LSFT);
      } else {
        tap_code(us2jis[i][1]);
      }
      if (lshifted) register_code(KC_LSFT);
      if (rshifted) register_code(KC_RSFT);
      return false;
    }
  }

  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return twpair_on_jis(keycode, record);
}