void sub_080074A4(void);
void sub_08013990(void);

void sub_08014C00(void) {
    u8 *base;
    sub_080074A4();
    sub_08013990();
    base = D_03004830;
    base[0x2C] = 0x10;
    base[0x2B]++;
}
