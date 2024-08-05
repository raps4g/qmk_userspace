#include "keycodes.h"
#include QMK_KEYBOARD_H
#include "keymap_spanish_latin_america.h"
#include "oled_driver.h"
#include "oled-renders.h"

const key_override_t quot_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_QUOT, ES_DQUO);
// shift + , = <
const key_override_t dot_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_COMM, ES_LABK);
// shift + . = >
const key_override_t comm_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_DOT, ES_RABK);
// shift + ; = :
const key_override_t scln_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_SCLN, ES_COLN);
// shift + / = ?
const key_override_t slsh_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_SLSH, ES_QUES);
// shift + \ = |
const key_override_t bsls_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_BSLS, ES_PIPE);
// shift + = = +
const key_override_t eql_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_EQL, ES_PLUS);
const key_override_t **key_overrides = (const key_override_t *[]){
    &comm_key_override,
	&dot_key_override,
    &quot_key_override,
    &scln_key_override,
    &slsh_key_override,
    &eql_key_override,
    &bsls_key_override,
	NULL
};

#define _BASE 0
#define _NS 1
#define _FN 2
#define _MCR 4

#define MOD_O LSFT_T(ES_O)
#define MOD_E LCTL_T(ES_E)
#define MOD_U LALT_T(ES_U)
#define MOD_H LALT_T(ES_H)
#define MOD_T RCTL_T(ES_T)
#define MOD_N RSFT_T(ES_N)

#define MOD_2 LSFT_T(ES_2)
#define MOD_3 LCTL_T(ES_3)
#define MOD_4 LALT_T(ES_4)
#define MOD_7 LALT_T(ES_7)
#define MOD_8 RCTL_T(ES_8)
#define MOD_9 RSFT_T(ES_9)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint16_t lat_state;
    if (keycode == ES_ACUT && !record->event.pressed) {
        lat_state = 1;
    }
    if (lat_state && !record->event.pressed) {
        switch (keycode) {
            case ES_A:
            case MOD_O:
            case MOD_E:
            case MOD_U:
            case ES_I:
                lat_state = 0;
                break;
            case MOD_N:
                tap_code16(KC_BSPC);
                tap_code16(ES_NTIL);
                lat_state = 0;
                return false;
        }
    }
    return true;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, ES_QUOT, ES_COMM,  ES_DOT,    ES_P,    ES_Y,                         ES_F,    ES_G,    ES_C,    ES_R,    ES_L, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      ES_SLSH,    ES_A,   MOD_O,   MOD_E,   MOD_U,    ES_I,                         ES_D,   MOD_H,   MOD_T,   MOD_N,    ES_S, ES_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       ES_EQL, ES_SCLN,    ES_Q,    ES_J,    ES_K,    ES_X,                         ES_B,    ES_M,    ES_W,    ES_V,    ES_Z, ES_ACUT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                TT(_MCR), TT(_NS),   LGUI_T(KC_SPC),     KC_ENT, TT(_FN),  KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [_NS] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, ES_MORD,   ES_AT, ES_NUMB,  ES_DLR, ES_PERC,                      ES_CIRC, ES_AMPR, ES_ASTR, ES_PIPE, ES_BSLS, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    ES_1,   MOD_2,   MOD_3,   MOD_4,    ES_5,                         ES_6,   MOD_7,   MOD_8,   MOD_9,    ES_0, ES_TILD,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, ES_IQUE, ES_LPRN, ES_LBRC, ES_LCBR, ES_IEXL,                      ES_EXLM, ES_RCBR, ES_RBRC, ES_RPRN, ES_QUES, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                TT(_MCR), _______,   LGUI_T(KC_SPC),     KC_ENT, TT(_FN),  KC_RALT
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
                                TT(_MCR), TT(_NS),   LGUI_T(KC_SPC),     KC_ENT, _______,  KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_MCR] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,                      XXXXXXX, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, XXXXXXX, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,                      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 _______,   LGUI_T(KC_SPC), TT(_NS),     KC_ENT, TT(_FN),  KC_RALT
                                      //`--------------------------'  `--------------------------'
  )

};

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user() {
    oled_set_brightness(80);
    if (!is_keyboard_master()) {
        oled_set_cursor(0,4);
        render_matecito();
        return false;
    }
    oled_clear();
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            render_layer_base();
            break;
        case _NS:
            render_layer_sym();
            break;
        case _FN:
            render_layer_fn();
            break;
        case _MCR:
            render_layer_macros();
            break;
    }
    render_caps();
    return false;
}

