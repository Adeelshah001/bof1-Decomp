extern u8 D_03002AB0[];
extern u16 D_0300085C;
extern u8 D_030023DC;

void sub_0800518C(s16, s16, s16);
void sub_08004EA0(s32);
void sub_0805C9B8(void *, s32);

void sub_08024DEC(void) {
    D_03002AB0[0xB8] &= 0xF3;
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
}

void sub_08024DB4(void) {
    if (--D_0300085C == 0) {
        sub_0800518C(0xF0, 0x5F8, -0x5A94);
        D_03004830[0x40]++;
    }
}

void sub_08024D68(void) {
    u8 *state = D_03004830;
    if (--state[0x41] == 0) {
        sub_08004EA0(0x828E);
        sub_0805C9B8(D_03002AB0, 0x64);
        D_0300085C = 0x12C;
        state[0x40]++;
    }
}

void sub_08024B58(void) {
    if (D_030023DC == 0) {
        sub_08004EA0(0x8294);
        D_03004830[0x40]++;
    }
}
