extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_080110DC(void) {
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2A] = 0;
    D_03004830[0x2B] = 0;
}
