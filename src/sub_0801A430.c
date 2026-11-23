void sub_080A0770(u32);

extern u32 D_080F70B0[];
extern u32 D_080F70FC[];
extern u32 D_080F7134[];

void sub_0801A40C(void) {
    u32 *table = D_080F70B0;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A430(void) {
    u32 *table = D_080F70FC;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801A454(void) {
    u32 *table = D_080F7134;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

u8 sub_08001770(s32);
void sub_080017EC(s32);
u8 sub_08005024(s32, s32);
u8 sub_08019898(s32);
void sub_0803EE88(void *);

extern s16 D_03004114;

void sub_0801A3B0(void) {
    if (!sub_08001770(0xB1) && !sub_08005024(0xB38, 0xD73C)) {
        if (sub_08019898(0x170)) {
            D_03004114 = 1;
            return;
        }
        sub_0803EE88(D_03003420);
        sub_080017EC(0xB1);
    }
    D_03004114 = 0;
}
