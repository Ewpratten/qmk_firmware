/* Copyright 2019 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Base */
        KC_ESC,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_BSPC,
        KC_TAB,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
        KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, LT(2, KC_N), KC_M, KC_COMM, KC_DOT, KC_RSPC, MO(1),
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE, KC_SPACE, MO(3), _______, _______, _______
    ),

    // Number and Symbol layer
    [1] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
       _______, _______, _______, _______, _______, KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC, KC_BSLS, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* Navigation layer
     *
     * This layer is used for controlling both the mouse and arrow keys.
    */
    [2] = LAYOUT(
        TO(0),   KC_WH_D, KC_MS_U, KC_WH_U, KC_ACL1, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL0, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_INS, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, _______
    ),

    // Extras layer
    [3] = LAYOUT(
        _______, KC__VOLDOWN, KC__VOLUP, KC__MUTE, _______, _______, _______, KC_PGUP, _______,   KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS,
        KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,KC_INS,  _______,
        _______, _______, _______, _______, _______, KC_HOME, KC_END,  _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};

void matrix_init_user() {

}

void matrix_scan_user(){

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void update_led(void) {
    // Get the currently active layer ID
    uint8_t layer = biton32(layer_state);

    // Clear the board LEDs
    rgblight_sethsv_at(0, 0, 0, 0);

    // Handle the LED state based on layer
    switch (layer) {
        case 0:
            // PINK
            rgblight_setrgb(255, 71, 188);
            break;

        case 1:
            // BLUE
            rgblight_setrgb(71, 71, 255);
            break;

        case 2:
            // RED
            rgblight_setrgb(255, 0, 43);
            break;

        default:
            rgblight_setrgb(0, 255, 0);
            break;
    }
}

void led_set_user(uint8_t usb_led) { update_led(); }
