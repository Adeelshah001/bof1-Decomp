extern void sub_08030AD8(s32 arg0);
extern void sub_080380C0(u32 arg0);
extern u32 sub_08019E04(s32 arg0);
extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern u8 gEntityPool[];

void sub_0801C434(void) {
    u32 result;
    sub_08030AD8(0x84);
    sub_080380C0((u32)gEntityPool);
    sub_080380C0((u32)gEntityPool + 0xE0);
    sub_080380C0((u32)gEntityPool + 0x1C0);
    sub_080380C0((u32)gEntityPool + 0x2A0);
    result = sub_08019E04(2);
    result <<= 0x18;
    if (result == 0) {
        D_03002AB0[0xB8] |= 0x80;
        D_03004830[0x2B]++;
    }
}
