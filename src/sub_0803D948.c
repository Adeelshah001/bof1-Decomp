extern u8 D_0202DBD0[];
extern u8 D_0300097A;
extern u16 D_03004E14;
extern u16 D_03004E0C;

void sub_0803D948(void) {
    u8 *p = D_0202DBD0;
    u32 zero;
    u16 *p14;
    p[0x4FE] = (zero = 0) + 1;
    D_0300097A = 0xF0;
    p14 = &D_03004E14;
    D_03004E0C = zero;
    *p14 = zero;
    *(u16 *)(p + 0x28C) = zero;
    *(u16 *)(p + 0x28E) = zero;
}
