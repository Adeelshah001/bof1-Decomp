extern u8 D_03002AB0[];
extern u8 D_03004550[];
void sub_080017EC(s32);
void sub_08007494(void);
void sub_0803ADA8(s32);

void sub_0801582C(void) {
    sub_080075A4(0x8340);
    sub_080017EC(0x97);
    D_03004830[0x2B]++;
}

void sub_0801585C(void) {
    if (!(0x80 & D_03004550[0x23])) {
        sub_080017EC(0x82);
        sub_08007494();
    }
}

void sub_080157DC(void) {
    sub_080075A4(0x837F);
    sub_080017EC(0x96);
    sub_0803ADA8(0x11);
    D_03002AB0[0xB8] = 0x7F & D_03002AB0[0xB8] & 0xFB;
    D_03004830[0x2B]++;
}

void sub_08015934(void) {
    sub_080017EC(0x88);
    D_03004830[0x2A] = 7;
    D_03004830[0x2B] = 0;
    D_03002AB0[0xB8] |= 4;
}
