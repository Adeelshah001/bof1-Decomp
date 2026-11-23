void sub_08034D94(u8 *arg0) {
    u8 *p = arg0 + 0x4D;
    u8 zero = 0;
    *p = 6;
    arg0[0x50] = zero;
    *(u32 *)(arg0 + 0x88) += 2;
}
