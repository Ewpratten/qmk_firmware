#include QMK_KEYBOARD_H



// Layer definitions
enum ferris_layers {
    _CURSOR,  // CURSOR Layer
    // _QWERTY, // QWERTY Layer
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
    KC_A, KC_R,    KC_S,    KC_T,    KC_D,            KC_H,      KC_N,  KC_E,    KC_I,    KC_O,
    KC_Z, KC_X,    KC_C,    KC_G,    KC_V,            KC_K,      KC_M,  KC_COMM, KC_DOT, KC_ENT,
                            KC_LSPO, KC_LCPO,         MO(_NSYM), KC_SPACE
  ),

//   [_QWERTY] = LAYOUT(
//     KC_Q, KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,      KC_U,  KC_I,    KC_O,   KC_P,
//     KC_A, KC_S,    KC_D,    KC_F,    KC_G,            KC_H,      KC_J,  KC_K,    KC_L,   KC_ENT,
//     KC_Z, KC_X,    KC_C,    KC_V,    KC_B,            KC_N,      KC_M,  KC_COMM, KC_DOT, KC_BSPC,
//                             KC_LSPO, KC_LCPO,         MO(_NSYM), KC_SPACE
//   ),

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

/* Chording */
enum combos {
#ifdef ENABLE_ASETNIOP
    // ASETNIOP
    ASETNIOP_AE_Q,
    ASETNIOP_RA_W,
    ASETNIOP_RE_Z,
    ASETNIOP_SA_X,
    ASETNIOP_SR_F,
    ASETNIOP_TA_P,
    ASETNIOP_TR_C,
    ASETNIOP_TS_D,
    ASETNIOP_TN_B,
    ASETNIOP_TE_V,
    ASETNIOP_TI_G,
    ASETNIOP_NA_J,
    ASETNIOP_NR_K,
    ASETNIOP_NS_M,
    ASETNIOP_NE_H,
    ASETNIOP_NO_L,
    ASETNIOP_EI_U,
    ASETNIOP_IN_Y,
    // ASETNIOP Words
    ASETNIOP_W_TNE_THE,
    ASETNIOP_W_ASTN_AND,
#endif
};

#ifdef ENABLE_ASETNIOP
    const uint16_t PROGMEM asetniop_ae_combo[] = {KC_A, KC_E, COMBO_END};
    const uint16_t PROGMEM asetniop_ra_combo[] = {KC_R, KC_A, COMBO_END};
    const uint16_t PROGMEM asetniop_re_combo[] = {KC_R, KC_E, COMBO_END};
    const uint16_t PROGMEM asetniop_sa_combo[] = {KC_S, KC_A, COMBO_END};
    const uint16_t PROGMEM asetniop_sr_combo[] = {KC_S, KC_R, COMBO_END};
    const uint16_t PROGMEM asetniop_ta_combo[] = {KC_T, KC_A, COMBO_END};
    const uint16_t PROGMEM asetniop_tr_combo[] = {KC_T, KC_R, COMBO_END};
    const uint16_t PROGMEM asetniop_ts_combo[] = {KC_T, KC_S, COMBO_END};
    const uint16_t PROGMEM asetniop_tn_combo[] = {KC_T, KC_N, COMBO_END};
    const uint16_t PROGMEM asetniop_te_combo[] = {KC_T, KC_E, COMBO_END};
    const uint16_t PROGMEM asetniop_ti_combo[] = {KC_T, KC_I, COMBO_END};
    const uint16_t PROGMEM asetniop_na_combo[] = {KC_N, KC_A, COMBO_END};
    const uint16_t PROGMEM asetniop_nr_combo[] = {KC_N, KC_R, COMBO_END};
    const uint16_t PROGMEM asetniop_ns_combo[] = {KC_N, KC_S, COMBO_END};
    const uint16_t PROGMEM asetniop_ne_combo[] = {KC_N, KC_E, COMBO_END};
    const uint16_t PROGMEM asetniop_no_combo[] = {KC_N, KC_O, COMBO_END};
    const uint16_t PROGMEM asetniop_ei_combo[] = {KC_E, KC_I, COMBO_END};
    const uint16_t PROGMEM asetniop_in_combo[] = {KC_I, KC_N, COMBO_END};
    const uint16_t PROGMEM asetniop_w_tne_combo[] = {KC_T, KC_N, KC_E, COMBO_END};
    const uint16_t PROGMEM asetniop_w_astn_combo[] = {KC_A, KC_S, KC_T, KC_N, COMBO_END};
#endif


combo_t key_combos[COMBO_COUNT] = {
#ifdef ENABLE_ASETNIOP
    // Letters
    [ASETNIOP_AE_Q] = COMBO(asetniop_ae_combo, KC_Q),
    [ASETNIOP_RA_W] = COMBO(asetniop_ra_combo, KC_W),
    [ASETNIOP_RE_Z] = COMBO(asetniop_re_combo, KC_Z),
    [ASETNIOP_SA_X] = COMBO(asetniop_sa_combo, KC_X),
    [ASETNIOP_SR_F] = COMBO(asetniop_sr_combo, KC_F),
    [ASETNIOP_TA_P] = COMBO(asetniop_ta_combo, KC_P),
    [ASETNIOP_TR_C] = COMBO(asetniop_tr_combo, KC_C),
    [ASETNIOP_TS_D] = COMBO(asetniop_ts_combo, KC_D),
    [ASETNIOP_TN_B] = COMBO(asetniop_tn_combo, KC_B),
    [ASETNIOP_TE_V] = COMBO(asetniop_te_combo, KC_V),
    [ASETNIOP_TI_G] = COMBO(asetniop_ti_combo, KC_G),
    [ASETNIOP_NA_J] = COMBO(asetniop_na_combo, KC_J),
    [ASETNIOP_NR_K] = COMBO(asetniop_nr_combo, KC_K),
    [ASETNIOP_NS_M] = COMBO(asetniop_ns_combo, KC_M),
    [ASETNIOP_NE_H] = COMBO(asetniop_ne_combo, KC_H),
    [ASETNIOP_NO_L] = COMBO(asetniop_no_combo, KC_L),
    [ASETNIOP_EI_U] = COMBO(asetniop_ei_combo, KC_U),
    [ASETNIOP_IN_Y] = COMBO(asetniop_in_combo, KC_Y),

    // Words
    [ASETNIOP_W_TNE_THE] = COMBO_ACTION(asetniop_w_tne_combo),
    [ASETNIOP_W_ASTN_AND] = COMBO_ACTION(asetniop_w_astn_combo),
#endif
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
#ifdef ENABLE_ASETNIOP
        case ASETNIOP_W_TNE_THE: if (pressed) SEND_STRING("the"); break;
        case ASETNIOP_W_ASTN_AND: if (pressed) SEND_STRING("and"); break;
#endif
    }
}
