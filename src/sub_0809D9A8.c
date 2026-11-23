extern void (*const D_08153190[])(u8 *);
extern u8 D_03004410[];
extern u8 D_0202DDD4[];
void sub_08067C50(s32, s32);

void sub_0809D9A8(void) {
    D_08153190[D_03004410[0xF]](D_0202DDD4);
    sub_08067C50(0xFA, 0x25A);
}

extern u16 D_03005050[];
extern u16 D_03005090;

void sub_0809DA08(void) {
    u16 val = D_03005050[4];
    if (val != 0xFFFF) {
        D_03005090 = val;
        D_03004410[0xF]++;
    }
}

extern u16 D_03005000;

void sub_0809DA30(void) {
    if (--D_03005000 == 0) {
        D_03004410[0xF]++;
    }
}

void sub_0805B1BC(void);

void sub_0809DAAC(void) {
    sub_0805B1BC();
    if (--D_03005000 == 0) {
        D_03005000 = 0x1E;
        D_03004410[0xF] = 0x11;
    }
}
