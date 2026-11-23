void sub_0803D98C(void) {
}

extern u8 D_0202DBD0[];
extern u8 D_0300097A;
extern u16 D_03004E14;
extern u16 D_03004E0C;

void sub_0803D948(void) {
    u8 *p = D_0202DBD0;
    u16 zero = 0;
    p[0x4FE] = 1;
    D_0300097A = 0xF0;
    D_03004E14 = zero;
    D_03004E0C = zero;
    *(u16 *)(p + 0x28C) = zero;
    *(u16 *)(p + 0x28E) = zero;
}

void sub_0803D678(void);

void sub_0803D904(void) {
    u8 *p = D_0202DBD0;
    u16 val;
    p[0x4FE] = 1;
    D_0300097A = 0x3C;
    val = 0x842;
    D_03004E14 = val;
    *(u16 *)(p + 0x28C) = val;
    sub_0803D678();
}

s32 sub_0803DA18(u8 *arg0) {
    s32 i = 0;
    if (arg0[0x2BA] != 0) {
        arg0 += 0x2BA;
        do {
            i++;
            if (i > 7) {
                break;
            }
        } while (arg0[i] != 0);
    }
    return i;
}
