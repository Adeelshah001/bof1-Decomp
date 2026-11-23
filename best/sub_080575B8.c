extern void (*D_080FF640[])(u8 *);

void sub_080575E4(u8 *p) {
    D_080FF640[p[0x4C] >> 1](p);
}

extern u32 D_030045B0[];
void sub_080376E4(void);

void sub_08057608(u8 *p) {
    u8 *base = (u8 *)D_030045B0;
    *(u32 *)(base + 0x1C) = 0x20800;
    *(u32 *)(base + 0x20) = 0x20C00;
    base[0x25]++;
    p[0x4C] = 0xFF;
    sub_080376E4();
}

extern void (*D_080FEE80[])(u8 *);
extern u8 D_030023E0[];
extern u8 D_03004830[];

void sub_080575B8(u8 *p) {
    u8 *base = D_030023E0;
    D_080FEE80[*(u16 *)(base + 0xA4)](p);
    D_03004830[0x34] = 0;
}

extern u16 D_03001678[];

void sub_08057640(u8 *p) {
    u8 *base = D_030023E0;
    if (*(u16 *)(base + 0xA4) != 0x67) {
        *D_03001678 = 0x207;
        p[0x4C] = 1;
    }
}
