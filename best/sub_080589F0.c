extern u8 D_03003410;
extern u16 D_03004E18;
extern u16 D_03004E08;
extern u32 D_030040F0;
extern u32 D_03003FB0;
extern u32 D_03002500;
extern u8 D_030023DC;
extern u16 D_03002508;
extern u8 D_03004E90;
extern u16 D_0300168C;
extern u16 D_03001644;

void sub_08058C8C(u8 *arg0) {
    u8 *ptr = arg0 + 3;
    D_03003410 = 0x13;
    D_03004E18 |= 0xF0;
    D_03004E08 |= 0xF0;
    arg0[3] = 0;
    ptr[1] = 0;
    ptr[2] = 4;
    D_030023DC = 1;
}

void sub_08058D00(u8 *arg0) {
    u8 *ptr = arg0 + 3;
    D_03003410 = 0x13;
    D_03004E18 |= 0xF0;
    D_03004E08 |= 0xF0;
    D_030040F0 = 0;
    D_03003FB0 = 0;
    D_03002500 = 0;
    arg0[3] = 0;
    ptr[1] = 3;
    ptr[2] = 4;
    D_030023DC = 1;
}

void sub_080589F0(u8 *arg0) {
    u8 *ptr = arg0 + 3;
    if (D_03002508 != 0 && D_03004E90 == 0) {
        D_0300168C = 0xDE;
    } else {
        D_0300168C = 0xDF;
    }
    ptr[1] = 1;
    ptr[0] = D_03001644;
    ptr[2] = 8;
    D_030023DC = 1;
}
