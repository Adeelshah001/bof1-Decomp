void sub_080073D8(s32);
void sub_08013904(void);
u8 sub_08038458(s32);
void sub_08007588(s32, s32);
void sub_08007494(void);
void sub_080074A4(void);
void sub_080074B4(void);

void sub_08014B58(void) {
    sub_080073D8(0x62);
    D_03004830[0x2B]++;
}

void sub_08014B74(void) {
    u8 *base;
    sub_08013904();
    base = D_03004830;
    base[0x2C] = 0x40;
    base[0x2B]++;
}

void sub_08014B20(void) {
    if (sub_08038458(1) != 0) {
        u8 *base;
        sub_08007588(0x278, -0x4D74);
        base = D_03004830;
        base[0x2C] = 0x3C;
        base[0x2B]++;
    }
}

void sub_08014B94(void) {
    u8 *base;
    sub_08007494();
    sub_080074A4();
    sub_080074B4();
    base = D_03004830;
    base[0x2C] = 0x20;
    base[0x2B]++;
}
