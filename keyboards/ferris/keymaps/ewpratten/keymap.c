#include QMK_KEYBOARD_H

// Combo magic
#include "combos.c"


// Layer definitions
enum ferris_layers {
    // _CURSOR,  // CURSOR Layer
    // _QWERTY,
    _MODMAK,
    _NUMERIC,
    _UTILITY,
    _MACROS,
    _RAINBOW
    // _NSYM,     // Numbers and Symbols
    // _NAVIGATION,  // Navigation layer
    // _SHORTCUT, // Shortcut Layer
};

// Shorthands
// #define GO_HOME TO(_CURSOR)
// #define GO_NAV TO(_NAVIGATION)
// #define GO_SHRT OSL(_SHORTCUT)
#define LD_TERM LGUI(KC_ENT)
#define CC_QUIT LGUI(LSFT(KC_Q))
#define CC_COMM LCTL(KC_SLSH)
#define CC_FMT LCTL(LSFT(KC_I))

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // [_QWERTY] = LAYOUT(
  //   KC_NO,    KC_Q, KC_W, KC_E, KC_R, KC_T,   /**/    KC_Y,      KC_U,  KC_I,    KC_O,   // KC_BSPC,
  //   KC_LSFT,  KC_A, KC_S, KC_D, KC_F, KC_G,   /**/    KC_H,      KC_J,  KC_K,    KC_L,  // KC_P,
  //   KC_LCTL,  KC_Z, KC_X, KC_C, KC_V, KC_B,   /**/    KC_N,      KC_M,  KC_COMM, KC_DOT, // KC_ENT,
  //                             KC_NO, KC_NO,   /**/    MO(_UTILITY), LT(_NUMERIC, KC_SPACE)
  // ),

//   [_MODMAK] = LAYOUT(
//     KC_Q, KC_W,    KC_F,    KC_P,    KC_G,            KC_J,      KC_L,  KC_U,    KC_Y,   KC_BSPC,
//     KC_A, KC_R,    KC_S,    KC_T,    KC_D,            KC_H,      KC_N,  KC_E,    KC_I,   KC_O,
//     KC_Z, KC_X,    KC_C,    KC_V,    KC_K,            KC_B,      KC_M,  KC_COMM, KC_DOT, KC_ENT,
//                             KC_LSFT, KC_LCTL,         MO(_UTILITY), LT(_NUMERIC, KC_SPACE)
//   ),

  [_MODMAK] = LAYOUT(
    KC_Q, KC_W,    KC_F,    KC_P,    KC_G,            KC_J,      KC_L,  KC_U,    KC_Y,   KC_BSPC,
    KC_A, KC_R,    KC_S,    KC_T,    KC_D,            KC_H,      KC_N,  KC_E,    KC_I,   KC_O,
    KC_LCTL, KC_Z, KC_X,    KC_C,    KC_V,                KC_B,      KC_M,  KC_K, KC_COMM, KC_DOT,
                            KC_LSFT, MO(_MACROS),         LT(_UTILITY, KC_SPACE), LT(_NUMERIC, KC_SPACE)
  ),

