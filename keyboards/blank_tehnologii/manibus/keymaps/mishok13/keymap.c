#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
//   ┌────────┬────────┬────────┬────────┬────────┬────────┐                       ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
//   ├────────┼────────┼────────┼────────┼────────┼────────┤                       ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
//   ├────────┼────────┼────────┼────────┼────────┼────────┤                       ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, RSFT_T(KC_QUOT),
//   ├────────┼────────┼────────┼────────┼────────┼────────┤                       ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
//   ├────────┼────────┼────────┼────────┼────────┼────────┼──────────────┐     ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      MEH(KC_NO),KC_PGUP,KC_PGDN,  MO(1), KC_LGUI, LCTL_T(KC_DEL),LALT_T(KC_SPC),LCTL_T(KC_ENT),LALT_T(KC_BSPC),MO(1),KC_LBRC, KC_RBRC, LCA_T(KC_HOME),  MT(MOD_LCTL | MOD_LGUI, KC_END)
//   └────────┴────────┴────────┴────────┴────────┴────────┴──────────────┘     └────────┴────────┴────────┴────────┴────────┴────────┴────────┘
  ),

  [1] = LAYOUT(
QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                    KC_F6  , KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
_______, _______, KC_UP,   _______, QK_BOOT, _______,                  _______, _______, KC_UP,   _______, KC_MPLY, KC_F12,
_______, KC_LEFT, KC_DOWN, KC_RIGHT,_______, _______,                  _______, KC_LEFT, KC_DOWN, KC_RIGHT,KC_VOLD, KC_VOLU,
_______, _______, _______, _______, _______, _______,                  _______, KC_MUTE, KC_MPRV, KC_MNXT, _______, _______,
_______, KC_PGUP, _______, _______, _______, _______, KC_LALT, KC_DEL, _______, _______, _______,  _______, KC_PGDN, _______
  )
};

const uint16_t PROGMEM combo_qw[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_we[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_er[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_rt[] = {KC_R, KC_T, COMBO_END};

const uint16_t PROGMEM combo_as[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo_sd[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_df[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_fg[] = {KC_F, KC_G, COMBO_END};

const uint16_t PROGMEM combo_zx[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM combo_xc[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_cv[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_vb[] = {KC_V, KC_B, COMBO_END};

const uint16_t PROGMEM combo_po[] = {KC_P, KC_O, COMBO_END};
const uint16_t PROGMEM combo_oi[] = {KC_O, KC_I, COMBO_END};
const uint16_t PROGMEM combo_iu[] = {KC_I, KC_U, COMBO_END};
const uint16_t PROGMEM combo_uy[] = {KC_U, KC_Y, COMBO_END};

const uint16_t PROGMEM combo_scln_l[] = {KC_SCLN, KC_L, COMBO_END};
const uint16_t PROGMEM combo_lk[] = {KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM combo_kj[] = {KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM combo_jh[] = {KC_J, KC_H, COMBO_END};

const uint16_t PROGMEM combo_slsh_dot[] = {KC_SLSH, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_dot_comm[] = {KC_DOT, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_comm_m[] = {KC_COMM, KC_M, COMBO_END};
const uint16_t PROGMEM combo_mn[] = {KC_M, KC_N, COMBO_END};

combo_t key_combos[] = {
     COMBO(combo_qw, LCTL(KC_LALT)),
     COMBO(combo_we, LALT(KC_LGUI)),
     COMBO(combo_er, LCTL(KC_LGUI)),
     COMBO(combo_rt, LCTL(LALT(KC_LGUI))),

     COMBO(combo_as, KC_LGUI),
     COMBO(combo_sd, KC_LSFT),
     COMBO(combo_df, KC_LALT),
     COMBO(combo_fg, KC_LCTL),

     COMBO(combo_zx, KC_HYPR),
     COMBO(combo_xc, KC_MEH),
     COMBO(combo_cv, LSFT(KC_LALT)),
     COMBO(combo_vb, LSFT(KC_LCTL)),

    COMBO(combo_po, LCTL(KC_LALT)),
    COMBO(combo_oi, LALT(KC_LGUI)),
    COMBO(combo_iu, LCTL(KC_LGUI)),
    COMBO(combo_uy, LCTL(LALT(KC_LGUI))),

    COMBO(combo_scln_l, KC_LGUI),
    COMBO(combo_lk, KC_LSFT),
    COMBO(combo_kj, KC_LALT),
    COMBO(combo_jh, KC_LCTL),

    COMBO(combo_slsh_dot, KC_HYPR),
    COMBO(combo_dot_comm, KC_MEH),
    COMBO(combo_comm_m, LSFT(KC_LALT)),
    COMBO(combo_mn, LSFT(KC_LCTL)),
};
