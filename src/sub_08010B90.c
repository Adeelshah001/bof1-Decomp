extern u16 D_03004114;
extern u8 D_030023DC;
extern u8 D_03002480[];
extern u8 D_0819FAB4[];
extern u8 D_0819FF6C[];
extern u8 D_03002AB0[];

void sub_08004EA0(s32);
void sub_08028D14(void *, s32, const void *, const void *);
void sub_0800312C(s32, s32);
void sub_080017EC(s32);

void sub_08010F64(void) {
    sub_08004EA0(0x82FD);
    D_03004830[0x2B]++;
    D_03004114 = 0;
}

void sub_08011238(void) {
    sub_08004EA0(0x82B7);
    D_03004830[0x2D] = 0x80;
    D_03004830[0x2B]++;
}

void sub_08010BD0(void) {
    if (D_030023DC != 1) {
        sub_08028D14(D_03002480, 0x20, D_0819FAB4, D_0819FF6C);
        sub_0800312C(0x10, 8);
        D_03004830[0x2B]++;
    }
}

void sub_08010B90(void) {
    if (!(D_03002AB0[0xB8] & 4)) {
        sub_080017EC(0x6B);
        sub_0800312C(0x10, 6);
        D_03002AB0[0xB8] |= 4;
        D_03004830[0x2B]++;
    }
}
