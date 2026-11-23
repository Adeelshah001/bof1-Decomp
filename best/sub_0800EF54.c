extern u8 D_03002AB0[];
extern u8 D_030023DC[];

void sub_08004EA0(s32);

void sub_0800EF54(void) {
    if (D_030023DC[0] != 1) {
        D_03002AB0[0xB8] &= 0xFB;
        D_03004830[0x2A] = 0;
        D_03004830[0x2B] = 0;
    }
    if ((D_03004830[0x2A] | D_03004830[0x2B]) == 0) {
        sub_08004EA0(0x82AE);
    }
}
