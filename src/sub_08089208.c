extern const u8 D_081529CD[];
void sub_08038278(void);
void sub_080892C0(u8 *);
void sub_08083BB4(u8 *);

typedef struct {
    u8 p0[2];
    u16 unk2;
    u8 p4[2];
    u16 unk6;
    u8 p8[0x3B - 8];
    u8 unk3B;
    u8 p3C[0x4C - 0x3C];
    u8 unk4C;
    u8 unk4D;
    u8 p4E[6];
    u8 unk54;
    u8 unk55;
    u8 p56[0x70 - 0x56];
    u8 unk70;
    u8 p71[0xE4 - 0x71];
    u16 unkE4;
    u16 unkE6;
} E4;
void sub_08089330(E4 *);

void sub_08089330(E4 *arg0) {
    sub_08038278();
    if (--arg0->unk70 == 0) {
        u8 v;
        arg0->unk2 = arg0->unkE4;
        arg0->unk6 = arg0->unkE6;
        v = arg0->unk3B << 1;
        arg0->unk55 = v;
        arg0->unk54 = (2 & v) ? 0xFF : 1;
        arg0->unk4C = 2;
        arg0->unk4D = 0;
    }
}

void sub_08089268(u8 *arg0) {
    u8 v = arg0[0x4D];
    if (v == 1) {
        sub_080892C0(arg0);
    } else if (v == 2) {
        sub_08089330((E4 *)arg0);
    } else {
        u8 t;
        arg0[0x4C] = 4;
        arg0[0x4D]++;
        t = D_081529CD[(u16)(arg0[0x3B] - 1)];
        arg0[0x61] = t;
        arg0[0x70] = 4;
    }
}

void sub_08089208(u8 *arg0) {
    u8 *e;
    u8 *f;
    u8 x;
    sub_08038278();
    e = *(u8 **)(arg0 + 0x78);
    if (e[2] < arg0[2] || (u8)(e[6] + 0x10) < arg0[6]) {
        f = *(u8 **)(arg0 + 0x6C);
        e = f;
        x = arg0[0x3B];
        if (x == e[0xDB]) {
            f[0xDD] = 0xEF & e[0xDD];
            sub_08083BB4(arg0);
        }
        arg0[0x61] = (arg0[0x61] + 0x10) & 0x1F;
        arg0[0x4D]++;
    }
}
