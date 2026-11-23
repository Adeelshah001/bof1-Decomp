extern u8 D_03002AB0[];
extern u8 D_03004550[];
void sub_080017EC(s32);
void sub_08007494(void);
void sub_0803ADA8(s32);

void sub_080157DC(void) {
    sub_080075A4(0x837F);
    sub_080017EC(0x96);
    sub_0803ADA8(0x11);
    D_03002AB0[0xB8] &= 0x7F;
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2B]++;
}
