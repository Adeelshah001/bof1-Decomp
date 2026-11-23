extern u8 D_03004F50[];
extern const char D_080A6B64[];
extern const char D_080A6B70[];
void sub_080869CC(u8 *);
u8 *sub_0807C638(u8 *, s32);
void sub_08083484(u8 *);
void sub_08087024(u8 *);
void sub_08087030(u8 *, s32);
void sub_0807B248(u8 *);
void sub_08087040(u8 *);
void sub_08086F6C(u8 *);
void sub_08086E90(u8 *);
void sub_08086ED8(u8 *);
void sub_080352D0(const char *, const char *, s32, ...);

void sub_08086E6C(u8 *arg0) {
    sub_080869CC(arg0);
    sub_0807C638(arg0, 3)[0x3C] = 3;
    arg0[0x55] = 0;
}

void sub_08086E90(u8 *arg0) {
    u8 v = --arg0[0x54];
    if (v != 0) {
        if (!(v & 1)) {
            sub_08087024(arg0);
        } else {
            sub_08087030(arg0, 0xE);
        }
    } else {
        sub_08083484(arg0);
        arg0[0x4D] = 6;
        sub_08087024(arg0);
    }
}

void sub_08086ED8(u8 *arg0) {
    u8 v = (*(u8 **)(arg0 + 0x74))[0x3A];
    if (v != 0) {
        sub_0807B248(arg0);
    } else {
        D_03004F50[0x5D] = v;
        arg0[0x4C] = 2;
        arg0[0x4D] = v;
        sub_0807B248(arg0);
    }
}

void sub_08086F10(u8 *arg0) {
    switch (arg0[0x4D]) {
    case 0:
        sub_08087040(arg0);
        break;
    case 2:
        sub_08086F6C(arg0);
        break;
    case 4:
        sub_08086E90(arg0);
        break;
    case 6:
        sub_08086ED8(arg0);
        break;
    default:
        sub_080352D0(D_080A6B70, D_080A6B64, 0x8D, arg0[0x4D]);
        break;
    }
}
