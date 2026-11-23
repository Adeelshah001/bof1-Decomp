void sub_0800B104(s32);

extern u8 D_030023D0[];
extern u8 D_03002AB0[];
extern u8 D_03003420[];
extern u8 D_03004830[];

void sub_08005900(void) {
    u8 *actors = D_03003420;
    u8 *state = D_03004830;
    u8 val;
    s8 state_val;

    val = actors[0xBA] ^ 0x40;
    actors[0xBA] = val;

    state_val = (s8)state[0x2C];
    if (state_val == 0) {
        actors[0xBA] = val & 0xBF;
        sub_0800B104((s32)(actors + 0x480));
        state[0x2B]++;
        *(u32 *)(D_03002AB0 + 0x94) = 0x80F3;
        D_030023D0[0] = 2;
    }
}
