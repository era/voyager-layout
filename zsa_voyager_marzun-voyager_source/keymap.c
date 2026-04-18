#include QMK_KEYBOARD_H

// keep everything exactly as in your repo above this line if you had enums/macros

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
  KC_Q, KC_W, KC_E, KC_R, KC_T,                      KC_Y, KC_U, KC_I, KC_O, KC_P,
  KC_A, KC_S, KC_D, KC_F, KC_G,                      KC_H, KC_J, KC_K, KC_L, KC_SCLN,
  KC_Z, KC_X, KC_C, KC_V, KC_B,                      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,

                KC_LCTL, KC_LALT,                    KC_LGUI, KC_RALT,
                KC_TAB,  MO(1),                      MO(2),   KC_ESC,

                KC_ENT,  KC_SPC   // 👈 swapped here
),

[1] = LAYOUT(
  _______, _______, _______, _______, _______,      _______, KC_HOME, KC_UP,   KC_END,  _______,
  _______, _______, _______, _______, _______,      _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
  _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______,

                _______, _______,                    _______, _______,
                _______, _______,                    _______, _______,

                _______, _______
),

[2] = LAYOUT(
  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
  KC_GRV,  KC_TILD, KC_EQL,  KC_PLUS, KC_MINS,       KC_UNDS, KC_LCBR, KC_RCBR, KC_PIPE, KC_BSLS,
  KC_LT,   KC_GT,   KC_LBRC, KC_RBRC, KC_COLN,       KC_SCLN, _______, _______, _______, _______,

                _______, _______,                    _______, _______,
                _______, _______,                    _______, _______,

                _______, _______
)

};