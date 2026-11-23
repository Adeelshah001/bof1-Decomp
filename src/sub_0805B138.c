extern u8 D_03000AE0[];

void sub_0805B15C(void);
void sub_08059978(void);

void sub_0805B138(void) {
    u8 *p = D_03000AE0;
    u8 zero = 0;
    s32 i = 9;
    p += 0x15;
    do {
        *p = zero;
        p--;
        i--;
    } while (i >= 0);
    sub_0805B15C();
    sub_08059978();
}
