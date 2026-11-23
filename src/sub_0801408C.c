void sub_080A0770(s32);
void sub_0800312C(s32 arg0, s32 arg1);
void sub_08001F80(s32 arg0, s32 arg1, s32 arg2);
void sub_080073D8(s32 arg0);
extern u8 D_03004830[];
extern u32 D_080F6BBC[];
extern u32 D_080F6C80[];
extern u32 D_080F6D24[];

void sub_08014044(void) {
    u32 *table = D_080F6BBC;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08014068(void) {
    u32 *table = D_080F6C80;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801408C(void) {
    u32 *table = D_080F6D24;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_080140D0(void) {
    u8 *state;
    sub_0800312C(0x10, 4);
    sub_08001F80(0, 0, 0);
    sub_080073D8(0x32);
    state = D_03004830;
    state[0x2B]++;
}
