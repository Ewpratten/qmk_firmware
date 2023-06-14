#include QMK_KEYBOARD_H


// Layer definitions
enum ferris_layers {
    _MAIN
};


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT(
    KC_ESC, KC_Q, KC_W, KC_E, KC_5,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_LSFT, KC_A, KC_S, KC_D, KC_G,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_SPACE, KC_X,        KC_NO, KC_NO
  )
};
// clang-format on

/** THIS IS FOR CREATING A NEW KEYMAP **
  [_UNSET_] = LAYOUT(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO,        KC_NO, KC_NO
  )
*/

