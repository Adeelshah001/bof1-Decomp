extern u32 D_080F7F60[];
void sub_080A0770(s32);

void sub_0801E004(void) {
    u32 *table = D_080F7F60;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
