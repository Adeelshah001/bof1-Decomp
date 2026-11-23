void sub_080A0770(s32);

extern s32 D_080F7E90[];

void sub_0801DE48(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    if (*(s8 *)ptr >= 0) {
        s32 *table = D_080F7E90;
        s32 idx = (s32)*(s8 *)ptr;
        sub_080A0770(table[idx]);
    }
}
