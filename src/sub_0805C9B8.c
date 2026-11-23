extern u32 D_0202DBD0[];

s32 sub_0805C47C(void);
s32 sub_0805C9F8(void);
u8 sub_0805CD08(s32 arg0, u32 arg1);

s32 sub_0805C9E0(void) {
    if (sub_0805C9F8() == 0) {
        return sub_0805C47C();
    }
    return 1;
}

s32 sub_0805C9B8(s32 arg0, u32 arg1) {
    if (sub_0805CD08(arg0, arg1) != 0) {
        D_0202DBD0[0x20 / 4] -= arg1;
        return 1;
    }
    return 0;
}
