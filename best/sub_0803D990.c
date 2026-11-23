extern u8 D_0202DBD0[];
extern u16 D_03004E0C;
extern u8 D_0300097A;
extern void sub_0803D630(void);

void sub_0803D868(void) {
    u8 *state = D_0202DBD0;
    state[0x4FE] = 1;
    D_0300097A = 0x18;
    *(u16 *)(state + 0x28E) = D_03004E0C = 0x74;
    sub_0803D630();
}

void sub_0803D990(void) {
    u8 *state = D_0202DBD0;
    u16 *p0C;
    u16 v;
    state[0x4FE] = 1;
    D_0300097A = 0x3C;
    p0C = &D_03004E0C;
    v = 0x1CA0;
    *p0C = v;
    v = 0;
    *(u16 *)(state + 0x28E) = 0x1CA0;
    sub_0803D630();
}
