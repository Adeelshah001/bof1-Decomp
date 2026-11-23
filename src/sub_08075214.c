extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern const u8 D_08151318[];
extern const u8 D_0815132A[];
u8 sub_08075428(u8);
u16 sub_08074ECC(s32);
u8 sub_08075278(void *, u8);

u8 sub_0807514C(void)
{
    u8 *state = D_03002AB0;
    u8 *counter = state + 0xBC;
    u32 count;
    u32 index;
    count = (*counter = *counter + 1);
    if (count > 0x41) {
        count = 0x42;
        *counter = count;
    }
    index = ((u8)(count - 1) >> 3) & 7;
    count = *(const u8 *)(index + (u32)D_08151318);
    return sub_08075428(count);
}

u16 sub_08075214(s32 arg0)
{
    u8 *state = D_03002AB0;
    s32 count = state[0xC0];
    if (count != 0) {
        if (count == 1)
            return 0;
        state[0xC0]--;
        return 0;
    }
    return sub_08074ECC(arg0);
}
