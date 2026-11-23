extern u8 D_03002AB0[];
s32 sub_080103F8(s32 arg0);

void sub_0800EE18(void) {
    u8 *state = D_03004830;
    s32 raw;
    state[0x2C] = 0x0A;
    state[0x2D] = 0x01;
    raw = sub_080103F8(0x143);
    if ((s8)raw == 0) {
        D_03002AB0[0xB8] &= 0xFB;
        state[0x2A] = 0;
        state[0x2B] = 0;
    } else {
        state[0x2B]++;
    }
}
