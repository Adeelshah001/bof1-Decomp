extern u16 D_030045B0[];
extern u8 D_03002AB0[];

void sub_080017EC(s32);

void sub_0805BF00(u8 arg0, u16 *arg1, u16 *arg2) {
    D_030045B0[0x38 / 2] = 0x8249;
    *arg1 = 0xFFFF;
    *arg2 = 0x248;
}

void sub_0805BF24(u8 arg0, u16 *arg1, u16 *arg2) {
    if (!(arg0 & 0x80)) {
        sub_080017EC(0x71);
        D_03004830[0x2D] = 1;
        D_03002AB0[0xB8] |= 4;
    }
    *arg1 = 0x2AB;
    *arg2 = 0x2AF;
}

void sub_0805BEA0(u8 arg0, u16 *arg1, u16 *arg2) {
    u8 flag = arg0 & 0x80;
    if (flag == 0) {
        D_03004830[0x3F] = 0x10;
        D_03004830[0x40] = flag;
        D_03002AB0[0xB8] |= 4;
    }
    D_03004830[0x42]++;
    *arg1 = 0xFFFF;
    *arg2 = 0x28F;
}

void sub_0805BF70(u8 arg0, u16 *arg1, u16 *arg2) {
    u8 flag = arg0 & 0x80;
    if (flag == 0) {
        D_03002AB0[0xB8] |= 4;
        D_03004830[0x2A] = 0x14;
        D_03004830[0x2B] = flag;
    }
    *arg1 = 0xFFFF;
    *arg2 = 0x2E8;
}
