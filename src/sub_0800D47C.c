void sub_080A0770(s32);

extern u32 D_080F60D8[];
extern u32 D_080F6144[];
extern u32 D_080F6184[];
extern u32 D_080F61BC[];

void sub_0800D458(void) {
    u32 *table = D_080F60D8;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D47C(void) {
    u32 *table = D_080F6144;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D4A0(void) {
    u32 *table = D_080F6184;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D4C4(void) {
    u32 *table = D_080F61BC;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
