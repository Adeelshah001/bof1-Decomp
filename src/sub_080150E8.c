extern u8 D_030023DC;
extern u16 D_03004120;

void sub_080075BC(s32);
s32 sub_08013A38(s32, s32);
void sub_080017EC(s32);
void sub_0800421C(s32, s32, s32);

void sub_08015294(void) {
    D_03004830[0x2C] = 0x50;
    sub_080075BC(0x83F2);
}

void sub_08015270(void) {
    u8 *p;
    sub_08013A38(0x26, 0);
    p = D_03004830;
    p[0x2C] = 0x80;
    p[0x2B]++;
}

void sub_080150E8(void) {
    if (D_030023DC != 1) {
        sub_080017EC(0x9C);
        D_03004120 = 0;
        sub_0800421C(0, 0xC88, 0xA7C);
        D_03004830[0x2B]++;
    }
}
