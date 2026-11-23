extern u16 D_030045B0[];

void sub_0805C36C(u8 arg0, u16 *arg1, u16 *arg2) {
    *arg1 = 0xFFFF;
    *arg2 = 0xFFFF;
}

void sub_0805C37C(u8 arg0, u16 *arg1, u16 *arg2) {
    *arg1 = 0xFFFF;
    *arg2 = 0x756;
}

void sub_0805C348(u8 arg0, u16 *arg1, u16 *arg2) {
    D_030045B0[0x38 / 2] = 0x871F;
    *arg1 = 0xFFFF;
    *arg2 = 0x71E;
}

void sub_0805C30C(u8 arg0, u16 *arg1, u16 *arg2) {
    D_030045B0[0x38 / 2] = (arg0 << 8) | 2;
    *arg1 = 0xFFFF;
    *arg2 = 0xFFFF;
}
