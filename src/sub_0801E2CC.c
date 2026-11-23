extern u8 D_03004830[];
extern u16 D_03004890[];
extern u16 D_03000854[];
void sub_080379D4(s32);

void sub_0801E2CC(void) {
    u8 *base;
    *(u16 *)D_03004890 = 300;
    sub_080379D4(50);
    base = D_03004830;
    base[0x2C] = 148;
    *(u16 *)D_03000854 = 660;
    base[0x2D] = 2;
    base[0x2B]++;
}
