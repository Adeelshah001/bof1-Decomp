extern u8 D_0202DBD0[];
extern u8 D_0300097A;
extern u16 D_03004E14;
void sub_0803D678(void);

void sub_0803D904(void) {
    u8 *p = D_0202DBD0;
    u16 val;
    p[0x4FE] = 1;
    D_0300097A = 0x3C;
    val = D_03004E14 = 0x842;
    *(u16 *)(p + 0x28C) = val;
    sub_0803D678();
}