//   [_QWERTY] = LAYOUT(
//     KC_Q,    KC_W, KC_E, KC_R, KC_T,            KC_Y,      KC_U,    KC_I,   KC_O,       KC_P,
//     KC_A,    KC_S, KC_D, KC_F, KC_G,            KC_H,      KC_J,    KC_K,   KC_L,       KC_SCLN,
//     KC_LCTL, KC_Z, KC_X, KC_C, KC_V,            KC_B,      KC_N,    KC_M,   KC_COMM,    KC_DOT,
//                     KC_LSFT, KC_NO,           LT(_UTILITY, KC_SPACE), LT(_NUMERIC, KC_SPACE)
//   ),

  [_NUMERIC] = LAYOUT(
    KC_F1,    KC_F2,  KC_F3,  KC_F4,  KC_F5,   /**/    KC_F6,    KC_F7,  KC_F8,  KC_F9,  KC_F10,
    KC_1,     KC_2,   KC_3,   KC_4,   KC_5,    /**/    KC_6,     KC_7,   KC_8,   KC_9,   KC_0,
    KC_LALT,  KC_NO,  KC_NO,  KC_NO,  TO(_MODMAK),   /**/    KC_LGUI,  KC_EQL,  KC_MINS,  KC_F11, KC_F12,
                         KC_LSFT,   KC_LCTL,   /**/    KC_NO,    KC_NO
  ),

  [_UTILITY] = LAYOUT(
    KC_Q, KC_VOLD, KC_VOLU, KC_NO, KC_PSCR,    /**/    LD_TERM,  KC_HOME,   KC_PGUP,  KC_PGDN,  KC_DEL,
    KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_TAB,     /**/    KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_END,
    KC_NO, KC_NO, KC_NO, CC_FMT, CC_COMM,      /**/    KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC,  KC_BSLS,
                    KC_LSFT,   KC_LCTL,     /**/    KC_NO, KC_LGUI
  ),

  [_MACROS] = LAYOUT(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, TO(_RAINBOW),
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO,        KC_NO, KC_NO
  ),

  [_RAINBOW] = LAYOUT(
    KC_ESC, KC_Q, KC_W, KC_E, KC_5,        TO(_MODMAK), KC_NO, KC_NO, KC_NO, KC_NO,
    KC_LSFT, KC_A, KC_S, KC_D, KC_G,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_SPACE, KC_X,       KC_NO, KC_NO
  )



  // [_NSYM] = LAYOUT(
  //   CC_QUIT,    KC_NO,  KC_NO,  KC_NO,  KC_PSCR,    LD_TERM,  KC_END,   KC_PGUP,  KC_PGDN,  KC_SCLN,
  //   KC_LALT,    KC_NO,  KC_NO,  KC_NO,  KC_TAB,     KC_HOME,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,
  //   KC_1,       KC_2,   KC_3,   KC_4,   KC_5,       KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
  //                        KC_LSFT,   KC_LCTL,        KC_NO,    KC_NO
  // )

//   [_NSYM] = LAYOUT(
//     KC_1, KC_2, KC_3, KC_EQL,  GO_NAV,        KC_GESC,  KC_NO,   GO_SHRT,   KC_DEL,    KC_SCLN,
//     KC_4, KC_5, KC_6, KC_0,    KC_TAB,        KC_END,   KC_LEFT, KC_DOWN, KC_UP,    KC_RIGHT,
//     KC_7, KC_8, KC_9, KC_MINS, KC_HOME,       KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC,  KC_BSLS,
//                       KC_LSFT, KC_LCTL,       KC_NO,    KC_LGUI
//   ),

  // [_NAVIGATION] = LAYOUT(
  //   KC_NO,   KC__VOLDOWN, KC__VOLUP, KC_PSCR, KC_NO,              KC_NO,   KC_NO,   KC_PGDN, KC_PGUP, KC_NO,
  //   KC_MPRV, KC_MPLY,     KC_MNXT,   KC_NO,   KC_NO,              KC_NO,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
  //   KC_LALT, KC_NO,       KC_NO,     KC_NO,   GO_HOME,            KC_NO,   KC_NO,   KC_WH_D, KC_WH_U, KC_NO,
  //                         KC_LSFT,   KC_LCTL,                     KC_BTN1, KC_BTN2
  // ),

  // [_SHORTCUT] = LAYOUT(
  //   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        LD_TERM, KC_NO, KC_NO, KC_NO, KC_NO,
  //   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        CC_QUIT, KC_NO, KC_NO, KC_NO, KC_NO,
  //   KC_NO, KC_NO, KC_NO, KC_NO, GO_HOME,      KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
  //                        KC_NO, KC_NO,        KC_NO,   KC_NO
  // )
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

// Overrides for the tapping terms.
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
      // Space cadet needs to be much slower than my default
      case KC_LSPO:
      case KC_LCPO:
          return 200;
      case LT(_NUMERIC, KC_SPACE):
          return 1000;
      default:
          return TAPPING_TERM;
  }
}



// /* Chording */
// enum combos {


//   // ASETNIOP Words
//   ASETNIOP_W_TNE_THE,
//   ASETNIOP_W_ASTN_AND,

//   // Using combos for semi-common keys
//   ASETNIOP_AO_ENT,
//   ASETNIOP_RI_BSPC
// };

