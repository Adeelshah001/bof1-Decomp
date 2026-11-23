void sub_08004EA0(s32);
void sub_0805561C(s32);
void sub_080379D4(s32);

void sub_0800DA54(void) {
    u8 *base;

    sub_0805561C(0x15);
    base = D_03004830;
    base[0x2C] = 9;
    base[0x2B]++;
}

void sub_0800DA78(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;

    if (--*ptr == 0) {
        ptr[-1]++;
    }
}

void sub_0800DA98(void) {
    u8 *base;

    sub_08004EA0(0x815D);
    base = D_03004830;
    base[0x2C] = 9;
    base[0x2B]++;
}

void sub_0800DAC0(void) {
    u8 *base;

    sub_080379D4(7);
    base = D_03004830;
    base[0x2C] = 8;
    base[0x2B]++;
}
