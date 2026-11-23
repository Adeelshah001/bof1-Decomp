extern u8 D_03004830[];
extern u8 D_030023E0[];
extern u8 D_03002AB0[];
void sub_0800518C(s32, s32, s32);
void sub_080104D8(void);

void sub_080117BC(void) {
    u8 *p = D_03004830;
    s8 v = p[0x2D];
    if (v == 0) {
        sub_0800518C(0xBD, 0x988, 0x3E2C);
        sub_080104D8();
        p[0x2B]++;
    }
}

void sub_0801270C(void) {
    if (*(u16 *)(D_030023E0 + 0xA4) != 0x1B1) {
        D_03002AB0[0xB8] &= 0xFB;
    }
    D_03004830[0x2A] = 0;
    D_03004830[0x2B] = 0;
}
