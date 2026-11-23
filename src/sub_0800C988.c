extern u8 D_03002AB0[];
extern u16 D_03004114;

extern s32 sub_08001770(s32);
extern s32 sub_08005090(s32, s32);
extern void sub_0800CA78(void);
extern void sub_0800C9D4(void);
extern void sub_0800CAD8(void);
extern void sub_08005218(s32, s32, s32);
extern void sub_0800C684(void);
extern void sub_0800D08C(void);

void sub_0800C988(void) {
    if (((sub_08001770(0x49) << 24) == 0) || (D_03002AB0[0x4C] == 0)) {
        D_03004114 = 0;
        return;
    }
    if ((sub_08005090(0x1AF8, 0x51FC) << 24) != 0) {
        sub_0800C9D4();
    } else {
        sub_0800CA78();
    }
}

void sub_0800CD50(void) {
    if (((sub_08001770(0x49) << 24) == 0) || (D_03002AB0[0x4C] == 0)) {
        D_03004114 = 0;
        return;
    }
    if ((sub_08005090(0x1E98, 0x521C) << 24) != 0) {
        sub_0800CAD8();
    } else {
        sub_08005218(0xAD, 0x1AF8, 0x51FC);
    }
}

void sub_0800CDAC(void) {
    if (((sub_08001770(0x49) << 24) == 0) || (D_03002AB0[0x4C] == 0)) {
        D_03004114 = 0;
        return;
    }
    if ((sub_08005090(0x1988, 0x56BC) << 24) != 0) {
        D_03004114 = 0;
        return;
    }
    sub_08005218(0xAD, 0x1AF8, 0x51FC);
}

void sub_0800CF8C(void) {
    if (((sub_08005090(0x1AF8, 0x51DC) << 24) != 0) || (D_03002AB0[0x61] != 0) || ((sub_08001770(0x49) << 24) != 0)) {
        D_03004114 = 0;
        return;
    }
    if ((sub_08001770(0x4B) << 24) != 0) {
        sub_0800C684();
    } else {
        sub_0800D08C();
    }
}
