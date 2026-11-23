void sub_080A0770(s32);

extern u32 D_080F64C8[];

void sub_08010830(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    if (*(s8 *)ptr >= 0) {
        u32 *table = D_080F64C8;
        s32 idx = (s32)*(s8 *)ptr;
        sub_080A0770(table[idx]);
    }
}
