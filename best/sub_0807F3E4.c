extern u8 D_03004410[];
extern u16 D_03001864[];
extern u16 D_03002BD4[];

void sub_0807F4A4(void) {
    if (*(u8 *)(D_03004410 + 0xA)) *D_03001864 = 0;
}

void sub_0807F3E4(void) {
    u16 *base = D_03002BD4;
    u16 *p;
    u16 *q;
    base[1] = 0xA98;
    p = base + 0x92;
    p[1] = 0xA88;
    q = base + 0x124;
    q[1] = 0xA78;
}
