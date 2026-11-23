extern u8 D_0202DBD0[];
extern u16 D_03004E0C;
extern u8 D_0300097A;
extern void sub_0803D630(void);

void sub_0803D868(void) {
    u8 *state = D_0202DBD0;
    u16 v;
    state[0x4FE] = 1;
    D_0300097A = 0x18;
    D_03004E0C = v = 0x74;
    v = 0;
    *(u16 *)(state + 0x28E) = 0x74;
    sub_0803D630();
}
