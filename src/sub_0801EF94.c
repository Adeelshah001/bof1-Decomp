extern void sub_08004EA0(s32);
extern void sub_080017EC(s32);
extern void sub_0801270C(void);

void sub_0801EFB8(void) {
    D_03004830[0x2D] = 0x10;
    D_03004830[0x2B] |= -0x80;
}

void sub_0801EF94(void) {
    sub_08004EA0(0x85B4);
    D_03004830[0x2B] = 0;
    D_03004830[0x2A] = 0;
}

void sub_0801EF64(void) {
    s32 t = D_03004830[0x2C] - 1;
    D_03004830[0x2C] = t;
    if (t == 0) {
        sub_080017EC(0xC9);
        sub_08004EA0(0x85B3);
        sub_0801270C();
    }
}
