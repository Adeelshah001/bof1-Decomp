void sub_08033AF4(s32);
void sub_08019720(void);
void sub_0800312C(s32, s32);

void sub_0801B66C(void) {
    sub_08033AF4(0x13);
    D_03004830[0x2B]++;
}

void sub_0801B688(void) {
    u8 *p = D_03004830;
    u8 *q = p + 0x40;
    u32 zero = 0;
    p[0x3F] = 0x1F;
    *q = zero;
    p[0x2A] = zero;
    p[0x2B] = zero;
}

void sub_0801B638(void) {
    u8 *base = D_03004830;
    u8 temp = --base[0x2C];
    if (temp == 0) {
        sub_08019720();
        base[0x2D]++;
        base[0x2B] = 9;
    }
}

void sub_0801B614(void) {
    u8 *p;
    sub_0800312C(0x10, 0x1A);
    p = D_03004830;
    p[0x2C] = 0x40;
    p[0x2B]++;
}
