extern u16 D_050001E8[];
extern u16 D_050001F0[];
extern u8 D_03004584[];
extern u8 D_03004F50[];
extern u8 D_03004410[];
extern u16 D_03001864[];
extern u16 D_03002BD4[];

extern void sub_08002BBC(u8);

void sub_0807F548(void) {
    *D_03004584 = 1;
    sub_08002BBC(D_03004F50[0x5B]);
}

void sub_0807F4A4(void) {
    if (*(u8 *)(D_03004410 + 0xA) != 0) {
        *D_03001864 = 0;
    }
}

void sub_0807F3E4(void) {
    u16 *base = D_03002BD4;
    base[1] = 0xA98;
    base[0x93] = 0xA88;
    base[0x125] = 0xA78;
}

s32 sub_08082F60(void *arg0) {
    s32 ret = 0;
    u8 *base = arg0;
    u16 newval = *(u16 *)(base + 0x38) + 1;
    u8 val = (u8)newval;
    *(u16 *)(base + 0x38) = newval;

    if (val > 0x77) ret = 1;

    if (val == 0x78) {
        (*(u8 *)(base + 0x50))++;
        return 0;
    }

    if ((val & 1) == 0) {
        u16 *e8 = D_050001E8;
        u16 tmp = e8[0];
        e8[0] = D_050001F0[0];
        D_050001F0[0] = e8[8];
        e8[8] = tmp;
    }

    return ret;
}
