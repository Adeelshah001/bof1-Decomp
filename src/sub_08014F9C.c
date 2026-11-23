extern void sub_080074D4(void);
extern void sub_0800421C(s32, s32, s32);
extern void sub_08030AD8(u16);
extern void sub_080138BC(void);

extern u8 D_03004830[];
extern u16 D_03004120[];
extern u16 D_030040F8[];
extern u8 D_030023DC[];

void sub_08015040(void) {
    sub_080074D4();
    D_03004830[0x2B]++;
}

void sub_08015058(void) {
    D_03004120[0] = 3;
    sub_0800421C(0x11F, 0x1688, 0xFFFFF6AC);
    D_03004830[0x2A] = 0x0E;
    D_03004830[0x2B] = 0;
}

void sub_08014FDC(void) {
    D_030040F8[0] = 0x60;
    sub_08030AD8(0x60);
    D_03004830[0x2B]++;
}

void sub_08014F9C(void) {
    if (D_030023DC[0] != 1) {
        sub_080138BC();
        D_03004120[0] = 0;
        sub_0800421C(0xFD, 0xC78, 0xFFFF9BAC);
        D_03004830[0x2B]++;
    }
}
