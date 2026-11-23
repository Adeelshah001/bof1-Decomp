extern u8 D_030023DC;
extern u16 D_030040F8;

void sub_0802FD60(s32);
void sub_080074A4(void);
void sub_080017EC(s32);
void sub_080138A8(void);
void sub_0800518C(s32, s32, s32);
void sub_08030AD8(u16);

void sub_08014A88(void) {
    sub_0802FD60(0x50);
    sub_080074A4();
    D_03004830[0x2B]++;
}

void sub_08014AA8(void) {
    sub_080017EC(0x8F);
    sub_080138A8();
    D_03004830[0x2B]++;
}

void sub_08014AC8(void) {
    if (D_030023DC != 1) {
        sub_0800518C(0x154, 0xE68, -0x5A24);
        D_03004830[0x2B]++;
    }
}

void sub_08014AFC(void) {
    D_030040F8 = 0x52;
    sub_08030AD8(0x52);
    D_03004830[0x2B]++;
}
