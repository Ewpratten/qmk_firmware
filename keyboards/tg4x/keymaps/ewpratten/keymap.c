#include QMK_KEYBOARD_H

/* Layer Definitions */
enum tg4x_layers { LAY_QWERTY, LAY_COLEMAK, LAY_NUM, LAY_UTIL, LAY_QUIRKY };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAY_QWERTY] = LAYOUT(
        KC_ESC,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,  KC_P, KC_DEL, KC_BSPC,
        KC_TAB,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,  KC_L, KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT, MO(LAY_NUM),
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE, KC_SPACE, MO(LAY_UTIL), KC_NO, KC_NO, KC_NO
    ),
    [LAY_COLEMAK] = LAYOUT(
        KC_ESC,  KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y,  KC_SCLN, KC_DEL, KC_BSPC,
        KC_TAB,  KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_RSFT, MO(LAY_NUM),
        KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_SPACE, MO(LAY_UTIL), KC_NO, KC_NO, TO(LAY_QWERTY)
    ),
    [LAY_NUM] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
       KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC, KC_BSLS, KC_F11, KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_SPACE, KC_SPACE, MO(LAY_QUIRKY), KC_NO, KC_NO, KC_NO
    ),

    // Extras layer
    [LAY_UTIL] = LAYOUT(
        KC_NO, KC__VOLDOWN, KC__VOLUP, KC__MUTE, RESET, KC_NO, KC_NO, KC_PGUP, KC_NO,  KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS,
        KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,KC_INS,  KC_NO,
        KC_TRNS, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_HOME, KC_END,  TO(LAY_COLEMAK), KC_NO, KC_NO, KC_TRNS, KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_SPACE, KC_SPACE, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    // "Quirky" extra things
    [LAY_UTIL] = LAYOUT(
        KC_NO, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,  KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_SPACE, KC_SPACE, KC_NO, KC_NO, KC_NO, KC_NO
    ),
};
// clang-format on



void matrix_scan_user() {}

bool process_record_user(uint16_t keycode, keyrecord_t* record) { return true; }


// Overrides for the tapping terms.
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        // Space cadet needs to be much faster than layer switch
        case KC_RSPC:
        case KC_LSPO:
            return 150;

        // Default (controls layer switch)
        default:
            return TAPPING_TERM;
    }
}
