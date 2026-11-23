extern u8 D_030034A0[];

void sub_08004EA0(s32);
void sub_0803EE88(void *);

void sub_0801ADF8(void) {
    sub_08004EA0(0x843D);
    D_03004830[0x2B]++;
}

void sub_0801ADCC(void) {
    u8 *dst = D_030034A0;
    u8 *src = dst - 0x80;
    *(u16 *)(dst + 2) = *(u16 *)(src + 2);
    *(u16 *)(dst + 6) = *(u16 *)(src + 6);
    *(u16 *)(dst + 0x2C) = *(u16 *)(src + 6);
    sub_0803EE88(src);
    D_03004830[0x2B]++;
}

void sub_0801ADA4(void) {
    u8 *state;
    sub_08004EA0(0x846F);
    state = D_03004830;
    state[0x2C] = 0x78;
    state[0x2B]++;
}

void sub_0801AF40(void) {
    u8 *p = D_03004830 + 0x2C;
    if (--*p == 0) {
        p[1]++;
        p[-1]++;
    }
}
