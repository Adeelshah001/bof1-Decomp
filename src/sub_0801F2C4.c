extern u8 D_03001670[];
extern u8 D_03004830[];
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
    *(u16 *)0x03001670 = 0x1800;
    sub_08024008(0x5C);
    sub_0800F85C(8);
    D_03004830[0x2D] = 0;
    D_03004830[0x2B]++;
}

void sub_0801F2FC(void) {
    sub_0802411C(0x4AE0, 0x160);
    D_03004830[0x2B] |= -0x80;
    D_03004830[0x2C] = 1;
    sub_0801F334();
}

void sub_0801F194(void) {
    u16 *a = (u16 *)0x03000854;
    u16 v = ++(*a);
    if ((*(u16 *)(0x030016E0 + 6) & 8) || ((u32)v << 16) > 0x012B0000U) {
        sub_08037A74(0x400);
        sub_0800312C(0x10, 0);
        sub_08001F80(0, 0, 0);
    }
    *(u8 *)0x030033D8 = 3;
}
