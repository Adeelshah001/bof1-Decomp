extern u16 D_030040F4;
extern u16 D_030033D4;
extern u8 D_03003410;
extern u32 D_030040F0;
extern u32 D_03004EE0;
extern u16 D_03001670;

void sub_08083BB4(u8 *state);
void sub_0808E778(u8 *state);

void sub_0808E6F8(u8 *state) {
    u16 *p40F4 = &D_030040F4;
    if ((u16)(*p40F4 - 0x100) > 0xD0) {
        sub_0808E778(state);
        return;
    }
    sub_08083BB4(state);
    {
        u8 *p = state + 0x54;
        u32 zero = 0;
        *p = 0x1F;
        D_030033D4 = zero;
        *p40F4 = zero;
        D_03003410 = 0;
        D_030040F0 = zero;
        D_03004EE0 = 1;
        D_03001670 &= 0xFBFF;
        state[0x4D] = 0x14;
    }
}
