extern u16 D_03004E08;
extern u16 D_03004E0C;
extern u16 D_03004E18;
void sub_0803D510(void);
void sub_080275F4(void);

void sub_08027860(void) {
    u8 *state = D_03004830;
    u8 *p = state + 0x41;
    s32 zero = 0;

    *p = 0x10;
    D_03004E18 = zero;
    D_03004E08 = 0x7F01;
    D_03004E0C = 0x68A5;
    sub_0803D510();
    state[0x42] = zero;
    state[0x40]++;
    sub_080275F4();
}
