extern u8 D_0202DBD0[];
extern void (*D_080FB880[])(void);
extern u16 D_03004E18, D_03004E14, D_03004E08, D_03004E0C;
extern u8 D_0300097A;
extern void sub_0803D630(void);

void sub_0803D7FC(void) {
    void (**handlers)(void) = D_080FB880;
    u8 *state = D_0202DBD0;
    handlers[state[0x4FE]]();
}

void sub_0803D868(void) {
    u8 *state = D_0202DBD0;
    state[0x4FE] = 1;
    D_0300097A = 0x18;
    D_03004E0C = 0x74;
    *(u16 *)(state + 0x28E) = 0x74;
    sub_0803D630();
}

void sub_0803D8A8(void) {
    u8 *state = D_0202DBD0;
    u32 zero;
    u16 *p08;
    u16 *p0C;
    state[0x4FE] = (zero = 0) + 1;
    D_0300097A = 0x18;
    p08 = &D_03004E08;
    p0C = &D_03004E0C;
    D_03004E18 = D_03004E14 = zero;
    *(u16 *)(state + 0x288) = zero;
    *(u16 *)(state + 0x28C) = zero;
    *p0C = zero;
    *p08 = zero;
}

void sub_0803D990(void) {
    u8 *state = D_0202DBD0;
    state[0x4FE] = 1;
    D_0300097A = 0x3C;
    D_03004E0C = 0x1CA0;
    *(u16 *)(state + 0x28E) = 0x1CA0;
    sub_0803D630();
}
