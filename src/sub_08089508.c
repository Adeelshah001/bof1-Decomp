extern const u8 D_081529CD[];
void sub_080869CC(u8 *);
void sub_08088FE0(u8 *);
void sub_08038278(void);
void sub_080892C0(u8 *);
void sub_08089330(u8 *);
void sub_08083BB4(u8 *);

void sub_08089508(u8 *arg0) {
    u8 *p;
    sub_080869CC(arg0);
    p = arg0 + 0xDA;
    *p = 0;
    p++;
    *p = 0;
    p -= 0x87;
    *p = 1;
    sub_08088FE0(arg0);
}

void sub_08089330(u8 *arg0) {
    sub_08038278();
    if (--arg0[0x70] == 0) {
        u8 v;
        s8 d;
        u8 *p;
        *(u16 *)(arg0 + 2) = *(u16 *)(arg0 + 0xE4);
        *(u16 *)(arg0 + 6) = *(u16 *)(arg0 + 0xE6);
        v = arg0[0x3B] << 1;
        arg0[0x55] = v;
        d = 1;
        if (2 & v) d = 0xFF;
        p = arg0 + 0x54;
        *p = d;
        p -= 8;
        *p = 2;
        arg0[0x4D] = 0;
    }
}

void sub_08089268(u8 *arg0) {
    u8 v = arg0[0x4D];
    if (v == 1) {
        sub_080892C0(arg0);
    } else if (v == 2) {
        sub_08089330(arg0);
    } else {
        arg0[0x4C] = 4;
        arg0[0x4D]++;
        arg0[0x61] = D_081529CD[(u16)(arg0[0x3B] - 1)];
        arg0[0x70] = 4;
    }
}

void sub_08089208(u8 *arg0) {
    u8 *e;
    u8 *f;
    sub_08038278();
    e = *(u8 **)(arg0 + 0x78);
    if (e[2] < arg0[2] || (u8)(e[6] + 0x10) < arg0[6]) {
        f = *(u8 **)(arg0 + 0x6C);
        e = f;
        if (arg0[0x3B] == e[0xDB]) {
            f[0xDD] = 0xEF & e[0xDD];
            sub_08083BB4(arg0);
        }
        arg0[0x61] = (arg0[0x61] + 0x10) & 0x1F;
        arg0[0x4D]++;
    }
}
