#include "RhysIsPiecess.h"

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
#ifdef MACROS_ENABLED
        case EMAIL:
            if (record->event.pressed) {
                // when keycode EMAIL is pressed
                SEND_STRING("RhysIsPiecess@gmail.com");
            } else {
                // when keycode EMAIL is released
            }
            break;
        case NETWORK1:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("RMAXHAM");
            } else {
                // when keycode is released
            }
            break;
        case WORKPW1:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("mAXH5678!!");
            } else {
                // when keycode is released
            }
            break;
        case PHXPW:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("PHX3456?15");
            } else {
                // when keycode is released
            }
            break;
        case CAPA:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("CAPA-");
            } else {
                // when keycode is released
            }
            break;
        case TSKMGR:
            if (record->event.pressed) {
                // when keycode is pressed
                register_code(KC_LCTL);
                register_code(KC_LSFT);
                register_code(KC_ESC);
            } else {
                // when keycode is released
                unregister_code(KC_ESC);
                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);
            }
            break;
#endif
    }
    return process_record_keymap(keycode, record);
}
