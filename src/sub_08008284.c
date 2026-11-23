void sub_080076C4(s32);

void sub_08008284(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer == 0) {
        sub_080076C4(0x21D4);
        *timer = 8;
        base[0x2B]++;
    }
}
