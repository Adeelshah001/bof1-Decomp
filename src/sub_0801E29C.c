extern u8 D_03004830[];
extern u16 D_03004890[];
extern u16 D_03000854[];
extern u32 D_080F80AC[];
extern u32 D_080F80C0[];
extern u32 D_080F80D4[];
void sub_080A0770(s32);
void sub_080379D4(s32);

void sub_0801E23C(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    if (*(s8 *)ptr >= 0) {
        u32 *table = D_080F80AC;
        s32 idx = (s32)*(s8 *)ptr;
        sub_080A0770(table[idx]);
    }
}

void sub_0801E26C(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    if (*(s8 *)ptr >= 0) {
        u32 *table = D_080F80C0;
        s32 idx = (s32)*(s8 *)ptr;
        sub_080A0770(table[idx]);
    }
}

void sub_0801E29C(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    if (*(s8 *)ptr >= 0) {
        u32 *table = D_080F80D4;
        s32 idx = (s32)*(s8 *)ptr;
        sub_080A0770(table[idx]);
    }
}

void sub_0801E2CC(void) {
    *(u16 *)D_03004890 = 300;
    sub_080379D4(50);
    *(u8 *)(D_03004830 + 0x2C) = 148;
    *(u16 *)D_03000854 = 660;
    *(u8 *)(D_03004830 + 0x2D) = 2;
    (*(u8 *)(D_03004830 + 0x2B))++;
}
