extern u32 D_030045B0[];
void sub_080376E4(void);

void sub_08057608(void *p) {
    u32 *base = (u32 *)0x030045B0;
    base[7] = 0x20800;
    base[8] = 0x20C00;
    *(u8 *)((u8 *)base + 0x25) += 1;
    *(u8 *)((u8 *)p + 0x4C) = 0xFF;
    sub_080376E4();
}

extern void (*D_080FEE80[])(u8 *);
extern u8 D_030023E0[];
extern u8 D_03004830[];

void sub_080575B8(u8 *p) {
    u8 *base2 = (u8 *)0x080FEE80;
    u8 *base = D_030023E0;
    D_080FEE80[*(u16 *)(base + 0xA4)](p);
    D_03004830[0x34] = 0;
}

void sub_08057640(u8 *p) {
    u8 *base = D_030023E0;
    if (*(u16 *)(base + 0xA4) != 0x67) {
        *(u16 *)0x03001678 = 0x207;
        ((u8 *)p)[0x4C] = 1;
    }
}
