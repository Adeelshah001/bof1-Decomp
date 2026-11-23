extern u8 D_03004F30[];

void sub_0805CFF0(s32, u16, s32);

void sub_0805DB2C(s32 arg0, u16 arg1, s32 arg2) {
    D_03004F30[8] = 0;
    sub_0805CFF0(arg0, arg1, arg2);
}

void sub_0805DB10(s32 arg0, u16 arg1, s32 arg2) {
    D_03004F30[8] = 1;
    sub_0805CFF0(arg0, arg1, arg2);
}
