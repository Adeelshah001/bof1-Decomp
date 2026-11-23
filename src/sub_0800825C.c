void sub_080076C4(s32);
void sub_080074A4(void);
void sub_0800B5F4(s32);

void sub_0800825C(void) {
    u8 *state;

    sub_080076C4(0x21DC);
    state = D_03004830;
    state[0x2C] = 0x10;
    state[0x2B]++;
}

void sub_08008284(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer == 0) {
        sub_080076C4(0x21D4);
        *timer = 8;
        base[0x2B]++;
    }
}

void sub_0800822C(void) {
    u8 *state = D_03004830;
    s8 timer = state[0x2C];

    if (timer == 0) {
        sub_0800B5F4(0x298);
        state[0x2B]++;
    }
}

void sub_080081F8(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer == 0) {
        sub_080074A4();
        sub_0800B5F4(0x298);
        *timer = 0x10;
        base[0x2B]++;
    }
}
