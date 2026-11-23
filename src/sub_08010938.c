void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F6564[];
extern u32 D_080F6570[];
extern u32 D_080F6584[];
extern u32 D_080F65CC[];

void sub_08010914(void) {
    u32 *table = D_080F6564;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08010938(void) {
    u32 *table = D_080F6570;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801095C(void) {
    u32 *table = D_080F6584;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08010980(void) {
    u32 *table = D_080F65CC;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
