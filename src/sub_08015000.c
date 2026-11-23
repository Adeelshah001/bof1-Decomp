extern void sub_080074A4(void);
extern void sub_080074C4(void);
extern void sub_080074D4(void);
extern void sub_0800421C(s32, s32, s32);

extern u8 D_03004830[];
extern u16 D_03004120[];
extern u8 D_030023DC[];
extern u32 D_03002AB0[];

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

void sub_08015000(void) {
    sub_080074C4();
    sub_080074D4();
    sub_080074A4();
    D_03004830[0x2B]++;
}

void sub_08015094(void) {
    if (D_030023DC[0] != 1) {
        D_03002AB0[0x88/4]++;
        D_03004830[0x2B]++;
    }
}
