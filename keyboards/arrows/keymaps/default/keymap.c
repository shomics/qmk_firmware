// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* LAYOUT_ortho_5x15[0]
     * ┌───────────┬────────┬────────┬────────┬───────────────┬───────┬───────────┬───────────┬───────┬────────┬─────────┬─────┬─────┬───────┐
     * │ NO   │ ESC│      1 │      2 │      3 │             4 │     5 │     [     │     ]     │   6   │   7    │    8    │  9  │  0  │  BS   │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │   Tab     │ NO │ Q │      W │      E │             R │     T │     ↑     │   PGUP    │   Y   │   U    │    I    │  O  │  P  │   /   │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Enter/MO1 │      A │ NO │ S │      D │             F │     G │     ←     │     →     │   H   │   J    │    K    │  L  │  ;  │   '   │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Shift     │      Z │      X │ NO │ C │             V │     B │   PGDN    │     ↓     │   N   │   M    │    ,    │  .  │  -  │ Shift │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Ctrl      │    Win │    ALT │  DEL   │ NO │ muhenkan │ Spece │ Space/MO1 │ Enter/MO1 │ Enter │ Henkan │    =    │ ALT │ Win │  Ctrl │
     * └───────────┴────────┴────────┴────────┴───────────────┴───────┴───────────┴───────────┴───────┴────────┴─────────┴─────┴─────┴───────┘
     */
    /* LAYOUT_ortho_5x15[1] MO(1)
     * ┌───────────┬────────┬────────┬────────┬───────────────┬───────┬───────────┬───────────┬───────┬────────┬─────────┬─────┬─────┬───────┐
     * │ NO   │ ESC│     F1 │     F2 │     F3 │            F4 │    F5 │    F11    │    F12    │  F6   │  F7    │   F8    │ F9  │ F10 │  DEL  │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │   Tab     │ NO│ BS │      ↑ │    DEL │             R │     T │  VOLUP    │   PGUP    │   *   │   7    │    8    │  9  │  /  │   \   │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Enter/MO1 │      ← │ NO │ ↓ │      → │        CTRL+T │ CTRL+I│     ←     │     →     │   -   │   4    │    5    │  6  │  ;  │   '   │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Shift     │      Z │      X │ NO │ C │             V │     B │   PGDN    │   VOLDN   │   +   │   1    │    2    │  3  │  ~  │ Shift │
     * ├───────────┼────────┼────────┼────────┼───────────────┼───────┼───────────┼───────────┼───────┼────────┼─────────┼─────┼─────┼───────┤
     * │ Ctrl      │    Win │    ALT │    APP │ NO │ muhenkan │ Spece │ Space/MO1 │ Enter/MO1 │ Enter │ Henkan │    0    │ ALT │ Win │  Ctrl │
     * └───────────┴────────┴────────┴────────┴───────────────┴───────┴───────────┴───────────┴───────┴────────┴─────────┴─────┴─────┴───────┘
     */
    [0] = LAYOUT_ortho_5x15(
        KC_NO,    KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,    KC_RBRC,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,    KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_UP,    KC_PGUP,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_SLSH,
        LT(1, KC_ENT),    KC_A,    KC_NO,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LEFT,    KC_RIGHT,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,    KC_X,    KC_NO,    KC_C,    KC_V,    KC_B,    KC_PGDN,    KC_DOWN,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_MINS,    KC_RSFT,
        KC_LCTL,    KC_LWIN,    KC_LALT,    KC_DEL,    KC_NO,    KC_INT5,    KC_SPC,   LT(1, KC_SPC),    LT(1, KC_ENT),    KC_ENT,    KC_INT4,    KC_EQL,    KC_RALT,    KC_RWIN,    KC_RCTL
    ),
    [1] = LAYOUT_ortho_5x15(
        KC_NO,    KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F11,    KC_F12,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_DEL,
        KC_TAB,    KC_NO,    KC_BSPC,    KC_UP,    KC_DEL,    KC_R,    KC_T,    KC_VOLU,    KC_HOME,    KC_KP_ASTERISK,    KC_7,    KC_8,    KC_9,    KC_KP_SLASH,    KC_INT3,
        MO(1),    KC_LEFT,    KC_NO,    KC_DOWN,    KC_RIGHT,    LCTL(KC_T),    LCTL(KC_I),    KC_LEFT,    KC_RIGHT,    KC_KP_MINUS,    KC_4,    KC_5,    KC_6,    KC_SCLN,    KC_QUOT,
       KC_LSFT,    KC_Z,    KC_X,    KC_NO,    KC_C,    KC_V,    KC_B,    KC_END,    KC_VOLD,    KC_KP_PLUS,    KC_1,    KC_2,    KC_3,    LSFT(KC_GRV),    KC_RSFT,
        KC_LCTL,    KC_LWIN,    KC_LALT,    KC_APP,    KC_NO,    KC_INT5,    KC_SPC,    MO(1),    MO(1),    KC_ENT,    KC_INT4,    KC_0,    KC_RALT,    KC_RWIN,    KC_RCTL
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