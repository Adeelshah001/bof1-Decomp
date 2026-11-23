void sub_080073C8(s32);
void sub_08021A28(s32, s32);
void sub_0800518C(s16, s16, s16);
void sub_0803D3B8(s32);

void sub_080212D8(void)
{
    sub_080073C8(0x21);
    D_03004830[0x2B]++;
}

void sub_080212F4(void)
{
    u8 *state = D_03004830;
    s8 timer = state[0x2C];

    if (timer < 0) {
        sub_08021A28(1, 0x6E);
        state[0x2B]++;
    }
}

void sub_0802129C(void)
{
    u8 *state;
    u8 *timer;
    u8 zero;

    sub_0803D3B8(1);
    sub_0800518C(3, 0x788, -0x3E64);
    state = D_03004830;
    timer = state + 0x2C;
    zero = 0;
    *timer = 0xB4;
    state[0x2D] = zero;
    state[0x2B]++;
}

void sub_08021324(void)
{
    u8 *state = D_03004830;
    s8 timer = state[0x2C];

    if (timer < 0) {
        sub_080073C8(0x21);
        sub_08021A28(1, 0x70);
        state[0x2B]++;
    }
}
