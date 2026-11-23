extern u8 D_030023E0[];
extern u8 D_03002AB0[];
extern u8 D_03004830[];
void sub_08004EA0(s32);
void sub_0800518C(s32, s32, s32);
void sub_080104D8(void);

void sub_08011380(void) {
    u8 *p = D_03004830;
    if (p[0x2D] & 0x08) {
        sub_08004EA0(0x82BD);
        p[0x2C] = 0x20;
        p[0x2B]++;
    }
}

void sub_080113B8(void) {
    u8 *p = D_03004830;
    u8 v = --p[0x2C];
    if (v == 0) {
        sub_08004EA0(0x82BE);
        p[0x2C] = 0x20;
        p[0x2B]++;
    }
}

void sub_080117BC(void) {
    u8 *p = D_03004830;
    if ((s8)p[0x2D] == 0) {
        sub_0800518C(0xBD, 0x988, 0x3E2C);
        sub_080104D8();
        p[0x2B]++;
    }
}

void sub_0801270C(void) {
    u8 *a = D_030023E0;
    u8 *b = D_03002AB0;
    u8 *p = D_03004830;
    if (*(u16 *)(a + 0xA4) != 0x1B1) {
        b[0xB8] &= 0xFB;
    }
    p[0x2A] = 0;
    p[0x2B] = 0;
}
