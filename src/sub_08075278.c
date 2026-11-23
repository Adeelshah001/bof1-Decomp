extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern const u8 D_08151318[];
extern const u16 D_0815151C[];

u8 sub_08075428(s32);
u8 sub_080369F4(void *, u16, u16, void *);

u8 sub_0807514C(void)
{
    u32 val;
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
    u16 x = arg0[1] + D_0815151C[arg1];
    u16 y = arg0[3] + D_0815151C[arg1 + 1];
    return sub_080369F4(D_030023E0, x, y, &sp0);
}
