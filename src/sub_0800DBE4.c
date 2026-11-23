extern u16 D_030040F8;
extern u8 D_03002CF8[];
extern u8 D_03003720[];

void sub_0800D2BC(void);
void sub_08033AF4(s32);
void sub_0805561C(s32);
void sub_0803EE88(void *);

void sub_0800DBE4(void) {
    D_030040F8 = 0x16;
    sub_0800D2BC();
    D_03004830[0x2B]++;
}

void sub_0800DBB8(void) {
    u8 *p;
    sub_08033AF4(2);
    p = D_03002CF8;
    p[0xBA] |= 4;
    D_03004830[0x2B]++;
}

void sub_0800DCA8(void) {
    u8 *base;
    u8 *ptr;
    sub_0805561C(0x15);
    base = D_03004830;
    ptr = base + 0x2D;
    (*ptr)++;
    base[0x2B]++;
}

void sub_0800DCCC(void) {
    u8 *actor = D_03003720;
    u8 *state;
    *(u16 *)(actor + 2) = 0xD98;
    *(u16 *)(actor + 6) = 0xFDBC;
    sub_0803EE88(actor - 0x100);
    state = D_03004830;
    state[0x2C] = 0xD;
    state[0x2B]++;
}
