#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

/* Define layer names */
enum userspace_layers {
    _QWERTY  = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
    _GAMER,
    _FN,
};

// Define all of
enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
    FN,
    EMAIL,
    NEW_SAFE_RANGE,  // use "NEW_SAFE_RANGE" for keymap specific codes
    NETWORK1,
    WORKPW1,
    PHXPW,
    CAPA,
    TSKMGR,
    KC_SECRET_1,
    KC_SECRET_2,
    KC_SECRET_3,
    KC_SECRET_4,
    KC_SECRET_5,
};
