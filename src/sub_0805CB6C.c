extern u32 D_03004760[];
extern u8 D_0300169C;
extern u8 D_030045B0[];
extern u8 D_08100678[];

u8 *sub_0805C574(u16);

void sub_0805CB6C(u16 arg0) {
    D_03004760[0xC / 4] = (u32)sub_0805C574(arg0);
}

u16 sub_0805CB2C(void) {
    u8 *s;
    if (D_0300169C == 0) {
        u8 *p = (u8 *)D_03004760[0xC / 4];
        s = D_030045B0;
        *(u16 *)(s + 0x34) = (s32)((p[9] | (p[0xA] << 8)) * s[0x36]) / 10;
    }
    return *(u16 *)(D_030045B0 + 0x34);
}

s32 sub_0805CBF8(u16 arg0, s32 arg1) {
    if (D_0300169C == 0 && !(sub_0805C574(arg0)[0xC] & D_08100678[arg1])) {
        return 1;
    }
    return 0;
}

u16 sub_0805CC60(u16 arg0) {
    return (s32)(arg0 * D_030045B0[0x36]) / 10;
}
