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

#define MIRYOKU_LAYERMAPPING_LOLU MIRYOKU_MAPPING

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

#define MIRYOKU_LAYER_EXTRA \
&kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         &kp P,             &u_to_U_BASE,      U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp F,             U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TAB,           &kp A,             &kp S,             &kp D,             &kp B,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NP,              U_LT(U_LOLU, SPC), &kp LALT,          U_BTN2,            U_BTN1,            U_BTN3,            U_NP, 

#define MIRYOKU_LAYER_BASE \
&kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         &kp P,             &u_to_U_BASE,      U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp F,             U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TAB,           &kp A,             &kp S,             &kp D,             &kp B,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NP,              U_LT(U_LOLU, SPC), &kp LALT,          U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp CRRT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp MINUS,         &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp DLLR,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp ASTRK,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp FSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp GT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp TILDE,         &kp LBKT,          &kp RBKT,          &kp AMPS,          &kp PIPE,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp UNDER,         &kp LPAR,          &kp RPAR,          &kp PRCT,          &kp EQL,           U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp AT,            &kp LBRC,          &kp RBRC,          &kp HASH,          &kp BSLH,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp EXCL,          &kp QMARK,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_LOLU \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp SPC,           U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LS(Q),         &kp LS(W),         &kp LS(E),         &kp LS(R),         &kp U_NA,          U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_NA,              &kp GRAVE,         &kp T,             &kp U_NA,          &kp ESC,           U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
