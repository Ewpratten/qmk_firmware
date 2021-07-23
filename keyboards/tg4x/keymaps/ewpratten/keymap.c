#include QMK_KEYBOARD_H

/* Layer Definitions */
#define LAYER_BASE 0
#define LAYER_QWERTY 1
#define LAYER_SYMB 2
#define LAYER_NAVI 3
#define LAYER_EXTRA 4
#define LAYER_LEDS 5
#define LAYER_MACROS 6
#define LAYER_SHF_MODS 7

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Base Layer
    [LAYER_BASE] = LAYOUT(
        KC_ESC,  KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, LT(LAYER_LEDS, KC_L), KC_U, KC_Y, LT(LAYER_SHF_MODS, KC_SCLN), _______, KC_BSPC,
        KC_TAB,  KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, LT(LAYER_NAVI, KC_N), KC_E, KC_I, KC_O, KC_ENT,
        KC_LSPO, KC_X, KC_C, KC_D, KC_V, KC_Z, KC_K, KC_H, KC_COMM, KC_DOT, KC_RSPC, TT(LAYER_SYMB),
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE, KC_SPACE, TT(LAYER_EXTRA), _______, _______, TO(LAYER_QWERTY)
    ),

    // QWERTY layer
    [LAYER_QWERTY] = LAYOUT(
        KC_ESC,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, LT(LAYER_SHF_MODS, KC_P), KC_DEL, KC_BSPC,
        KC_TAB,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, LT(LAYER_LEDS, KC_L), KC_SCLN, KC_ENT,
        KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, LT(LAYER_NAVI, KC_N), KC_M, KC_COMM, KC_DOT, KC_RSPC, TT(LAYER_SYMB),
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE, KC_SPACE, TT(LAYER_EXTRA), _______, _______, TO(LAYER_BASE)
    ),

    // Number and Symbol layer
    [LAYER_SYMB] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
       _______, _______, _______, _______, _______, KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC, KC_BSLS, KC_F11, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* Navigation layer
     *
     * This layer is used for controlling both the mouse and arrow keys.
    */
    [LAYER_NAVI] = LAYOUT(
        TO(LAYER_BASE), KC_WH_D, KC_MS_U, KC_WH_U, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_ACL0, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_INS, _______,
        KC_ACL1, _______, _______, _______, _______, KC_BTN3, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, _______
    ),

    // Extras layer
    [LAYER_EXTRA] = LAYOUT(
        TO(LAYER_BASE), KC__VOLDOWN, KC__VOLUP, KC__MUTE, _______, _______, _______, KC_PGUP, _______,   KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS,
        KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,KC_INS,  _______,
        _______, _______, _______, _______, _______, KC_HOME, KC_END,  _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // LED control layer
    [LAYER_LEDS] = LAYOUT(
        RESET , _______, RGB_VAI, RGB_TOG, _______, _______, _______, _______, _______,   _______, _______, _______, _______,
        _______, _______, RGB_VAD, _______, _______, _______, _______, _______, _______, _______,_______,  _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Super macros
    [LAYER_MACROS] = LAYOUT(
        _______ , _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______,
        _______, _______, _______, KC_4,    KC_5,    KC_6, _______, _______, _______, _______,_______,  _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Shift modifiers
    [LAYER_SHF_MODS] = LAYOUT(
        DYN_REC_STOP , DM_REC1, DM_REC2, _______, _______, _______, _______, _______, _______,   _______, _______, _______, KC_DEL,
        _______, DM_PLY1, DM_PLY2, _______,    _______,    _______, _______, _______, _______, _______,_______,  _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
// clang-format on

/* LED layer configuration
 *
 * The following configurers the board colors depending on my active layer
 */
const rgblight_segment_t PROGMEM rgb_setting_layer_capslock[]   = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_RED});
const rgblight_segment_t PROGMEM rgb_setting_clear_left_side[]  = RGBLIGHT_LAYER_SEGMENTS({0, 2, 0, 0, 0});
const rgblight_segment_t PROGMEM rgb_setting_layer_base[]       = RGBLIGHT_LAYER_SEGMENTS({2, 3, HSV_PINK});
const rgblight_segment_t PROGMEM rgb_setting_layer_numbers[]    = RGBLIGHT_LAYER_SEGMENTS({2, 3, HSV_RED});
const rgblight_segment_t PROGMEM rgb_setting_layer_navigation[] = RGBLIGHT_LAYER_SEGMENTS({2, 3, HSV_GREEN});
const rgblight_segment_t PROGMEM rgb_setting_layer_extras[]     = RGBLIGHT_LAYER_SEGMENTS({2, 3, HSV_BLUE});
const rgblight_segment_t PROGMEM rgb_setting_layer_led_ctrl[]   = RGBLIGHT_LAYER_SEGMENTS({0, 7, HSV_WHITE});

// Layer list
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(rgb_setting_layer_capslock,    // Caps
                                                                            rgb_setting_layer_base,        // Base
                                                                            rgb_setting_layer_numbers,     // Layer 1
                                                                            rgb_setting_layer_navigation,  // Layer 2
                                                                            rgb_setting_layer_extras,      // Layer 3
                                                                            rgb_setting_layer_led_ctrl,    // Layer 4
                                                                            rgb_setting_clear_left_side    // Clear
);

bool led_update_user(led_t led_state) {
    // Handles setting the capslock light
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Handles updating the LEDs based on layer
    rgblight_set_layer_state(1, layer_state_cmp(state, LAYER_BASE));
    rgblight_set_layer_state(2, layer_state_cmp(state, LAYER_SYMB));
    rgblight_set_layer_state(3, layer_state_cmp(state, LAYER_NAVI));
    rgblight_set_layer_state(4, layer_state_cmp(state, LAYER_EXTRA));
    rgblight_set_layer_state(5, layer_state_cmp(state, LAYER_LEDS));
    return state;
}

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;

    // Clear the LEDs
    rgblight_set_layer_state(6, true);
}

void matrix_init_user() {}

void matrix_scan_user() {}

bool process_record_user(uint16_t keycode, keyrecord_t* record) { return true; }

// void led_set_user(uint8_t usb_led) {}

// Overrides for the tapping terms.
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        // Space cadet needs to be much faster than layer switch
        case KC_RSPC:
        case KC_LSPO:
            return 150;

        // Layer switches need to be very fast to keep up with typing speed
        case TT(LAYER_SYMB):
        case TT(LAYER_EXTRA):
            return 130;

            // Default (controls layer switch)
        default:
            return TAPPING_TERM;
    }
}
