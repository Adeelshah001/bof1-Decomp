s32 sub_08037ED4(void *, u16, u16);

void sub_080380F4(u8 *arg0, u8 *arg1, u16 arg2, u16 arg3) {
    u8 val = sub_08037ED4(arg0, *(u16 *)(arg1 + 2) - arg2, *(u16 *)(arg1 + 6) - arg3);
    arg0[0x61] = val;
}

extern u16 D_0300414C;
u16 sub_080A07AC(u16, u8);
u16 sub_080A0844(u16, u8);

u8 sub_0803798C(u16 arg0, u8 arg1) {
    u16 var_r6;
    if (arg1 != 0) {
        var_r6 = sub_080A07AC(arg0, arg1);
        D_0300414C = sub_080A0844(arg0, arg1);
    } else {
        var_r6 = 0xFFFF;
        D_0300414C = arg0;
    }
    return var_r6;
}

extern s32 D_03004880;
void sub_08037664(u32, s32);

void sub_08037848(u16 arg0) {
    sub_08037664((arg0 & 0xFF) << 6, D_03004880);
}

extern u8 D_030040E4;
extern u8 D_03002AB0[];
extern u8 D_030045B0[];

void sub_08037800(u8 *arg0, s32 *arg1) {
    u8 *p;
    D_030040E4 = 1;
    *(u16 *)(arg0 + 0x3C) = 8;
    if (arg0[0x4C] != 0xFF) {
        arg0[0x4C] = 1;
    }
    p = D_03002AB0;
    arg1[0] = *(u16 *)(p + 2);
    arg1[1] = *(u16 *)(p + 6);
    p = D_030045B0;
    *(u16 *)(p + 0x12) = 0x100;
    *(u16 *)(p + 0x18) = 0x100;
    *(u16 *)(p + 0x14) = 0;
    *(u16 *)(p + 0x16) = 0;
    p[0x25] = 0;
}
