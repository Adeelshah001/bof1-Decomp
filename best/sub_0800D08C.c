extern u8 D_03002AB0[];
extern u16 D_03004114;

void sub_0800D08C(void) {
    u8 *base = D_03002AB0;
    s32 zero = 0;
    *(u32 *)(base + 0x94) = 0x8167;
    base[0xB8] |= 4;
    D_03004830[0x2A] = 0x0F;
    D_03004830[0x2B] = zero;
    D_03004114 = zero;
}
