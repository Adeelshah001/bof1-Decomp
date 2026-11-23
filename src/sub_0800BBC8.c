extern u8 D_030037A0[];
extern u8 D_03004830[];

extern void sub_0803AF58(s32 arg0, s32 arg1);
extern void sub_0803EE88(void *arg0);

void sub_0800BBC8(void) {
    u8 *base = D_030037A0;
    u16 v;
    u8 *base2;
    v = 0xD88;
    *(u16 *)(base + 2) = v;
    base2 = base + 0xFFFFFF00;
    *(u16 *)(base2 + 2) = v;
    v = 0xFD4C;
    *(u16 *)(base + 6) = v;
    v += 0x10;
    *(u16 *)(base2 + 6) = v;
    sub_0803EE88(base + 0xFFFFFE00);
    {
        u16 w = 0xFFFF;
        sub_0803AF58(0x62, w);
        sub_0803AF58(0x70, w);
    }
    D_03004830[0x2C] = 8;
    D_03004830[0x2B] += 1;
}
