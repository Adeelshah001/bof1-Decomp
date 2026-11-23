/* identical to sub_080119F0 (matched), with its names changed by decompdecomp */
extern u8 D_03004830[];

void sub_080119D8(void) {
    D_03004830[0x2C] = 0x30;
    D_03004830[0x2B]++;
}

void sub_08011B08(void) {
    u8 *base = D_03004830;
    u8 temp = --base[0x2C];
    if (temp == 0) {
        sub_0800312C(0x10, 0);
        base[0x2B]++;
    }
}

void sub_0801198C(void) {
    u8 *base = D_03004830;
    base[0x4D] = 0x30;
    if ((s8)base[0x2D] < 0) {
        sub_0800518C(0, 0xBA8, 0xA3C);
        sub_080104D8();
        sub_0800F820();
        base[0x2B]++;
    }
}

void sub_08011A3C(void) {
    u8 *base = D_03004830;
    if ((s8)base[0x2D] < 0) {
        sub_0800312C(0x10, 0);
        base[0x2B]++;
    }
}
