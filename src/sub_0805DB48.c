extern u8 D_03004F30[];

void sub_0805B328(s32, s32, s32, s32, s32, s32);
void sub_0805CFF0(s32, u16);

void sub_0805DB48(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    sub_0805B328(arg0, arg1, arg2, arg3, arg4, arg5);
}

void sub_0805DB60(u8 *arg0, u8 arg1) {
    u16 *ptr = (u16 *)(arg0 + 0x106);
    s32 val = arg1 + *ptr;
    if (val > 0x1FF) {
        val = 0x1FF;
    }
    *ptr = val;
}

void sub_0805DB2C(s32 arg0, u16 arg1) {
    D_03004F30[8] = 0;
    sub_0805CFF0(arg0, arg1);
}

void sub_0805DB10(s32 arg0, u16 arg1) {
    D_03004F30[8] = 1;
    sub_0805CFF0(arg0, arg1);
}
