void sub_0801EDE4(void) {
    if (*(u8 *)0x030023DC != 1) {
        u8 *state = (u8 *)0x03004830;
        state[0x2D] = 1;
        *(u8 *)0x03003418 |= 0x40;
        state[0x2B]++;
    }
}
