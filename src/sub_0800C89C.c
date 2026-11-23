extern u8 D_03002AB0[];
extern s16 D_03004114;
extern s16 D_03004120;
extern s32 sub_0800518C(s32, s32, s32);
extern u8 sub_08001770(s32);
extern void sub_0800421C(s32, s32, s32);

void sub_0800B970(void) {
    u8 *state = D_03004830;
    u8 b;

    if (--state[0x2C] == 0) {
        sub_0800518C(0xAB, 0x1998, 0x567C);
        b = D_03002AB0[0xB8];
        b |= 0x08;
        D_03002AB0[0xB8] = b;
        state[0x2B]++;
    }
}

void sub_0800C89C(void) {
    u8 val = sub_08001770(0x5F);

    if (val != 0 || D_03002AB0[0x4C] == 0) {
        D_03004114 = 0;
        return;
    }
    D_03004120 = val;
    sub_0800421C(0xB1, 0x1788, 0x56EC);
}

void sub_0800C8E8(void) {
    u8 val = sub_08001770(0x5C);

    if (val != 0 || D_03002AB0[0x4C] == 0) {
        D_03004114 = 0;
        return;
    }
    D_03004120 = val;
    sub_0800421C(0xB1, 0x1788, 0x56EC);
}

void sub_0800C934(void) {
    if (sub_08001770(0x5C) == 0 || sub_08001770(0x59) != 0 || D_03002AB0[0x4C] == 0) {
        D_03004114 = 0;
        return;
    }
    D_03004120 = 1;
    sub_0800421C(0x79, 0xDF8, 0x205C);
}
