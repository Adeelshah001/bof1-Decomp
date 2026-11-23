void sub_08007DF0(void)
{
    if (*(u8 *)0x030023DC != 1) {
        u8 *state = (u8 *)0x03004830;
        state[0x2C] = 0x40;
        state[0x2B]++;
    }
}

void sub_08007EC0(void)
{
    s8 *state = (s8 *)0x03004830;
    if (state[0x2C] == 0) {
        sub_08007588(0x2A8, 0x214C);
        sub_08007588(0x268, 0x218C);
        state[0x2C] = 0x67;
        state[0x2B]++;
    }
}

void sub_08007FAC(void)
{
    s8 *state = (s8 *)0x03004830;
    u32 *table = (u32 *)0x03002AB0;
    if (state[0x2C] == 0) {
        sub_08007588(0x288, 0x21AC);
        sub_08007504();
        sub_080074A4();
        table[0x22]++;
        state[0x2B]++;
        table[0x25] = 0x81A0;
        *(u8 *)0x030023D0 = 2;
    }
}

void sub_0800800C(void)
{
    s8 *state = (s8 *)0x03004830;
    state[0x2C] = 0x57;
    sub_08007588(0x2A8, 0x21AC);
    state[0x2B]++;
}
