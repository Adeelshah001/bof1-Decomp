void sub_080A0770(u32);

extern u32 D_080F6028[];
extern u32 D_080F603C[];
extern u32 D_080F6050[];
extern u32 D_080F607C[];

void sub_0800D3C8(void) {
    u32 *table = D_080F6028;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D3EC(void) {
    u32 *table = D_080F603C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D410(void) {
    u32 *table = D_080F6050;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D434(void) {
    u32 *table = D_080F607C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
