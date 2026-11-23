void sub_080A0664(s32, s32, u16);
s32 sub_080A06D4(s32, s32, u16);

s32 sub_08004104(s32 arg0, u16 arg1, u16 arg2) {
    u32 addr = 0x0E000000 + arg1;
    sub_080A0664(arg0, addr, arg2);
    return sub_080A06D4(arg0, addr, arg2);
}
