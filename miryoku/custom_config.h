// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom Miryoku configuration for wmccall
// Implements Ctrl/GUI swap via MODSWAP layer toggle

// Define custom layer list with MODSWAP layer added
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,    "Base") \
MIRYOKU_X(EXTRA,   "Extra") \
MIRYOKU_X(TAP,     "Tap") \
MIRYOKU_X(BUTTON,  "Button") \
MIRYOKU_X(NAV,     "Nav") \
MIRYOKU_X(MOUSE,   "Mouse") \
MIRYOKU_X(MEDIA,   "Media") \
MIRYOKU_X(NUM,     "Num") \
MIRYOKU_X(SYM,     "Sym") \
MIRYOKU_X(FUN,     "Fun") \
MIRYOKU_X(MODSWAP, "ModSwap")

// Define layer IDs
#define U_BASE    0
#define U_EXTRA   1
#define U_TAP     2
#define U_BUTTON  3
#define U_NAV     4
#define U_MOUSE   5
#define U_MEDIA   6
#define U_NUM     7
#define U_SYM     8
#define U_FUN     9
#define U_MODSWAP 10

// Custom SYM layer with toggle for MODSWAP
// Based on MIRYOKU_ALTERNATIVES_SYM from miryoku_layer_alternatives.h
// but with &tog U_MODSWAP on thumb position 7 (DEL key position)
#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              &tog U_MODSWAP,    U_NP,              U_NP

// MODSWAP layer: Transparent overlay that swaps Ctrl <-> GUI on home row
// When toggled on, all keys pass through except home row modifiers are swapped
#define MIRYOKU_LAYER_MODSWAP \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            \
U_MT(LCTRL, A),    U_MT(LALT, S),     U_MT(LGUI, D),     U_MT(LSHFT, F),    &trans,            &trans,            U_MT(LSHFT, J),    U_MT(LGUI, K),     U_MT(LALT, L),     U_MT(LCTRL, SQT),  \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            \
U_NP,              U_NP,              &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            U_NP,              U_NP

// Define layer mapping for MODSWAP (required for new layers per documentation)
#define MIRYOKU_LAYERMAPPING_MODSWAP MIRYOKU_MAPPING
