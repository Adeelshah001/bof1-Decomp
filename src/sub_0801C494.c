extern s32 sub_08019520(s32 arg0, s32 arg1);
extern u8 D_03002AB0[];
extern u8 D_03003620[];
extern u8 D_03004830[];

void sub_0801C494(void) {
    u8 *base;
    s32 res1;
    s32 res2;
    u32 *ptr;
    s32 offset;
    base = D_03003620;
    res1 = sub_08019520((s32)base, (s32)base - 0x100);
    res2 = sub_08019520((s32)base + 0x80, (s32)base - 0x180);
    if ((res2 << 24) != 0) {
        offset = 0xFD << 2;
        ptr = (u32 *)(D_03002AB0 + offset);
        *ptr += 1;
        D_03004830[0x2B]++;
    }
}
