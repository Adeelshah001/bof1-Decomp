extern u8 D_03002CF8[];
extern u8 D_03003520[];
extern u8 D_03004830[];
extern u8 D_03002AB0[];

s32 sub_08019758(s32, s32, s32);
s32 sub_080197A8(s32, s32);
s32 sub_08019520(s32, s32);
s32 sub_0803AF58(s32, s32);
void sub_0801A02C(void);
s32 sub_080017EC(s32);

void sub_0801ABDC(void) {
    sub_08019758(10, 0x1DF8, 0xFFFF8160);
    D_03004830[0x2B]++;
}

void sub_0801AC04(void) {
    sub_080197A8((s32)D_03002CF8, 6);
    *(u16 *)(D_03003520 + 6) = 0x8168;
    *(u16 *)(D_03003520 + 0x2C) = 0x8168;
    D_03004830[0x2B]++;
    sub_0801A02C();
}

void sub_0801AB8C(void) {
    u8 *p = D_03003520;
    u8 *s;
    u32 *q;
    if (sub_08019520((s32)p, (s32)(p + 0x80))) {
        q = (u32 *)(D_03002AB0 + 0x88);
        *q += 1;
        sub_0803AF58(0x103, 0xFFFF);
        s = D_03004830;
        s[0x2C] = 0x80;
        s[0x2B]++;
    }
}

void sub_0801AC38(void) {
    u8 *state = D_03004830;
    if (--state[0x2C] != 0) {
        sub_0801A02C();
    } else {
        sub_080017EC(0xA2);
        state[0x2B]++;
        sub_0801A02C();
    }
}
