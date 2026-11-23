extern u8 D_030023DC[];
extern u16 D_03001670;
extern u16 D_03001644;

void sub_08021A28(s32, s32);
void sub_0800518C(s16, s16, s16);

void sub_08021714(void) {
    u8 *state = D_03004830;
    s8 timer = state[0x2C];

    if (timer < 0) {
        sub_08021A28(1, 0x7C);
        state[0x2B]++;
    }
}

void sub_08021744(void) {
    u8 *state = D_03004830;
    s8 timer = state[0x2C];

    if (timer < 0) {
        u8 zero = 0;
        state[0x2A] = 7;
        state[0x2B] = zero;
    }
}

void sub_080216C4(void) {
    if (D_030023DC[0] != 1) {
        u8 *state;
        D_03001670 = 0x100;
        D_03001644 = 0;
        D_030023DC[0] = 0;
        state = D_03004830;
        state[0x3F] = 0;
        state[0x40] = 0;
        sub_08021A28(1, 0x7A);
        state[0x2B]++;
    }
}

void sub_0802176C(void) {
    sub_0800518C(0xBC, 0x888, -0x174);
    D_03004830[0x2B]++;
}
