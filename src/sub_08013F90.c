void sub_080A0770(s32);

extern u32 D_080F6A48[];
extern u32 D_080F6A54[];
extern u32 D_080F6AC4[];
extern u32 D_080F6B24[];

void sub_08013F90(void) {
    u32 *table = D_080F6A48;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013FB4(void) {
    u32 *table = D_080F6A54;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013FD8(void) {
    u32 *table = D_080F6AC4;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08013FFC(void) {
    u32 *table = D_080F6B24;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
