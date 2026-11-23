extern u8 D_030023DC;
extern u16 D_03001864;
extern u32 D_03001694;
extern u8 D_00003418;
extern u8 D_030023E0[];
extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_08003378(s32);
void sub_0800312C(s32, s32);
void sub_080391F4(s32, s32, s32, s32);
void sub_08024008(s32);
void sub_0803ADA8(s32);
void sub_08004EA0(s32);

void sub_0801ED9C(void) {
    if (D_030023DC != 1) {
        sub_08003378(0x20);
        D_03001864 = 0x17;
        D_03001694 &= ~0x80;
        sub_0800312C(0x10, 4);
        D_03004830[0x2B]++;
    }
}

void sub_0801EDE4(void) {
    if (D_030023DC != 1) {
        D_03004830[0x2D] = 1;
        D_00003418 |= 0x40;
        D_03004830[0x2B]++;
    }
}

void sub_0801EE18(void) {
    if (*(u16 *)(D_030023E0 + 0xA4) == 1) {
        sub_080391F4((s32)D_03002AB0, 0x40, 7, 0);
        sub_08024008(0x4A);
        D_03004830[0x2B] |= 0x80;
    }
}

void sub_0801ECE4(void) {
    D_03001864 = 0x10;
    D_03001694 |= 0x80;
    sub_0803ADA8(0x14);
    sub_0803ADA8(0x19);
    D_03002AB0[0xB8] &= 0xF7;
    sub_08004EA0(0x855B);
    D_03004830[0x2A] = 0x0E;
    D_03004830[0x2B] = 0;
}
