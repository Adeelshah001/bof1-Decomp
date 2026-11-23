extern u8 D_03002AB0[];
extern u8 D_03003F9C[];
void sub_08006404(s32);
void sub_08033AF4(s32);

void sub_08009700(void) {
    D_03004830[0x2B] += 2;
}

void sub_08009710(void) {
    (*(u32 *)(D_03002AB0 + 0x2D0))++;
    D_03004830[0x2B]++;
}

void sub_080096DC(void) {
    D_03003F9C[0] = 0x80;
    sub_08006404(0x12);
    D_03004830[0x2B]++;
}

void sub_0800974C(void) {
    sub_08033AF4(7);
    D_03004830[0x2B]++;
}
