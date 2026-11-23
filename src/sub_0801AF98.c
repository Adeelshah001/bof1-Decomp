extern u8 D_03002E1C[];
void sub_08033AF4(s32);
void sub_0807E3CC(void *, s32);
void sub_0803EE88(void *);

void sub_0801AF98(void) {
    u8 *p;
    u32 v;
    u8 *base;
    sub_08033AF4(0xE);
    p = D_03002E1C;
    v = 0x158;
    *(u16 *)(p + 2) = v;
    v = 0x379C;
    *(u16 *)(p + 6) = v;
    *(u16 *)(p + 0x2C) = v;
    sub_0807E3CC(p, 2);
    sub_0803EE88(D_03003420);
    base = D_03004830;
    base[0x2B]++;
}
