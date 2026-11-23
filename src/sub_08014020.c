s32 sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F6B3C[];

void sub_08014020(void) {
    u32 *table = D_080F6B3C;
    u8 *base = D_03004830;
    s32 idx = (s32)*(s8 *)(base + 0x2B);
    sub_080A0770(table[idx]);
}
