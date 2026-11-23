extern u16 D_03004114;
void sub_0800764C(s32);
void sub_08024008(s32);
void sub_080379D4(s32);

void sub_08010D90(void)
{
    sub_0800764C(0x12);
    D_03004830[0x2B]++;
}

void sub_08010DB8(void)
{
    u8 *state;
    u8 step;
    u16 zero;

    sub_08024008(0xE);
    state = D_03004830;
    step = state[0x2B] + 1;
    zero = 0;
    state[0x2B] = step;
    D_03004114 = zero;
}

void sub_08010C2C(void)
{
    u8 *state = D_03004830;
    u8 timer = --state[0x2C];
    if (timer == 0)
        state[0x2B]++;
}

void sub_08010EF8(void)
{
    u8 *state = D_03004830;
    u8 timer = --state[0x2C];
    if (timer == 0) {
        sub_080379D4(0x23);
        state[0x2C] = 0x20;
        state[0x2B]++;
    }
}
