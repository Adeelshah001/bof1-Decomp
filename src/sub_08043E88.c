/* identical to sub_08043E40 (matched), with its names changed by decompdecomp */
extern u8 D_03004410[];
extern u8 D_080FBA5A[];
extern u8 D_0202DBD0[];

u8 sub_08043E88(void) {
    s32 (**table)(void) = (s32 (**)(void))(D_080FBA5A + 0x7A);
    return table[D_03004410[0xE] >> 1]();
}

void sub_08043D54(void) {
    u8 *base = D_0202DBD0;
    u8 *p = base + 0x2A6;
    u8 zero = 0;
    *p = 1;
    base[0x2A7] = 1;
    base[0x2A8] = zero;
    base[0x2A9] = 1;
}
