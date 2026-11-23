void sub_0800359C(void) {
    u8 *s = D_03004830;

    s[0x2A] = 0;
    s[0x2B] = 0x10;
    if ((s8)s[0x31] != 0) {
        s[0x2B] = 0;
    }
}
