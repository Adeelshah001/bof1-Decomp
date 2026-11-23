extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u8 D_03002E1C[];

void sub_08034D78(u8 *arg0) {
    u8 *ptr = D_03004830;
    u8 v;
    ptr[0x42] = ((v = 1 + (ptr[0x42] >> 8)), v | ptr[0x42]);
    *(u32 *)(arg0 + 0x88) += 2;
}

void sub_08034D94(u8 *arg0) {
    u8 *p = arg0;
    u8 zero = 0;
    p[0x4D] = 6;
    p[0x50] = zero;
    *(u32 *)(p + 0x88) += 2;
}

void sub_08034DB4(u8 *arg0) {
    u8 *state = D_03002E1C;
    *(u32 *)(state + 0x88) += 1;
    *(u32 *)(arg0 + 0x88) += 2;
}

void sub_08034DCC(u8 *arg0) {
    u8 *state = D_03002AB0;
    if (*(u16 *)(state + 6) <= 0x91AFU)
        *(u32 *)(arg0 + 0x88) += 2;
    else
        *(u32 *)(arg0 + 0x88) += 3;
}
