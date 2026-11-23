extern u8 D_03002AB0[];

void sub_0805C210(u8 arg0, u16 *arg1, u16 *arg2) {
    u8 flag = arg0 & 0x80;
    if (flag == 0) {
        D_03004830[0x2B] = flag;
    } else {
        D_03004830[0x2B] = 3;
    }
    D_03004830[0x2A] = 0xF;
    D_03002AB0[0xB8] |= 4;
    *arg1 = 0x5B1;
    *arg2 = 0x5B2;
}
