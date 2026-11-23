void sub_080A0770(s32);

extern u32 D_080F69C0[];
extern u32 D_080F69D0[];
extern u32 D_080F6A04[];
extern u32 D_080F6A2C[];

void sub_08013F00(void) {
    u32 *table = D_080F69C0;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013F24(void) {
    u32 *table = D_080F69D0;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013F48(void) {
    u32 *table = D_080F6A04;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013F6C(void) {
    u32 *table = D_080F6A2C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
