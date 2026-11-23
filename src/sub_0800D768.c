extern u8 D_030040F8[];
extern u8 D_03004830[];

extern void sub_0800D2BC(void);
extern void sub_08001F80(s32, s32, s32);
extern void sub_0800312C(s32, s32);
extern void sub_08004EA0(s32);
extern void sub_0800518C(s32, s32, s32);
extern void sub_080197C8(u16);
extern void sub_0803ADA8(s32);

void sub_0800D768(void) {
    *(u16 *)0x030040F8 = 0x1A;
    sub_080197C8(0x1A);
    D_03004830[0x2B]++;
}

void sub_0800D78C(void) {
    sub_0803ADA8(0xC);
    sub_0803ADA8(0x10);
    *(u16 *)0x030040F8 = 2;
    sub_0800D2BC();
    D_03004830[0x2A] = 0;
}

void sub_0800D730(void) {
    sub_0800312C(0x10, 0xA);
    sub_08001F80(0, 0, 0);
    sub_0800518C(0x11, 0x228, 0x27BC);
    D_03004830[0x2B]++;
}

void sub_0800D7B8(void) {
    u32 remaining = D_03004830[0x2D];
    remaining--;
    D_03004830[0x2D] = remaining;
    if ((u8)remaining == 0) {
        sub_08004EA0(0x8169);
        D_03004830[0x2B]++;
    }
}
