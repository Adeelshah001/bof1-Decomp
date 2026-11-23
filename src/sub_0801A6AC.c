void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F7338[];
extern u32 D_080F7378[];
extern u32 D_080F73CC[];
extern u32 D_080F7458[];

void sub_0801A688(void) {
    u32 *table = D_080F7338;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A6AC(void) {
    u32 *table = D_080F7378;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A6D0(void) {
    u32 *table = D_080F73CC;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A6F4(void) {
    u32 *table = D_080F7458;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
