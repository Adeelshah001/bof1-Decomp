extern u8 D_030023DC;
extern u8 D_030023E0[];
extern u8 D_03002AB0[];
extern u8 D_03003418;
extern u8 D_03004830[];

void sub_080391F4(s32, s32, s32, s32);
void sub_08024008(s32);
void sub_08003378(s32);
void sub_0800518C(s32, s32, s32);
void sub_08039054(void);
void sub_080379D4(s32);
void sub_0800312C(s32, s32);

void sub_0801EE18(void) {
    if (*(u16 *)(D_030023E0 + 0xA4) == 1) {
        sub_080391F4((s32)D_03002AB0, 0x40, 7, 0);
        sub_08024008(0x4A);
        D_03004830[0x2B] |= (s8)0x80;
    }
}

void sub_0801EE58(void) {
    sub_08003378(0x10);
    D_03004830[0x2B] |= (s8)0x80;
}

void sub_0801EE78(void) {
    D_03003418 |= 0x40;
    sub_0800518C(0, 0xAB8, 0x9DC);
    D_03002AB0[0xB8] &= 0x7F;
    D_03004830[0x2B]++;
}

void sub_0801EEE8(void) {
    if (D_030023DC != 1) {
        sub_08039054();
        sub_080379D4(5);
        sub_0800312C(0x10, 8);
        D_03004830[0x2B]++;
    }
}
