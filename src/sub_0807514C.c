extern u8 D_03002AB0[];
extern const u8 D_08151318[];

u8 sub_08075428(s32);

u8 sub_0807514C(void)
{
    u32 val;
    val = ++D_03002AB0[0xBC];
    if (val > 0x41) {
        val = 0x42;
        D_03002AB0[0xBC] = val;
    }
    val = (u8)(val - 1) >> 3;
    val &= 7;
    val = *(const u8 *)(val + (u32)D_08151318);
    return sub_08075428(val);
}
