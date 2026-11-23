void sub_080A0770(s32);

extern u32 D_080F6488[];
extern u32 D_080F64B0[];
extern u32 D_080F64B8[];
extern u32 D_080F64C8[];

void sub_080107C4(void) {
    u32 *table = D_080F6488;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_080107E8(void) {
    u32 *table = D_080F64B0;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801080C(void) {
    u32 *table = D_080F64B8;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08010830(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    if (*(s8 *)ptr >= 0) {
        u32 *table = D_080F64C8;
        s32 idx = (s32)*(s8 *)ptr;
        sub_080A0770(table[idx]);
    }
}
