void sub_080379D4(s32);

void sub_0804AFA0(void) {
    u8 *p;
    u8 *q;
    u8 zero;

    sub_080379D4(0xF1);
    p = D_03004830;
    q = p + 0x2A;
    zero = 0;
    *q = 6;
    p[0x2B] = zero;
}
