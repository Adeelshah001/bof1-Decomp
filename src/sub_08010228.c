extern u8 D_03002AB0[];
void sub_08010228(void) {
    u8 *event = D_03002AB0;
    u8 v;
    event[0xB8] = ((v = 4 + (event[0xB8] >> 8)), v | event[0xB8]);
    {
        u8 *state = D_03004830;
        state[0x2B]++;
    }
}
