s32 sub_08001770(s32);
void sub_08007548(s32, s32);
void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F58C4[];
extern u32 D_080F5A50[];

void sub_08007788(void) {
    u32 *table = D_080F58C4;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_080077D0(void) {
    u32 *table = D_080F5A50;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}
