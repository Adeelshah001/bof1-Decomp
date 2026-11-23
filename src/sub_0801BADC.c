extern u8 D_03002AB0[];
void sub_080017EC(s32);

void sub_0801BADC(void) {
    u8 *state;
    u8 zero;

    D_03002AB0[0xB8] &= 0xFB;
    zero = 0;
    sub_080017EC(0x53);
    state = D_03004830;
    state[0x2A] = zero;
    state[0x2B] = zero;
}
