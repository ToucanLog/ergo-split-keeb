#pragma once

#include "quantum.h"




#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06,        R07, R08, R09, R10, R11, R12, R13, \
    L14, L15, L16, L17, L18, L19, L20,        R21, R22, R23, R24, R25, R26, R27, \
    L28, L29, L30, L31, L32, L33, L34,        R35, R36, R37, R38, R39, R40, R41, \
    L42, L43, L44, L45, L46, L47, L48,        R49, R50, R51, R52, R53, R54, R55, \
    L56, L57, L58, L59, L60, L61, L62,        R63, R64, R65, R66, R67, R68, R69, \
                        L70, L71, L72,        R75, R74, R73,  \
                        L76, L77, L78,        R79, R80, R81   \
) { \
    { L06,   L05,   L04,   L03,   L02,   L01,   L00,    KC_NO,  KC_NO,  KC_NO }, \
    { L20,   L19,   L18,   L17,   L16,   L15,   L14,    KC_NO,  KC_NO,  KC_NO }, \
    { L34,   L33,   L32,   L31,   L30,   L29,   L28,    KC_NO,  KC_NO,  KC_NO }, \
    { L48,   L47,   L46,   L45,   L44,   L43,   L42,    KC_NO,  KC_NO,  KC_NO }, \
    { L62,   L61,   L60,   L59,   L58,   L57,   L56,    KC_NO,  KC_NO,  KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  L70,    L71,    L72   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  L78,    L77,    L76   }, \
    { R07,   R08,   R09,   R10,   R11,   R12,   R13,    KC_NO,  KC_NO,  KC_NO  }, \
    { R21,   R22,   R23,   R24,   R25,   R26,   R27,    KC_NO,  KC_NO,  KC_NO  }, \
    { R35,   R36,   R37,   R38,   R39,   R40,   R41,    KC_NO,  KC_NO,  KC_NO  }, \
    { R49,   R50,   R51,   R52,   R53,   R54,   R55,    KC_NO,  KC_NO,  KC_NO  }, \
    { R63,   R64,   R65,   R66,   R67,   R68,   R69,    KC_NO,  KC_NO,  KC_NO  }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  R73,    R74,    R75   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  R81,    R80,    R79   } \
}


