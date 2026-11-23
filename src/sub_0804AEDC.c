extern u8 D_030033F0[];
extern u16 D_03001864[];
extern u16 D_03002480[];
extern const u8 D_0819FAB4[];
extern const u8 D_0819FF6C[];
extern u8 D_03002AB0[];

void sub_0804ADCC(void);
void sub_080446F4(void);
void sub_08028D14(void *, s32, const void *, const void *);
void sub_0803D454(u16);
void sub_080017EC(s32);
void sub_0800312C(s32, s32);

void sub_0804AF14(void) {
    D_030033F0[0] |= 1;
    sub_0804ADCC();
}

void sub_0804AF3C(void) {
    u16 *ptr;
    sub_080446F4();
    D_03001864[0] = 7;
    ptr = D_03002480;
    sub_08028D14(ptr, 0x20, D_0819FAB4, D_0819FF6C);
    sub_0803D454(ptr[2]);
    sub_080017EC(0x24);
    sub_0800312C(0x10, 8);
}

void sub_0804AEDC(void) {
    D_03002AB0[0xB8] |= 4;
    D_03004830[0x2A] = 5;
    D_03004830[0x2B] = 0xE;
}

void sub_0804AEC0(void) {
    *(u32 *)(D_03002AB0 + 0x94) = 0x803B;
    D_030023D0[0] = 2;
}
