extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern void sub_08019D0C(void);

void sub_0801861C(void) {
    u8 *base;
    u8 state_byte;
    s8 state_val;
    u32 counter;

    base = D_03004830;
    state_byte = base[0x2B];
    state_val = (s8)base[0x2B];
    if (state_val != 0) {
        sub_08019D0C();
    }
    if (state_val == 0) {
        counter = base[0x2C];
        counter--;
        base[0x2C] = counter;
        if ((u8)counter == 0) {
            D_03002AB0[0xB8] &= ~0x04;
            base[0x2B] = state_byte + 1;
        }
    }
}
