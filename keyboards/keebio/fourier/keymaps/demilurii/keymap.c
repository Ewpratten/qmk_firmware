/**
 * :: Notes for Miwu
 *
 * This file is where you will find everything related to how the keys behave on your keyboard.
 * The `fourier_layers` enum contains names for each of your layers, and the `keymaps[]` array
 * contains the actual keys for each layer. In the array, layers are listed in reverse. The top
 * is your default, and everything below is a "higher" layer. This is just a quirk of our firmware.
 *
 * :: Special keys
 *
 * You may notice some "special" keys in your keymap. These are mostly handy shortcuts.
 * Here are some examples:
 *
 *  - `KC_NO`: This key does nothing.
 *  - `_______`: This key does whatever the layer under it does.
 *
 * A list of all the keycodes you can use may be found here:
 * https://docs.qmk.fm/#/keycodes?id=keycodes-overview
 *
 */

#include QMK_KEYBOARD_H

// Layer definitions
enum fourier_layers {
    _QWERTY,  // QWERTY Layer
    _NSYM,    // Numbers and Symbols
    _ART,     // Art and navigation shortcuts
    _UTIL,    // Utility shortcuts
};

// Shorthands
#define GO_ART MO(_ART)
#define GO_NUM MO(_NSYM)
#define GO_UTIL MO(_UTIL)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY */
    [_QWERTY] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,             KC_Y,     KC_U,    KC_I,    KC_O,     KC_P,    KC_DEL,  KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,             KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,             KC_N,     KC_M,    KC_SLSH, KC_QUOTE, KC_RSFT, GO_NUM,
        KC_LCTL, KC_LGUI, KC_LALT, GO_NUM, GO_ART,                   KC_SPACE, GO_UTIL, KC_LBRC, KC_RBRC,  KC_BSLS
    ),

    /* Numbers and symbols */
    [_NSYM] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,   KC_NO,  KC_NO,             KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_MINS,  _______,
        _______, KC_4,    KC_5,    KC_6,   KC_NO,  KC_NO,             KC_NO,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_EQL,
        _______, KC_7,    KC_8,    KC_9,   KC_0,   KC_NO,             KC_9,    KC_F10,  KC_F11,  KC_F12,  _______, GO_NUM,
        _______, _______, _______, GO_NUM, GO_ART,                    _______, GO_UTIL, _______, _______, _______
    ),

    /* Art and navigation shortcuts */
    [_ART] = LAYOUT(
        KC_NO,   KC_COMM, KC_UP,   KC_DOT,   KC_NO,  KC_NO,             KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    _______,
        KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,  KC_NO,             KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        _______, KC_T,    KC_I,    KC_NO,    KC_NO,  KC_NO,             KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   GO_NUM,
        _______, _______, _______, GO_NUM,   GO_ART,                    KC_NO,  GO_UTIL, KC_NO,   KC_NO,   KC_NO
    ),

    /* Utility shortcuts */
    [_UTIL] = LAYOUT(
        KC_NO,   KC__VOLDOWN, KC__VOLUP, KC__MUTE, KC_NO,  KC_NO,             KC_NO,   KC_NO,   KC_PGUP, KC_PGDN, KC_PSCR, KC_NO, KC_PAUS,
        KC_NO,   KC_MPRV,     KC_MPLY,   KC_MNXT,  KC_NO,  KC_NO,             KC_HOME, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        _______, KC_NO,       KC_NO,     KC_NO,    KC_NO,  KC_NO,             KC_END,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   GO_NUM,
        _______, _______,     _______,   GO_NUM,   GO_ART,                    KC_NO,   GO_UTIL, KC_NO,   KC_NO,   KC_NO
    ),


};
// clang-format on
