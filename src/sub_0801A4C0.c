extern void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F71A4[];
extern u32 D_080F71E8[];
extern u32 D_080F720C[];
extern u32 D_080F7220[];

void sub_0801A49C(void) {
    u32 *table = D_080F71A4;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A4C0(void) {
    u32 *table = D_080F71E8;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A4E4(void) {
    u32 *table = D_080F720C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A508(void) {
    u32 *table = D_080F7220;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
