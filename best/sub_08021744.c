void sub_08021744(void) {
    u8 *state = D_03004830;
    s8 timer = state[0x2C];

    if (timer < 0) {
        u8 *script = state + 0x2A;
        u8 zero = 0;
        *script = 7;
        state[0x2B] = zero;
    }
}
