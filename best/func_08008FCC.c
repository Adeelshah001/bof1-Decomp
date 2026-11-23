void sub_080063B8(s32, s32);
void sub_080379D4(s32);

void func_08008FCC(void) {
}

void sub_08008EDC(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer < 0) {
        sub_080063B8(0x1198, 0x4B8C);
        *timer = 0x10;
        base[0x2B]++;
    }
}

void sub_08008EA4(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer < 0) {
        sub_080063B8(0x11A8, 0x4B9C);
        *timer = 0x10;
        base[0x2B]++;
    }
}

void sub_08008E64(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer < 0) {
        sub_080379D4(0x1F);
        sub_080063B8(0x1198, 0x4BAC);
        *timer = 0x10;
        base[0x2B]++;
    }
}
