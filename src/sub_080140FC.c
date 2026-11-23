/* identical to sub_08007BEC (matched), with its names changed by decompdecomp */
extern u8 D_03004830[];
extern u8 D_03003420[];
extern u8 D_030023DC[];
extern u8 D_03002508[];
extern u8 D_03002AB0[];

void sub_0800312C(s32 arg0, s32 arg1);
void sub_0800518C(s32 arg0, s32 arg1, s32 arg2);

void sub_080140FC(void) {
    u8 *p = D_03004830;
    p[0x2C] = 0x20;
    p[0x2B]++;
}

void sub_08007D5C(void) {
    u8 *p;
    sub_0800312C(0x10, 8);
    p = D_03004830;
    p[0x2B]++;
}

void sub_08007D78(void) {
    u8 *p;
    D_03003420[0xBA] ^= 0x40;
    if (D_030023DC[0] != 1) {
        p = D_03004830;
        p[0x2C] = 0x30;
        p[0x2B]++;
    }
}

void sub_08007DAC(void) {
    u8 *p;
    *(u16 *)D_03002508 = 0x1000;
    sub_0800518C(1, 0x288, 0x20BC);
    D_03002AB0[0xB8] |= 8;
    p = D_03004830;
    p[0x2B]++;
}
