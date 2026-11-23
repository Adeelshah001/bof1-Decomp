void sub_08024008(s32);
void sub_08004EA0(s32);

void sub_080112CC(void) {
    sub_08024008(0x18);
    D_03004830[0x2B]++;
}

void sub_080112E8(void) {
    u8 *p = D_03004830;
    if (p[0x2D] & 1) {
        p[0x2C] = 0x18;
        p[0x2B]++;
    }
}

void sub_08011310(void) {
    u8 *p = D_03004830;
    u8 v = --p[0x2C];
    if (v == 0) {
        sub_08004EA0(0x82BB);
        p[0x2C] = 0x40;
        p[0x2B]++;
    }
}

void sub_08011270(void) {
    sub_08004EA0(0x82B8);
    D_03004830[0x2B]++;
}
