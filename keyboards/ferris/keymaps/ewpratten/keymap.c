#include QMK_KEYBOARD_H

// Layer definitions
enum ferris_layers {
    _COLEMAK,  // Base Layer
    _NSYM,     // Numbers and Symbols
    _SIDEBAR,  // Enter and Backspace and stuff
};

// Some macros for longer keycodes
#define CC_LSTO MT(KC_LSFT, TO(_COLEMAK))
#define CC_F710 MT(KC_F10, KC_F7)
#define CC_F811 MT(KC_F11, KC_F8)
#define CC_F912 MT(KC_F12, KC_F9)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_Q, KC_W,    KC_F,    KC_P,    KC_G,            KC_J,    KC_L,  KC_U,    KC_Y,   KC_SCLN,
    KC_A, KC_R,    KC_S,    KC_T,    KC_D,            KC_H,    KC_N,  KC_E,    KC_I,   KC_O,
    KC_Z, KC_X,    KC_C,    KC_V,    KC_B,            KC_K,    KC_M,  KC_COMM, KC_DOT, KC_ENT,
                            KC_LSPO, KC_LCPO,         TO(_NSYM), KC_SPACE
  ),


  [_NSYM] = LAYOUT(
    KC_TAB,  KC_F1, KC_F2,   KC_F3, KC_F4,        KC_F5,    KC_F6,   CC_F710, CC_F811, CC_F912,
    KC_1,    KC_2,  KC_3,    KC_4,  KC_5,         KC_6,     KC_7,    KC_8,    KC_9,    KC_0,
    KC_NO,   KC_NO, KC_MINS, KC_EQL, KC_NO,        KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC, KC_BSLS,
                    CC_LSTO, KC_LCTL,           KC_LGUI,  KC_NO
  ),

  [_SIDEBAR] = LAYOUT(
    KC_GESC, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO,        KC_NO, KC_NO
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

/**
 * TODO: Keys
 *  - PgUp/PgDn
 *  - Arrows
 *  - Home/End
 *  - Printscreen
 *  - Volume/Mute
 *  - Media
 *  - Alt
 *  - Tab
 *  - Backspace
 *  - Delete
 *
 */
()
