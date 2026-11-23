extern u8 D_03004830[];

void sub_08003378(s32);

void sub_0801EE58(void) {
    s32 mask;
    u8 val;
    sub_08003378(0x10);
    val = D_03004830[0x2B];
    mask = 0x80;
    D_03004830[0x2B] = val | -mask;
}
