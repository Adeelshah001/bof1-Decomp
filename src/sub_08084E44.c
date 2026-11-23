extern u16 D_03004F30[];

s32 sub_08084E44(s32 arg0, s32 arg1) {
    s32 r2 = arg0 & 0xFF;
    s32 r4 = 0;
    s32 r3 = 0x10;
    if (arg1 != 0) {
        r3 = 1;
    }
    while (1) {
        arg1 = D_03004F30[7];
        arg1 &= r3;
        if (arg1 != 0) {
            if (--r2 < 0) {
                break;
            }
        }
        r4++;
        r3 <<= 1;
    }
    return r4;
}
