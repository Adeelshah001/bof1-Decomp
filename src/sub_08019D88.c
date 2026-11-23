extern u8 D_03004830[];

void sub_08001F80(s32, s32, s32);

void sub_08019D3C(void) {
    u8 *p = D_03004830;
    sub_08001F80(0x0A, 0, 0);
    p[0x2B]++;
}

void sub_08019DA0(void) {
    u8 *p = D_03004830;
    p[0x2A] = 0;
    p[0x2B] = 0;
    p[0x2C] = 0;
    p[0x2D] = 0;
}

void sub_08019D88(void) {
    u8 *p = D_03004830;
    p[0x31] = 5;
    sub_08019DA0();
}

void sub_080379D4(s32);
void sub_0800312C(s32, s32);

void sub_08019CD0(void) {
    u8 *p = D_03004830;
    u8 v = --p[0x2C];
    if (v == 0) {
        sub_0800312C(0x10, 0xC);
        sub_080379D4(0x17);
        p[0x2C] = 0x28;
        p[0x2B]++;
    }
}
