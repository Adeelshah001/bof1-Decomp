extern u8 D_03002CF8[];
extern u8 D_03003520[];
extern u8 D_03004830[];
extern u8 D_03002AB0[];

s32 sub_080197A8(s32, s32);
s32 sub_08019520(s32, s32);
s32 sub_0803AF58(s32, s32);
void sub_0801A02C(void);
s32 sub_080017EC(s32);

void sub_0801AC04(void) {
    u16 *base;
    u16 val;
    sub_080197A8((s32)D_03002CF8, 6);
    base = (u16 *)D_03003520;
    val = 0x8168;
    base[3] = val;
    base[0x16] = val;
    D_03004830[0x2B]++;
    sub_0801A02C();
}

void sub_0801AB8C(void) {
    u8 *p;
    u8 *s;
    p = D_03003520;
    if (sub_08019520((s32)p, (s32)(p + 0x80)) < 0) {
        *(u32 *)(D_03002AB0 + 0x88) += 1;
        sub_0803AF58(0x103, 0xFFFF);
        s = D_03004830;
        s[0x2C] = 0x80;
        s[0x2B]++;
    }
}
