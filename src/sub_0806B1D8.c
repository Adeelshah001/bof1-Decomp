extern u8 D_03004620[];

s32 sub_0806B1B0(void) {
    s32 state = 0xC;
    u8 *p = D_03004620;
    s32 zero = 0;
    p[3] = state;
    p[7] = zero;
    return 0;
}

s32 sub_0806B1C4(void) {
    u8 *p = D_03004620;
    p[7] = 0;
    p[3] = 8;
    return 0;
}

s32 sub_0806B1D8(void) {
    u8 *p = D_03004620;
    p[7] = 0;
    p[3] = 10;
    return 0;
}

s32 sub_0806B07C(s32 arg0);

s32 sub_0806B200(void) {
    return sub_0806B07C(0x22);
}
