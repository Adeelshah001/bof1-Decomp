void sub_080017EC(s32 arg0);
void sub_0800518C(s32 arg0, s32 arg1, s32 arg2);
void sub_08033AF4(s32 arg0);

void func_080092C0(void) {
    u8 *p = D_03004830;
    if ((s8)p[0x2C] < 0) {
        p[0x2B]++;
    }
}

void sub_080092E0(void) {
    sub_0800518C(2, 0x5F8, 0x21DC);
    D_03004830[0x2B]++;
}

void sub_08009314(void) {
    sub_080017EC(0x38);
    sub_0800518C(0x6E, 0xD68, 0x385C);
    sub_08033AF4(4);
    D_03004830[0x2B]++;
}

void sub_08009358(void) {
    u8 *p = D_03004830;
    p[0x2C] = 0x28;
    p[0x2B]++;
}
