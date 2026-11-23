void sub_080A0770(u32);

extern u32 D_080F5FFC[];
extern u32 D_080F600C[];

void sub_0800D320(void) {
    u32 *table = D_080F5FFC;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D344(void) {
    u32 *table = D_080F600C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0803EE88(void *);
void sub_08072CC4(s32);
extern u8 D_03004584;
extern u8 D_03003520[];
extern u8 D_03002AB0[];

void sub_0800D368(void) {
    u8 val;

    sub_08072CC4(0x2410);
    val = D_03004584;
    if (val == 0) {
        u8 *p = D_03003520;
        u8 *p2AB0;
        u8 *base;

        sub_0803EE88(p);
        sub_0803EE88(p - 0x100);
        sub_0803EE88(p - 0x80);
        p2AB0 = D_03002AB0;
        *(p2AB0 + 0xB8) &= 0xFB;
        base = D_03004830;
        *(base + 0x2A) = val;
        *(base + 0x2C) = val;
    }
}

u8 sub_08001770(s32);
void sub_0800421C(s32, s32, s32);
extern s16 D_03004114;
extern s16 D_03004120;

void sub_0800D2D4(void) {
    u8 val = sub_08001770(0x5E);
    u8 *p2AB0 = D_03002AB0;

    if (val != 0 || p2AB0[0x4C] == 0) {
        D_03004114 = 0;
        return;
    }
    D_03004120 = val;
    sub_0800421C(0xB1, 0x1788, 0x56EC);
}
