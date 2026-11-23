void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F74A4[];
extern u32 D_080F74BC[];
extern u32 D_080F7558[];

void sub_0801A718(void) {
    u32 *table = D_080F74A4;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A73C(void) {
    u32 *table = D_080F74BC;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A760(void) {
    u32 *table = D_080F7558;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_080017EC(u16);
s32 sub_0805CF40(u16, u16 *);

extern u8 D_0202DBD0[];

void sub_0801A784(void) {
    u16 sp0;

    if (D_03004830[0x2B] != 0) {
        sub_080017EC(0xB8);
        sub_0805CF40(0x174, &sp0);
        *(u16 *)(D_0202DBD0 + 0x204 + sp0 * 2) = 0;
        D_03004830[0x2A] = 0;
        D_03004830[0x2B] = 0;
    }
}
