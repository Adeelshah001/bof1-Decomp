extern u16 D_03004120;
extern u8 D_030023DC[];
void sub_0800421C(u16, s16, s16);
void sub_08013A38(s32, s32);
void sub_08033AF4(s32);

void sub_08015058(void) {
    u8 *state;
    u8 *phase;
    u32 zero;
    D_03004120 = 3;
    sub_0800421C(0x11F, 0x1688, -0x954);
    state = D_03004830;
    phase = state + 0x2A;
    zero = 0;
    *phase = 0x0E;
    state[0x2B] = zero;
}

void sub_080151EC(void) {
    sub_08013A38(0x24, 0);
    D_03004830[0x2C] = 0x20;
    D_03004830[0x2B]++;
}

void sub_08014EA0(void) {
    if (D_030023DC[0] != 1) {
        D_03004120 = 0;
        sub_0800421C(0x154, 0xE68, -0x5A24);
        D_03004830[0x2B]++;
    }
}

void sub_08014E64(void) {
    sub_08033AF4(0x14);
    D_03004830[0x2C] = 0x28;
    D_03004830[0x2B]++;
}
