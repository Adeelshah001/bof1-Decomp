extern u16 D_0300168C;
extern u8 D_03004E9C;
extern u16 D_03001620;
extern u16 D_03001640;
extern u16 D_030016D0;
extern u16 D_03001678;
extern u16 D_030047FC;
extern u8 D_030023DC;
extern u8 D_03004E98;

void sub_08058A80(void *arg0) {
    u8 *p = (u8 *)arg0 + 3;

    D_0300168C = 0xFF;
    D_03004E9C = 6;
    D_03001620 |= 0x40;
    D_03001640 |= 0x40;
    D_030016D0 |= 0x40;
    D_03001678 |= 0x40;
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    p[4] = 0x11;
    D_030047FC = 0;
    D_030023DC = 1;
    D_03004E98 = 0;
}
