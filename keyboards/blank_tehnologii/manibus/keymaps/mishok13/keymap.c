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

const uint16_t PROGMEM combo_df[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_fg[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM combo_vb[] = {KC_V, KC_B, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_df, KC_LALT),
    COMBO(combo_fg, KC_LCTL),

    COMBO(combo_vb, LSFT(KC_LCTL)),
    COMBO(combo_cv, LSFT(KC_LALT)),
    COMBO(combo_xc, KC_MEH),
    COMBO(combo_zx, KC_HYPR)),
};
