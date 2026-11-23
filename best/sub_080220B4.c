extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern void sub_0802478C(void);

void sub_080220B4(void) {
    u32 offset;
    u32 *word_2ab88 = (u32 *)(D_03002AB0 + 0x88);
    u32 val;
    if (D_03004830[0x42] & 1) {
        val = *word_2ab88 + 4;
    } else {
        val = *word_2ab88 + 1;
    }
    *word_2ab88 = val;
    offset = 0xB4 << 2;
    *(u32 *)(D_03002AB0 + offset) = val;
    D_03004830[0x40] = D_03004830[0x40] + 1;
    D_03004830[0x41] = 0x20;
    sub_0802478C();
}
