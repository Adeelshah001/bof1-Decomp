extern u8 D_03004830[];

void sub_0801B530(void)
{
    u8 *state = D_03004830;

    state[0x2D]++;
    state[0x2C] = 0x64;
    state[0x2B]++;
}
