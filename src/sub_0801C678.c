extern u8 *D_03004448;
extern u8 D_03004830[];

void sub_0801C678(void) {
    u16 *actor = D_03004448;
    u8 *state = D_03004830;
    state[0x2D] = 0;
    actor[3] = 0x88;
    state[0x2B]++;
}
