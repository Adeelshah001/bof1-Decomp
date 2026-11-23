extern u8 D_03004830[];
extern u8 D_030023DC[];
extern u8 D_03003420[];

void sub_08003378(s32);
void sub_0800312C(s32, s32);

void sub_08024F78(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x41;

    if (--*ptr == 0) {
        base[0x40]++;
    }
}

void sub_08024F98(void) {
    sub_08003378(0x27);
    sub_0800312C(0x10, 6);
    D_03004830[0x40]++;
}

void sub_08024FBC(void) {
    if (D_030023DC[0] == 0) {
        *(u16 *)(D_03003420 + 6) -= 0x10;
        D_03004830[0x41] = 0x5E;
        D_03004830[0x40]++;
    }
}

void sub_08024FEC(void) {
    if (D_030023DC[0] == 0) {
        D_03004830[0x41] = 0x20;
        D_03004830[0x40]++;
    }
}
