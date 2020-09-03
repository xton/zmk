
#pragma once

#define USAGE_KEYPAD 0x07
#define USAGE_CONSUMER 0x0C

#define A 0x04
#define B 0x05
#define C 0x06
#define D 0x07
#define E 0x08
#define F 0x09
#define G 0x0A
#define H 0x0B
#define I 0x0C
#define J 0x0D
#define K 0x0E
#define L 0x0F
#define M 0x10
#define N 0x11
#define O 0x12
#define P 0x13
#define Q 0x14
#define R 0x15
#define S 0x16
#define T 0x17
#define U 0x18
#define V 0x19
#define W 0x1A
#define X 0x1B
#define Y 0x1C
#define Z 0x1D
#define NUM_1 0x1E
#define NUM_2 0x1F
#define NUM_3 0x20
#define NUM_4 0x21
#define NUM_5 0x22
#define NUM_6 0x23
#define NUM_7 0x24
#define NUM_8 0x25
#define NUM_9 0x26
#define NUM_0 0x27
#define RET 0x28
#define ESC 0x29
#define BKSP 0x2A
#define TAB 0x2B
#define SPC 0x2C
#define MINUS 0x2D
#define EQL 0x2E
#define LBKT 0x2F
#define RBKT 0x30
#define BSLH 0x31
#define TILD 0x32
#define SCLN 0x33
#define QUOT 0x34
#define GRAV 0x35
#define CMMA 0x36
#define DOT  0x37
#define FSLH 0x38
#define CLCK 0x39
#define F1 0x3A
#define F2 0x3B
#define F3 0x3C
#define F4 0x3D
#define F5 0x3E
#define F6 0x3F
#define F7 0x40
#define F8 0x41
#define F9 0x42
#define F10 0x43
#define F11 0x44
#define F12 0x45

#define PRSC 0x46
#define SCLK 0x47
#define PAUS 0x48
#define INS 0x49
#define HOME 0x4A
#define PGUP 0x4B
#define DEL  0x4C
#define END  0x4D
#define PGDN 0x4E
#define RARW 0x4F
#define LARW 0x50
#define DARW 0x51
#define UARW 0x52

#define KDIV 0x54
#define KMLT 0x55
#define KMIN 0x56
#define KPLS 0x57

#define GUI 0x65

#define UNDO 0x7A
#define CUT 0x7B
#define COPY 0x7C
#define PSTE 0x7D

#define CURU 0xB4

#define LPRN 0xB6
#define RPRN 0xB7
#define LCUR 0xB8
#define RCUR 0xB9

#define CRRT 0xC3
#define PRCT 0xC4
#define LABT 0xC5
#define RABT 0xC6
#define AMPS 0xC7
#define PIPE 0xC9
#define COLN 0xCB
#define HASH 0xCC
#define KSPC 0xCD
#define ATSN 0xCE
#define BANG 0xCF

// #define LCTL 0xE0
// #define LSFT 0xE1
// #define LALT 0xE2
// #define LGUI 0xE3
// #define RCTL 0xE4
// #define RSFT 0xE5
// #define RALT 0xE6
// #define RGUI 0xE7

#define VOLU 0x80
#define VOLD 0x81

/* The following are select consumer page usages */

#define M_NEXT 0xB5
#define M_PREV 0xB6
#define M_STOP 0xB7
#define M_EJCT 0xB8
#define M_PLAY 0xCD
#define M_MUTE 0xE2
#define M_VOLU 0xE9
#define M_VOLD 0xEA

#define LCTL (1 << 0x10)
#define LSFT (1 << 0x11)
#define LALT (1 << 0x12)
#define LGUI (1 << 0x13)
#define RCTL (1 << 0x14)
#define RSFT (1 << 0x15)
#define RALT (1 << 0x16)
#define RGUI (1 << 0x17)