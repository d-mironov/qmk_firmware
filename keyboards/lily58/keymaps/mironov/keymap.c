#include "keycodes.h"
#include QMK_KEYBOARD_H
#include <stdint.h>
// #include "keymap_german.h"

enum layer_number {
    QWERTY = 0,
    LOWER,
    RAISE,
    ADJUST,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
    * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
    * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| DEL  |
    *                   |      |      |      |/       /         \      \ |      |      |      |
    *                   `----------------------------'           '------''--------------------'
    */

    [QWERTY] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_MINS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_LBRC,   KC_RBRC,   KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
                               KC_LALT, KC_LGUI, MO(LOWER), KC_SPC,    KC_ENT,  MO(RAISE), KC_BSPC, KC_DEL
    ),
    /* LOWER
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   !  |   1  |   2  |   3  |   5  |                    |   %  |   [  |   ]  |   @  |   &  |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   `  |   0  |   4  |   5  |   6  |   ~  |-------.    ,-------|   ^  |   (  |   )  |   $  |   *  |   ~  |
     * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
     * |      |   =  |   7  |   8  |   9  |      |-------|    |-------|   +  |   {  |   }  |   #  |   +  |   |  |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
    [LOWER] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_EXLM, KC_1,    KC_2,    KC_3,    KC_5,                          KC_PERC, KC_LBRC, KC_RBRC,   KC_AT, KC_AMPR, KC_TRNS,
        KC_GRV,  KC_0,    KC_4,    KC_5,    KC_6,    KC_TILD,                       KC_CIRC, KC_LPRN, KC_RPRN, KC_DLR,  KC_PAST, KC_TILD,
        KC_TRNS, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_EQL,  KC_TRNS,     KC_TRNS, KC_PLUS, KC_LCBR, KC_RCBR, KC_HASH, KC_PLUS, KC_PIPE,
                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, MO(ADJUST), KC_TRNS, KC_TRNS),
    /* RAISE
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | SLEP |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   `  |      | PREV | PLAY | NEXT |      |                    | VOL+ |   ä  |   ü  |   ö  |   ß  |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |  F2  |      |      |      |      |      |-------.    ,-------| VOL- | Left | Down |  Up  |Right | Mute |
     * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
    [RAISE] = LAYOUT(
        KC_SLEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS, KC_TRNS,
        KC_GRV, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS,                         KC_KB_VOLUME_UP, UC(0x00E4), UC(0x00FC), UC(0x00F6), UC(0x00DF), KC_TRNS,
        KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                           KC_KB_VOLUME_DOWN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_MUTE,
        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS,        KC_NO, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
                                     KC_TRNS,KC_TRNS,MO(ADJUST),KC_TRNS,     KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),

    /* ADJUST
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |EE CLR|      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   `  |      |      |      |      |      |                    |      |      |RGBTOG|      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | F11  |  F1  |  F2  |  F3  |  F4  |  F5  |-------.    ,-------|      |RGB MO|      |      |      |      |
     * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
     * | F12  |  F6  |  F7  |  F8  |  F9  | F10  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
    [ADJUST] =
        LAYOUT(
            EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                     KC_NO, KC_NO,    KC_NO,   KC_NO, KC_NO,    KC_NO,
            KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                     KC_NO, KC_NO,    RGB_TOG, KC_NO, KC_NO,    KC_NO,
            KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                     KC_NO, RGB_RMOD, KC_NO,   KC_NO, RGB_MOD,  KC_NO,
            KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,      KC_NO, KC_NO, KC_NO,    KC_NO,   KC_NO, KC_NO,    KC_NO,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        )};
// clang-format on

/*
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, LOWER, RAISE, ADJUST);
}
*/

// SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE
/*
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
  return rotation;
}
*/
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return is_keyboard_master() ? OLED_ROTATION_270 : OLED_ROTATION_180;
}

void keyboard_post_init_user(void) {
    wait_ms(2000);
    oled_init(OLED_ROTATION_0);
}

// When you add source files to SRC in rules.mk, you can use functions.
const char* read_layer_state(void);
const char* read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t* record);
const char* read_keylog(void);
const char* read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);
//

void render_oled_wpm(uint8_t wpm) {
    static const uint16_t UPDATE_MILLIS = 50;
    static uint32_t update_timeout = 0;
    if (timer_expired32(timer_read32(), update_timeout)) {
        // oled_advance_char();
        // oled_advance_char();
        // oled_advanced_page(false);
        oled_set_cursor(0, 5);
        oled_write(wpm > 0 ? "WPM  " : "WPM  ", /*invert=*/false);
        if (wpm > 0) {
            // oled_advance_char();
            // oled_advance_char();
            oled_write(get_u8_str(wpm, ' '), /*invert=*/false);
        } else {
            oled_write(get_u8_str(wpm, ' '), /*invert=*/false);
            // oled_advance_page(/*clearPageRemainder=*/true);
        }
        update_timeout = timer_read32() + UPDATE_MILLIS;
    }
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // If you want to change the display of OLED, you need to change here
        oled_write_ln(read_layer_state(), false);
        // oled_write_ln(read_keylog(), false);
        oled_set_cursor(0, 3);

        oled_write_ln(read_keylogs(), false);
        render_oled_wpm(get_current_wpm());
        // oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
        // oled_write_ln(read_host_led_state(), false);
        // oled_write_ln(read_timelog(), false);

    } else {
        // oled_write_ln(read_layer_state(), false);
        oled_write(read_logo(), false);
        // render_oled_wpm(get_current_wpm());
    }
    return false;
}

#endif  // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (record->event.pressed) {
#ifdef OLED_ENABLE
        set_keylog(keycode, record);
#endif
        // set_timelog();
    }
    return true;
}
