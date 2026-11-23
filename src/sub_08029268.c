typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct_030023E0;

extern u8 D_030023E0[];
u8 sub_08037754(u16);
s32 sub_080377A8(s32, u16);

s32 sub_08029268(s32 arg0, u16 *arg1, u8 *arg2) {
    s32 ret = arg0;

    *arg2 = 1;
    if (sub_08037754(((Struct_030023E0 *)D_030023E0)->unkA4) != 0xFF) {
        *arg1 <<= 1;
        ret = sub_080377A8(ret, *arg1);
        *arg2 = 2;
    }
    return ret;
}
