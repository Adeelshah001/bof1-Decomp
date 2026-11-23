extern u8 D_03001670[];
extern u8 D_03000854[];
extern u8 D_030016E0[];
extern u8 D_030033D8[];

extern void sub_08024008(s32);
extern void sub_0800F85C(s32);
extern void sub_0802411C(s32, s32);
extern void sub_0801D9C0(s32, s32, s32);
extern void sub_08037A74(s32);
extern void sub_0800312C(s32, s32);
extern void sub_08001F80(s32, s32, s32);

void sub_0801F2C4(void) {
    u8 *p = D_03004830;
    *(u16 *)0x03001670 = 0x1800;
    sub_08024008(0x5C);
    sub_0800F85C(8);
    p[0x2D] = 0;
    p[0x2B]++;
}

void sub_0801F2FC(void) {
    u8 *p = D_03004830;
    sub_0802411C(0x4AE0, 0x160);
    p[0x2B] |= -0x80;
    p[0x2C] = 1;
    sub_0801F334();
}

void sub_0801F334(void) {
    u8 *p = D_03004830;
    u8 *ptr = p + 0x2C;
    if (--(*ptr) == 0) {
        sub_0801D9C0(0, 0, -1);
        *ptr = 0x50;
        p[0x2B]++;
    }
}

void sub_0801F194(void) {
    u16 *a = (u16 *)0x03000854;
    u16 v = ++(*a);
    if ((8 & *(u16 *)0x030016E0) || v > 0x12B) {
        sub_08037A74(0x400);
        sub_0800312C(0x10, 0);
        sub_08001F80(0, 0, 0);
        *(u8 *)0x030033D8 = 3;
    }
}
