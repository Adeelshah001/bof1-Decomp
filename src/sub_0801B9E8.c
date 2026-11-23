/* identical to sub_080151A0 (matched), with its names changed by decompdecomp */
extern u8 D_03004830[];

void sub_0801B9E8(void) {
    u8 *p = D_03004830;
    p[0x2C] = 0x10;
    p[0x2B] += 1;
}

s32 sub_08013A38(s32, s32);

void sub_080151C8(void) {
    u8 *p;
    sub_08013A38(0x23, 0);
    p = D_03004830;
    p[0x2C] = 0x20;
    p[0x2B] += 1;
}

void sub_08015210(void) {
    u8 *p;
    sub_08013A38(0x25, 0);
    p = D_03004830;
    p[0x2C] = 0x80;
    p[0x2B] += 1;
}

s32 sub_080075BC(s32);

void sub_08015244(void) {
    u8 *p = D_03004830;
    p[0x2C] = 0xFF;
    sub_080075BC(0x83F0);
}
