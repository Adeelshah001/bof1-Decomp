extern u8 D_03004880[];

u8 sub_0802AE90(void *arg0, s32 arg1);
s32 sub_0802AF8C(s32 arg0, void *arg1);

u8 sub_0802AE10(void *arg0, s32 unused, u8 arg2) {
    u8 var_r6 = 0;
    sub_0802AF8C((s32)*(u32 *)D_03004880, arg0);
    if (*(u8 *)((u8 *)arg0 + 0x49) == 0 && arg2 == 0) {
        var_r6 = (u8)sub_0802AE90(arg0, 0);
    }
    return var_r6;
}
