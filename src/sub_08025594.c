void sub_080050B4(u8, u16, u16, u16);
void sub_080274E0(void);
void sub_0802FEE0(void);
void sub_08023FD8(u8);

void sub_080255BC(void)
{
    u8 *state = D_03004830;
    state[0x41] = 32;
    state[0x40]++;
}

void sub_080255D4(void)
{
    u8 *state;

    sub_080050B4(1, 0x18D, 0x88, 0x738C);
    state = D_03004830;
    state[0x41] = 90;
    state[0x40]++;
}

void sub_08025594(void)
{
    u8 *state;
    u8 step;
    u8 zero;

    sub_080274E0();
    sub_0802FEE0();
    state = D_03004830;
    step = state[0x40] + 1;
    zero = 0;
    state[0x40] = step;
    state[0x2D] = zero;
}

void sub_08025574(void)
{
    sub_08023FD8(0x76);
    D_03004830[0x40]++;
}
