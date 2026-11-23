extern u8 D_0300169C;
extern u32 D_03004760[];
extern u8 D_08100678[];

struct Unk030045B0 {
    u8 pad00[0x34];
    u16 unk34;
    u8 unk36;
};
extern struct Unk030045B0 D_030045B0;

s32 sub_080A07AC(s32, s32);
u8 *sub_0805C574(u16);

u16 sub_0805CB2C(void) {
    if (D_0300169C == 0) {
        u8 *p = (u8 *)D_03004760[0xC / 4];
        D_030045B0.unk34 = sub_080A07AC((p[9] | (p[0xA] << 8)) * D_030045B0.unk36, 10);
    }
    return D_030045B0.unk34;
}

s32 sub_0805CBF8(u16 arg0, s32 arg1) {
    s32 ret;
    if (D_0300169C == 0) {
        u8 val = sub_0805C574(arg0)[0xC];
        ret = 1;
        if ((val & D_08100678[arg1]) != 0) {
            ret = 0;
        }
    } else {
        ret = 0;
    }
    return ret;
}

u16 sub_0805CC60(u16 arg0) {
    return sub_080A07AC(arg0 * D_030045B0.unk36, 10);
}
