extern u8 D_030023E0[];

s32 sub_0803A508(u8 *arg0);

void sub_0804D180(u8 *arg0) {
    D_03004830[0x2D] = 1;
    *(u16 *)(arg0 + 0xA6) += 2;
}

void sub_0804D198(u8 *arg0) {
    if ((s8)D_03004830[0x2D] == 0) {
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0804D14C(u8 *arg0) {
    u8 *state = D_03004830;
    if (*(u16 *)(state + 0x2A) == 0x2E0E) {
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0804D1D0(u8 *arg0, u16 arg1, u16 arg2) {
    u16 y;
    *(u16 *)(arg0 + 2) = arg1 + *(u16 *)(D_030023E0 + 2);
    y = arg2 + *(u16 *)(D_030023E0 + 6);
    *(u16 *)(arg0 + 6) = y;
    *(u16 *)(arg0 + 0x2C) = y;
    sub_0803A508(arg0);
}
