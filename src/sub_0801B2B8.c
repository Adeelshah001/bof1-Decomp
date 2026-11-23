extern u8 D_03004830[];

void sub_08003378(s32 arg0);
void sub_0801B2B8(void) {
    sub_08003378(0x34);
    D_03004830[0x2B]++;
}

void sub_0801B2D4(void) {
    extern void sub_080379D4(s32);
    sub_080379D4(0x24);
    D_03004830[0x2C] = 0x78;
    D_03004830[0x2B]++;
}

void sub_08019720(void);
void sub_0801B278(void) {
    sub_08019720();
    D_03004830[0x2D] = 1;
    D_03004830[0x2B]++;
}

void sub_0801B2F8(void) {
    extern void sub_080379D4(s32);
    sub_080379D4(0x2E);
    D_03004830[0x2C] = 0x78;
    D_03004830[0x2B]++;
}
