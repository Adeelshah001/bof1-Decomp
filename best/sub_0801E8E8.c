extern u8 D_03004830[];
extern void sub_0800511C(s32 arg0, s32 arg1);
extern void sub_080379D4(s32 arg0);

void sub_0801E8E8(void) {
    u8 *p;
    sub_0800511C(0x1DB, 1);
    sub_080379D4(0xF1);
    p = D_03004830;
    p[0x2C] = 0x20;
    p[0x2B] += 1;
}
