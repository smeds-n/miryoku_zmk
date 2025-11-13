// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp V,             &kp R,             &kp D,             &kp B,             &kp Q,             &kp COMMA,             &kp P,             &kp O,             &kp U,             &kp Y,             \
U_MT(LGUI, S),     U_MT(LALT, N),     U_MT(LCTRL, T),    U_MT(LSHFT, H),    &kp K,             &kp G,              U_MT(LSHFT, C),    U_MT(LCTRL, A),    U_MT(LALT, E),     U_MT(LGUI, I),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp M,             &kp L,             &kp J,             U_LT(U_FUN, W),             &kp F,          &kp RA(Q),         U_MT(RALT, RA(P)),   U_LT(U_BUTTON, DOT),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),    U_LT(U_SYM, BSPC),  &u_lt U_NUM N0, U_LT(U_NUM, RET),  U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,      &kp APOS,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL, &kp QUESTION,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,            U_NP


#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,      &kp SEMI,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,     &kp SLASH,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP
