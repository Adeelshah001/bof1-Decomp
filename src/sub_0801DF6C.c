void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F7F28[];

void sub_0801DF6C(void) {
    u32 *table = D_080F7F28;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
