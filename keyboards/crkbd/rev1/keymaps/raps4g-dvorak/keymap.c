#include QMK_KEYBOARD_H
#include "keymap_spanish_latin_america.h"

enum custom_keycodes {
    ES_AAC = SAFE_RANGE,
    ES_EAC,
    ES_IAC,
    ES_OAC,
    ES_UAC
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ES_AAC:
            (record->event.pressed) ? SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_A)) : clear_keyboard();
            break;
        case ES_EAC:
            (record->event.pressed) ? SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_E)) : clear_keyboard();
            break;
        case ES_IAC:
            (record->event.pressed) ? SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_I)) : clear_keyboard();
            break;
        case ES_OAC:
            (record->event.pressed) ? SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_O)) : clear_keyboard();
            break;
        case ES_UAC:
            (record->event.pressed) ? SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_U)) : clear_keyboard();
            break;
    }
    return true;
}

#define _BASE 0
#define _NS 1
#define _FN 2
#define _LAT 3

#define MOD_O LSFT_T(ES_O)
#define MOD_E LCTL_T(ES_E)
#define MOD_U LALT_T(ES_U)
#define MOD_H LALT_T(ES_H)
#define MOD_T RCTL_T(ES_T)
#define MOD_N RSFT_T(ES_N)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, ES_QUOT, ES_COMM,  ES_DOT,    ES_P,    ES_Y,                         ES_F,    ES_G,    ES_C,    ES_R,    ES_L, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      ES_SLSH,    ES_A,   MOD_O,   MOD_E,   MOD_U,    ES_I,                         ES_D,   MOD_H,   MOD_T,   MOD_N,    ES_S, ES_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       ES_EQL, ES_SCLN,    ES_Q,    ES_J,    ES_K,    ES_X,                         ES_B,    ES_M,    ES_W,    ES_V,    ES_Z,OSL(_LAT),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 XXXXXXX, TT(_NS),   LGUI_T(KC_SPC),     KC_ENT, TT(_FN),  KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [_NS] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, ES_MORD,   ES_AT, ES_NUMB,  ES_DLR, ES_PERC,                      ES_CIRC, ES_AMPR, ES_ASTR, ES_PIPE, ES_BSLS, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    ES_1,    ES_2,    ES_3,    ES_4,    ES_5,                         ES_6,    ES_7,    ES_8,    ES_9,    ES_0, ES_TILD,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, ES_IQUE, ES_LPRN, ES_LBRC, ES_LCBR, ES_IEXL,                      ES_EXLM, ES_RCBR, ES_RBRC, ES_RPRN, ES_QUES, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 XXXXXXX, _______,   LGUI_T(KC_SPC),     KC_ENT, TT(_FN),  KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_FN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_F11,  KC_F12, KC_HOME, KC_PGUP, KC_PSCR,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, CW_TOGG, KC_CAPS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX,  KC_END, KC_PGDN, KC_MENU,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 XXXXXXX, TT(_NS),   LGUI_T(KC_SPC),     KC_ENT, _______,  KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_LAT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, ES_QUOT, ES_COMM,  ES_DOT,    ES_P,    ES_Y,                         ES_F,    ES_G,    ES_C,    ES_R,    ES_L, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      ES_SLSH,  ES_AAC,  ES_OAC,  ES_EAC,  ES_UAC,  ES_IAC,                         ES_D,    ES_H,    ES_T, ES_NTIL,    ES_S, ES_DIAE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       ES_EQL, ES_SCLN,    ES_Q,    ES_J,    ES_K,    ES_X,                         ES_B,    ES_M,    ES_W,    ES_V,    ES_Z,OSL(_LAT),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 XXXXXXX, TT(_NS),   LGUI_T(KC_SPC),     KC_ENT, TT(_FN),  KC_RALT
                                      //`--------------------------'  `--------------------------'

  )
};
