void sub_0801B0D4(void) {
    u8 *p = D_03003420;
    u32 v = 0x388;
    *(u16 *)(p + 2) = v;
    v = 0x85C;
    *(u16 *)(p + 6) = v;
    D_03004830[0x2B]++;
}

void sub_08019DA0(void);

void sub_0801B0F8(void) {
    u8 *p = D_03003420;
    u32 v = 0x438;
    *(u16 *)(p + 2) = v;
    v = 0x6DC;
    *(u16 *)(p + 6) = v;
    sub_08019DA0();
}

void sub_0802FD60(s32);

void sub_0801B034(void) {
    u8 *base;
    sub_0802FD60(0x2A);
    base = D_03004830;
    base[0x2C] = 0x6C;
    base[0x2B]++;
}
