void sub_0802A478(void *);

void sub_080351E4(u8 *arg0) {
    u8 *p = arg0 + 0xC5;
    u32 zero = 0;
    *p = 2;
    arg0[0xC6] = zero;
    sub_0802A478(arg0);
    *(u32 *)(arg0 + 0x88) += 2;
}
