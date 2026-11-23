extern u8 D_03001864[];
extern u8 D_03002AB0[];

void sub_0800518C(s32, s32, s32);
void sub_08004EA0(s32);
void sub_080017EC(s32);

void sub_0801BA94(void) {
    sub_0800518C(0xFF, 0x668, 0xFFFF9D6C);
    D_03004830[0x2B]++;
}

void sub_0801BAB8(void) {
    u8 *base;

    *(u16 *)D_03001864 = 0x17;
    base = D_03004830;
    base[0x2C] = 0xC8;
    base[0x2B]++;
}

void sub_0801BADC(void) {
    u8 *state;
    u8 zero = 0;

    D_03002AB0[0xB8] &= 0xFB;
    sub_080017EC(0x53);
    state = D_03004830;
    state[0x2A] = zero;
    state[0x2B] = zero;
}

void sub_0801BA3C(void) {
    u8 *state;

    sub_08004EA0(0x8435);
    state = D_03004830;
    state[0x2C] = 0x20;
    state[0x2B]++;
}
