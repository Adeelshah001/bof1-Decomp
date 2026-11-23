extern u8 D_03002AB0[];

void sub_080379D4(s32);

void sub_0804AFC0(void) {
    D_03004830[0x2D] = 0x80;
}

void sub_0804AFD0(void) {
    D_03004830[0x2A] = 8;
    D_03004830[0x2B] = 1;
    sub_080379D4(0xF);
}

void sub_0804AFA0(void) {
    u8 *p;
    u8 zero;

    sub_080379D4(0xF1);
    p = &D_03004830[0x2A];
    zero = 0;
    *p = 6;
    D_03004830[0x2B] = zero;
}

void sub_0804AF80(void) {
    D_03002AB0[0xB8] &= 0xFB;
}
