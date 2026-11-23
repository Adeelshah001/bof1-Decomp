extern u8 D_03003F98;

void sub_08034F80(u8 *arg0, u8 *arg1) {
    u8 val = *arg1;
    *(u32 *)(arg0 + 0x88) += 1;
    D_03003F98 |= val;
}

void sub_08034FCC(u8 *arg0) {
    u8 *p = arg0 + 0x4D;
    u8 zero = 0;
    *p = 10;
    arg0[0x50] = zero;
    *(u32 *)(arg0 + 0x88) += 2;
}

void sub_08034FEC(u8 *arg0) {
    u8 *p = arg0 + 0x4C;
    u8 zero = 0;
    *p = 8;
    arg0[0xB8] = zero;
    *(u32 *)(p + 0x3C) += 2;
}

void sub_08035008(u8 *arg0) {
    if (((s8 *)D_03004830)[0x2D] == 0xB) {
        *(u32 *)(arg0 + 0x88) += 3;
    }
    *(u32 *)(arg0 + 0x88) += 2;
}
