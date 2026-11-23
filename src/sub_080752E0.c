extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern const u8 D_08151318[];
extern const u16 D_0815151C[];

u8 sub_08075428(u8);
u8 sub_080369F4(void *, u16, u16, void *);
u8 sub_08001770(s32);
u16 sub_080753F0(s32);

u8 sub_0807514C(void)
{
    u8 val;
    val = ++D_03002AB0[0xBC];
    if (val > 0x41) {
        val = 0x42;
        D_03002AB0[0xBC] = val;
    }
    val = ((u8)(val - 1) >> 3) & 7;
    val = *(const u8 *)(val + (u32)D_08151318);
    return sub_08075428(val);
}

u8 sub_08075278(u16 *arg0, u8 arg1)
{
    u16 sp0;
    return sub_080369F4(D_030023E0, D_0815151C[arg1] + arg0[1], D_0815151C[arg1 + 1] + arg0[3], &sp0);
}

s32 sub_080752BC(s32 arg0)
{
    s32 result;
    if (sub_08001770(0x6C) == 0) {
        result = 0;
    } else {
        result = sub_080753F0(arg0);
    }
    return result;
}

s32 sub_080752E0(void)
{
    s32 var_r4 = 0x5C;
    if (sub_08001770(6) == 0) {
        var_r4 = 0x3D;
    }
    D_03002AB0[0xBC] = 0;
    return (var_r4 << 8) | 1;
}
