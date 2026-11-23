extern u8 D_03002AB0[];

void sub_08025920(void) {
    D_03002AB0[0xB8] |= 4;
    ((Entity *)D_03003420)->unk68++;
}

void sub_0802594C(void) {
    u8 *state = D_03004830;
    u8 val = 0xD;
    if ((s8)state[0x2D] == 0) {
        val = 0;
    }
    state[0x3F] = 0x1B;
    state[0x40] = val;
    D_03002AB0[0xB8] |= 4;
    ((Entity *)D_03003420)->unk68++;
}

void sub_080258D4(void) {
    D_03004830[0x3F] = 0x16;
    D_03004830[0x40] = 2;
    D_03002AB0[0xB8] |= 4;
}

void sub_080258AC(void) {
    D_03004830[0x3F] = 0x16;
    D_03004830[0x40] = 1;
    D_03002AB0[0xB8] |= 4;
}
