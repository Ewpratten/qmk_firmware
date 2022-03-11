#include QMK_KEYBOARD_H

// Layer definitions
enum ferris_layers {
    _CURSOR,  // CURSOR Layer
    _QWERTY, // QWERTY Layer
    _NSYM,     // Numbers and Symbols
    _NAVIGATION,  // Navigation layer
    _SHORTCUT, // Shortcut Layer
};

// Shorthands
#define GO_HOME TO(_CURSOR)
#define GO_NAV TO(_NAVIGATION)
#define GO_SHRT OSL(_SHORTCUT)
#define LD_TERM LGUI(KC_ENT)
#define CC_QUIT LGUI(LSFT(KC_Q))

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_CURSOR] = LAYOUT(
    KC_Q, KC_W,    KC_F,    KC_P,    KC_B,            KC_J,      KC_L,  KC_U,    KC_Y,    KC_BSPC,
    KC_A, KC_S,    KC_R,    KC_T,    KC_G,            KC_H,      KC_N,  KC_E,    KC_I,    KC_O,
    KC_Z, KC_X,    KC_C,    KC_D,    KC_V,            KC_K,      KC_M,  KC_COMM, KC_DOT, KC_ENT,
                            KC_LSPO, KC_LCPO,         MO(_NSYM), KC_SPACE
  ),

  [_QWERTY] = LAYOUT(
    KC_Q, KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,      KC_U,  KC_I,    KC_O,   KC_P,
    KC_A, KC_S,    KC_D,    KC_F,    KC_G,            KC_H,      KC_J,  KC_K,    KC_L,   KC_ENT,
    KC_Z, KC_X,    KC_C,    KC_V,    KC_B,            KC_N,      KC_M,  KC_COMM, KC_DOT, KC_BSPC,
                            KC_LSPO, KC_LCPO,         MO(_NSYM), KC_SPACE
  ),

  [_NSYM] = LAYOUT(
    KC_1, KC_2, KC_3, KC_EQL,  GO_NAV,        KC_GESC,  KC_NO,   GO_SHRT,   KC_DEL,    KC_SCLN,
    KC_4, KC_5, KC_6, KC_0,    KC_TAB,        KC_END,   KC_LEFT, KC_DOWN, KC_UP,    KC_RIGHT,
    KC_7, KC_8, KC_9, KC_MINS, KC_HOME,       KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC,  KC_BSLS,
                      KC_LSFT, KC_LCTL,       KC_NO,    KC_LGUI
  ),

  [_NAVIGATION] = LAYOUT(
    KC_NO,   KC__VOLDOWN, KC__VOLUP, KC_PSCR, KC_NO,              KC_NO,   KC_NO,   KC_PGDN, KC_PGUP, KC_NO,
    KC_MPRV, KC_MPLY,     KC_MNXT,   KC_NO,   KC_NO,              KC_NO,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_LALT, KC_NO,       KC_NO,     KC_NO,   GO_HOME,            KC_NO,   KC_NO,   KC_WH_D, KC_WH_U, KC_NO,
                          KC_LSFT,   KC_LCTL,                     KC_BTN1, KC_BTN2
  ),

  [_SHORTCUT] = LAYOUT(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        LD_TERM, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        CC_QUIT, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, GO_HOME,      KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO,        KC_NO,   KC_NO
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
