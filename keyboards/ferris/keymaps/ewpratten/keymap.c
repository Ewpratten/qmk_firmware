#include QMK_KEYBOARD_H

// Layer definitions
enum ferris_layers {
    _COLEMAK,  // Base Layer
    _NSYM,     // Numbers and Symbols
    _NAVIGATION,  // Navigation layer
};

// Some macros for longer keycodes
#define CC_LSTO MT(KC_LSFT, TO(_COLEMAK))
#define CC_F710 MT(KC_F10, KC_F7)
#define CC_F811 MT(KC_F11, KC_F8)
#define CC_F912 MT(KC_F12, KC_F9)
#define CC_PSCR MT(LALT(KC_PSCR), KC_PSCR)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
    KC_Q, KC_W,    KC_F,    KC_P,    KC_G,            KC_J,      KC_L,  KC_U,    KC_Y,   KC_SCLN,
    KC_A, KC_R,    KC_S,    KC_T,    KC_D,            KC_H,      KC_N,  KC_E,    KC_I,   KC_O,
    KC_Z, KC_X,    KC_C,    KC_V,    KC_B,            KC_K,      KC_M,  KC_COMM, KC_DOT, KC_ENT,
                            KC_LSPO, KC_LCPO,         TO(_NSYM), KC_SPACE
  ),

  [_NSYM] = LAYOUT(
    KC_1, KC_2, KC_3, KC_EQL,  KC_NO,     KC_GESC,  KC_NO,   KC_NO,   KC_NO,    KC_BSPC,
    KC_4, KC_5, KC_6, KC_0,    KC_NO,     KC_LEFT,  KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,
    KC_7, KC_8, KC_9, KC_MINS, KC_NO,     KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC,  KC_BSLS,
                    CC_LSTO, KC_LCTL,     TO(_NAVIGATION),  KC_LGUI
  ),

  // [_NSYM] = LAYOUT(
  //   KC_TAB,  KC_F1,  KC_F2,   KC_F3,  KC_F4,        KC_F5,    KC_F6,   CC_F710, CC_F811, CC_F912,
  //   KC_1,    KC_2,   KC_3,    KC_4,   KC_5,         KC_6,     KC_7,    KC_8,    KC_9,    KC_0,
  //   KC_LALT, KC_DEL, KC_MINS, KC_EQL, KC_BSPC,      KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC, KC_BSLS,
  //                             CC_LSTO, KC_LCTL,     TO(_NAVIGATION),  KC_LGUI
  // ),

  [_NAVIGATION] = LAYOUT(
    KC_GESC, KC__VOLDOWN, KC__VOLUP, CC_PSCR, KC_NO,       KC_NO,   KC_PGDN, KC_PGUP, KC_NO,    KC_NO,
    KC_MPRV, KC_MPLY,     KC_MNXT,   KC_NO,   KC_NO,       KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,
    KC_NO,   KC_NO,       KC_NO,     KC_NO,   KC_NO,       KC_HOME, KC_END,  KC_NO,   KC_NO,    KC_NO,
                          CC_LSTO,   KC_LCTL,              KC_NO,   KC_NO
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
