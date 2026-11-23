void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F75E8[];
extern u32 D_080F7620[];
extern u32 D_080F76E0[];
extern u32 D_080F76E8[];

void sub_0801A7F8(void) {
    u32 *table = D_080F75E8;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A81C(void) {
    u32 *table = D_080F7620;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A840(void) {
    u32 *table = D_080F76E0;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A864(void) {
    u32 *table = D_080F76E8;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
