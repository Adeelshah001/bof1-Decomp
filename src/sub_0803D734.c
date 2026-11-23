extern u8 D_0202DBD0[];
extern void (*D_080FB844[])(void);
extern u16 D_03004E18, D_03004E14, D_03004E08, D_03004E0C;
extern u8 D_0300097A;
extern void sub_0803D630(void);
void sub_0803D734(void) {
    void (**handlers)(void) = D_080FB844;
    u8 *state = D_0202DBD0;
    handlers[state[0x4FE]]();
}
void sub_0803D6C4(void) {
    u8 *state = D_0202DBD0;
    D_03004E18 = *(u16 *)(state + 0x288);
    D_03004E14 = *(u16 *)(state + 0x28C);
    D_03004E08 = *(u16 *)(state + 0x28A);
    D_03004E0C = *(u16 *)(state + 0x28E);
}
void sub_0803D678(void) {
    u8 *state = D_0202DBD0;
    D_03004E18 = *(u16 *)(state + 0x288) = 0x7F01;
    D_03004E08 = D_03004E0C = 0;
    *(u16 *)(state + 0x28A) = 0;
    *(u16 *)(state + 0x28E) = 0;
}
void sub_0803D824(void) {
    u8 *state = D_0202DBD0;
    state[0x4FE] = 1;
    D_0300097A = 0x20;
    D_03004E0C = 0x10B4;
    *(u16 *)(state + 0x28E) = 0x10B4;
    sub_0803D630();
}
