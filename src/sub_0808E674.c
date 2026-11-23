extern u8 D_030043D8, D_03001125, D_03004FFC, D_03004FF4, D_03004FF8;
extern u16 D_0300168C, D_03001644, D_030033D4, D_030040F4;
void sub_08073470(void);
void sub_0808E654(u8 *state, u8 step);

void sub_0808E6D8(u8 *state)
{
    *(u8 *)0x030043D8 = 1;
    state[0x54] = 15;
    if (state[0x50])
        state[0x54] = 7;
}

void sub_0808E674(void)
{
    if ((D_03001125 ^= 1) & 1) {
        D_0300168C = 0x84;
        D_03001644 = D_03004FFC >> 1;
    } else {
        sub_08073470();
    }
}

void sub_0808E778(u16 *state)
{
    u32 mask = 0x1FF;
    D_030033D4 = (((state[8] >> 8) | (state[9] << 8)) + D_030033D4) & mask;
    D_030040F4 = (((state[10] >> 8) | (state[11] << 8)) + D_030040F4) & mask;
}

void sub_0808E608(u8 *state, u8 mode)
{
    u8 level, rate;
    u8 *rates;
    state[0xE1] = mode;
    state[0xE0] = 6;
    D_03001125 = 1;
    level = 31;
    D_03004FFC = level;
    D_03004FF4 = level;
    D_03004FF8 = level;
    rate = 3;
    rates = state + 0x54;
    rates[0] = rate;
    rates[1] = rate;
    sub_0808E654(state, 4);
}
