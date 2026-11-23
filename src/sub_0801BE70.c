extern s16 D_0300413C;
extern u16 D_03001864;
extern u16 D_03001648;

void sub_08005164(s32);
void sub_0801BF38(void);
void sub_08004EA0(s32);
void sub_0800312C(s32, s32);

void sub_0801BEA0(void) {
    sub_08005164(0x87D0);
    if (D_0300413C == 2) {
        D_03004830[0x2B]++;
    }
}

void sub_0801BE70(void) {
    D_03004830[0x2C] = 0x80;
    sub_08005164(0x87CE);
    if (D_0300413C == 2) {
        sub_0801BF38();
    }
}

void sub_0801BCBC(void) {
    u8 *p = D_03004830;
    u8 v = --p[0x2C];
    if (v == 0) {
        sub_08004EA0(0x87DF);
        p[0x2C] = 0x30;
        p[0x2B]++;
    }
}

void sub_0801BC84(void) {
    D_03001864 = 0;
    D_03001648 = 0;
    sub_0800312C(0x10, 0x30);
    D_03004830[0x2C] = 0x60;
    D_03004830[0x2B]++;
}
