extern u8 D_03002AB0[];
extern u8 gEntityPool[];

void sub_08019DA0(void);
void sub_0800518C(s32, s32, s32);
void sub_080030D4(void);
void sub_08037A74(s32);
void sub_080017EC(s32);
void sub_08019720(void);
void sub_080380C0(void *);
u8 sub_08019E04(s32);

void sub_0801C5E0(void) {
    D_03003420[0x2C1] = 4;
    D_03003420[0x341] = 6;
    sub_08019DA0();
}

void sub_0801C598(void) {
    u8 *p = D_03002AB0;
    p[0xB8] &= 0x7F;
    sub_0800518C(0, 0x588, 0x101C);
    sub_080030D4();
    (*(u32 *)(p + 0x88))++;
    (*(u32 *)(p + 0x1AC))++;
    sub_08019DA0();
}

void sub_0801C62C(void) {
    sub_08037A74(0x100);
    sub_0800518C(0, 0x2C8, 0xCCC);
    D_03002AB0[0xB8] &= 0x7F;
    sub_080017EC(0xB7);
    sub_08019720();
    sub_08019DA0();
}

void sub_0801C69C(void) {
    u8 *p;
    sub_08019720();
    p = gEntityPool;
    sub_080380C0(p);
    sub_080380C0(p + 0xE0);
    sub_080380C0(p + 0x1C0);
    sub_080380C0(p + 0x2A0);
    if (sub_08019E04(2) == 0) {
        D_03002AB0[0xB8] |= 0x80;
        D_03004830[0x2B]++;
    }
}
