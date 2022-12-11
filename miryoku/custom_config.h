// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_ALPHAS_DVORAK

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(LOLU,   "Lolu")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_LOLU   10

#define MIRYOKU_LAYERMAPPING_LOLU MIRYOKU_MAPPING


#define MIRYOKU_LAYER_EXTRA \
&kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         &kp B,             &u_to_U_BASE,      U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp F,             U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
TAB,               &kp A,             &kp S,             &kp D,             &kp P,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NP,              U_LT(U_LOLU, SPC), &kp LALT,          U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_LOLU \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp T,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LS(Q),         &kp LS(W),         &kp LS(E),         &kp LS(R),         &kp U_NA,          U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_NA,              &kp GRAVE,         &kp SPC,           &kp U_NA,          &kp ESC,           U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
