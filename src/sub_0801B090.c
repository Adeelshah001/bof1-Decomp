void sub_0801B0D4(void) {
    u8 *p = D_03003420;
    *(u16 *)(p + 2) = 0x388;
    *(u16 *)(p + 6) = 0x85C;
    D_03004830[0x2B]++;
}

void sub_08019DA0(void);

void sub_0801B0F8(void) {
    u8 *p = D_03003420;
    *(u16 *)(p + 2) = 0x438;
    *(u16 *)(p + 6) = 0x6DC;
    sub_08019DA0();
}

void sub_0801B090(void) {
    u8 *state = D_03004830;
    u8 *p;
    state[0x2D] = 1;
    p = D_03003420;
    *(u32 *)(p + 0x44) = (*(u32 *)(p + 0x44) & 0xFF000000) | 0x38800;
    *(u32 *)(p + 0x48) = (*(u32 *)(p + 0x48) & 0xFF000000) | 0x85C00;
    state[0x2B]++;
}

void sub_0802FD60(s32);

void sub_0801B034(void) {
    u8 *base;
    sub_0802FD60(0x2A);
    base = D_03004830;
    base[0x2C] = 0x6C;
    base[0x2B]++;
}
