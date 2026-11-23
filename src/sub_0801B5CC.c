/* identical to sub_0800DB40 (matched), with its names changed by decompdecomp */
extern u8 D_030036A0[];
void sub_08004EA0(s32);
void sub_0803AF58(s32, s32);

void sub_0801B5CC(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2D;

    (*ptr)++;
    base[0x2B]++;
}

void sub_0800DB5C(void) {
    u8 *base;

    sub_08004EA0(0x815F);
    base = D_03004830;
    base[0x2C] = 8;
    base[0x2B]++;
}

void sub_0800DB08(void) {
    u8 *base;

    sub_08004EA0(0x815E);
    base = D_030036A0;
    *(u16 *)(base + 2) = 0xDE8;
    *(u16 *)(base + 6) = 0xFD9C;
    *(u16 *)(base + 0x2C) = 0xFD9C;
    base = D_03004830;
    base[0x2B]++;
}

void sub_0800DB84(void) {
    u8 *base;

    sub_0803AF58(0x70, 0xFFFF);
    sub_08004EA0(0x8160);
    base = D_03004830;
    base[0x2C] = 0x40;
    base[0x2B]++;
}
