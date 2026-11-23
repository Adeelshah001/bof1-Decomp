extern u8 D_03002CF8[];
extern u8 D_03003720[];

void sub_08033AF4(s32);
void sub_0803EE88(void *);

void sub_0800DBB8(void) {
    u8 *p;
    sub_08033AF4(2);
    p = D_03002CF8;
    p[0xBA] = 4 | p[0xBA];
    D_03004830[0x2B]++;
}

void sub_0800DCCC(void) {
    u8 *actor = D_03003720;
    u32 v = 0xD98;
    u8 *state;
    *(u16 *)(actor + 2) = v;
    v = 0xFDBC;
    *(u16 *)(actor + 6) = v;
    sub_0803EE88(actor - 0x100);
    state = D_03004830;
    state[0x2C] = 0xD;
    state[0x2B]++;
}
