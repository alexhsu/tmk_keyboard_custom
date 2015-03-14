#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     * ,-----------------------------------------------------------.
     * |Esc| 1 | 2 |  3|  4|  5|  6|  7|  8|  9|  0| - | = | \ | ` |
     * |-----------------------------------------------------------|
     * | Tab | q | w | e | r | t | y | u | i | o | p | [ | ] |Del  |
     * |-----------------------------------------------------------|
     * | Ctl  | a | s | d | f | g | h | j | k | l | ; | ' |   Ent  |
     * |-----------------------------------------------------------|
     * | LSFT   | z | x | c | v | b | n | m | , | . | / |    RSFT  |
     * |-----------------------------------------------------------|
     * | FN | Cmd| Alt |       Space           | Alt| Cmd| Ctl| Fn |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ALEX(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL, BSLS, GRV, \
        TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,  RBRC,   BSPC, \
        LCTL,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,          ENT, \
        LSFT,  Z, X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,                RSFT, \
        FN0,LALT,LGUI,          SPC,                           RGUI, RALT,RCTL, FN0),
    /* 1: Fn layer
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |
     * |-----------------------------------------------------------|
     * |     |   | Up|   |   |   |   |   |   |   |   |   |   |Del  |
     * |-----------------------------------------------------------|
     * |Caps  |Lef|Dow|Rig|   |   |Lef|Dow| Up|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |PgU|PgD|   |          
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ALEX(
        TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, INS, \
        TRNS,FN2, UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, DEL,  \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,LEFT,DOWN,UP,RGHT,TRNS, TRNS,      TRNS, \
        TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,PGDN,TRNS,         TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};

#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif