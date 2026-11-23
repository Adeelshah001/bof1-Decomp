void sub_080A0770(s32);

extern u32 D_080F68A8[];
extern u32 D_080F68B8[];
extern u32 D_080F6928[];
extern u32 D_080F6930[];

void sub_08013E70(void) {
    u32 *table = D_080F68A8;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013E94(void) {
    u32 *table = D_080F68B8;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013EB8(void) {
    u32 *table = D_080F6928;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013EDC(void) {
    u32 *table = D_080F6930;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
