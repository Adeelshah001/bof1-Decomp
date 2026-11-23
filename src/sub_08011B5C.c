void sub_08004EA0(s32);
void sub_08024008(s32);
void sub_080017EC(s32);

void sub_08011B5C(void) {
    D_03004830[0x2D] |= 1;
}

void sub_08011B70(void) {
    D_03004830[0x2D] |= 2;
}

void sub_08011B38(void) {
    sub_08004EA0(0x82E2);
    sub_08024008(0x2C);
    D_03004830[0x2B]++;
}

void sub_08011B84(void) {
    u8 *p;
    u8 *q;
    u8 zero;

    sub_080017EC(0x79);
    p = D_03004830;
    q = p + 0x2A;
    zero = 0;
    *q = 0x15;
    p[0x2B] = zero;
}
