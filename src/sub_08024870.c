void sub_08023FD8(u8);
void sub_0800312C(s32, s32);
void sub_080017EC(s32);
void sub_08024008(s32);

void sub_0802493C(void)
{
    u8 *state;

    sub_08023FD8(0x4C);
    state = D_03004830;
    state[0x40] = 0;
    state[0x3F] = 0;
}

void sub_08024990(void)
{
    u8 *state = D_03004830;
    u8 timer = --state[0x41];

    if (timer == 0) {
        sub_0800312C(0x10, 0);
        state[0x40]++;
    }
}

void sub_08024870(void)
{
    u8 *state = D_03004830;

    state[0x42] = 0;
    sub_080017EC(0x6D);
    sub_08024008(0x10);
    state[0x40]++;
}
