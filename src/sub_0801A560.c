extern void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F70A8[];

void sub_0801A560(void) {
    u32 *table = D_080F70A8;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