// const uint16_t PROGMEM asetniop_ae_combo[] = {KC_A, KC_E, COMBO_END};
// const uint16_t PROGMEM asetniop_ra_combo[] = {KC_R, KC_A, COMBO_END};
// const uint16_t PROGMEM asetniop_re_combo[] = {KC_R, KC_E, COMBO_END};
// const uint16_t PROGMEM asetniop_sa_combo[] = {KC_S, KC_A, COMBO_END};
// const uint16_t PROGMEM asetniop_sr_combo[] = {KC_S, KC_R, COMBO_END};
// const uint16_t PROGMEM asetniop_ta_combo[] = {KC_T, KC_A, COMBO_END};
// const uint16_t PROGMEM asetniop_tr_combo[] = {KC_T, KC_R, COMBO_END};
// const uint16_t PROGMEM asetniop_ts_combo[] = {KC_T, KC_S, COMBO_END};
// const uint16_t PROGMEM asetniop_tn_combo[] = {KC_T, KC_N, COMBO_END};
// const uint16_t PROGMEM asetniop_te_combo[] = {KC_T, KC_E, COMBO_END};
// const uint16_t PROGMEM asetniop_ti_combo[] = {KC_T, KC_I, COMBO_END};
// const uint16_t PROGMEM asetniop_na_combo[] = {KC_N, KC_A, COMBO_END};
// const uint16_t PROGMEM asetniop_nr_combo[] = {KC_N, KC_R, COMBO_END};
// const uint16_t PROGMEM asetniop_ns_combo[] = {KC_N, KC_S, COMBO_END};
// const uint16_t PROGMEM asetniop_ne_combo[] = {KC_N, KC_E, COMBO_END};
// const uint16_t PROGMEM asetniop_no_combo[] = {KC_N, KC_O, COMBO_END};
// const uint16_t PROGMEM asetniop_ei_combo[] = {KC_E, KC_I, COMBO_END};
// const uint16_t PROGMEM asetniop_in_combo[] = {KC_I, KC_N, COMBO_END};
// const uint16_t PROGMEM asetniop_w_tne_combo[] = {KC_T, KC_N, KC_E, COMBO_END};
// const uint16_t PROGMEM asetniop_w_astn_combo[] = {KC_A, KC_S, KC_T, KC_N, COMBO_END};
// const uint16_t PROGMEM asetniop_ao_combo[] = {KC_A, KC_O, COMBO_END};
// const uint16_t PROGMEM asetniop_ri_combo[] = {KC_R, KC_I, COMBO_END};



// combo_t key_combos[COMBO_COUNT] = {
//   // Letters
//   [ASETNIOP_AE_Q] = COMBO(asetniop_ae_combo, KC_Q),
//   [ASETNIOP_RA_W] = COMBO(asetniop_ra_combo, KC_W),
//   [ASETNIOP_RE_Z] = COMBO(asetniop_re_combo, KC_Z),
//   [ASETNIOP_SA_X] = COMBO(asetniop_sa_combo, KC_X),
//   [ASETNIOP_SR_F] = COMBO(asetniop_sr_combo, KC_F),
//   [ASETNIOP_TA_P] = COMBO(asetniop_ta_combo, KC_P),
//   [ASETNIOP_TR_C] = COMBO(asetniop_tr_combo, KC_C),
//   [ASETNIOP_TS_D] = COMBO(asetniop_ts_combo, KC_D),
//   [ASETNIOP_TN_B] = COMBO(asetniop_tn_combo, KC_B),
//   [ASETNIOP_TE_V] = COMBO(asetniop_te_combo, KC_V),
//   [ASETNIOP_TI_G] = COMBO(asetniop_ti_combo, KC_G),
//   [ASETNIOP_NA_J] = COMBO(asetniop_na_combo, KC_J),
//   [ASETNIOP_NR_K] = COMBO(asetniop_nr_combo, KC_K),
//   [ASETNIOP_NS_M] = COMBO(asetniop_ns_combo, KC_M),
//   [ASETNIOP_NE_H] = COMBO(asetniop_ne_combo, KC_H),
//   [ASETNIOP_NO_L] = COMBO(asetniop_no_combo, KC_L),
//   [ASETNIOP_EI_U] = COMBO(asetniop_ei_combo, KC_U),
//   [ASETNIOP_IN_Y] = COMBO(asetniop_in_combo, KC_Y),

//   // Words
//   [ASETNIOP_W_TNE_THE] = COMBO_ACTION(asetniop_w_tne_combo),
//   [ASETNIOP_W_ASTN_AND] = COMBO_ACTION(asetniop_w_astn_combo),

//   // Keys
//   [ASETNIOP_AO_ENT] = COMBO(asetniop_ao_combo, KC_ENT),
//   [ASETNIOP_RI_BSPC] = COMBO(asetniop_ri_combo, KC_BSPC),
// };

// void process_combo_event(uint16_t combo_index, bool pressed) {
//   switch (combo_index) {
//       case ASETNIOP_W_TNE_THE: if (pressed) SEND_STRING("the"); break;
//       case ASETNIOP_W_ASTN_AND: if (pressed) SEND_STRING("and"); break;
//   }
// }
