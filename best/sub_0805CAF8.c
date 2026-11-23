extern u8 D_030045B0[];
extern u32 D_03004760[];

s32 sub_080A07AC(s32, s32);

void sub_0805CAF8(void) {
    u8 *p = (u8 *)D_03004760[3];
    u16 val = p[9] | (p[10] << 8);
    *(u16 *)(D_030045B0 + 0x34) = sub_080A07AC(D_030045B0[0x36] * val, 10);
}
