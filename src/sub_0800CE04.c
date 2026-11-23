void sub_0800CE04(void) {
    extern u8 D_03002AB0[];
    extern u8 D_03004114[];
    extern s32 sub_08005090(s32, s32);
    extern void sub_0800CC64(void);
    extern void sub_0800CC90(void);
    
    u8 val;
    s32 result;
    
    val = D_03002AB0[0x4C];
    if (val == 0) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    result = sub_08005090(0x1788, 0x56FC);
    if ((result << 0x18) != 0) {
        sub_0800CC64();
    } else {
        sub_0800CC90();
    }
}
