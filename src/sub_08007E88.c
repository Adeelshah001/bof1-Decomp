extern u8 D_030023DC[];
extern u32 D_03002AB0[];
extern void sub_08007588(s32, s32);

void sub_08007DF0(void)
{
    if (D_030023DC[0] != 1) {
        u8 *state = D_03004830;
        state[0x2C] = 0x40;
        state[0x2B]++;
    }
}

void sub_08007E14(void)
{
    u8 *state = D_03004830;
    s8 *flag = (s8 *)(state + 0x2C);
    if (*flag == 0) {
        u32 event;
        *flag = 0x40;
        event = 0x80F6;
        state[0x2B]++;
        D_03002AB0[0x25] = event;
        D_030023D0[0] = 2;
    }
}

void sub_08007E50(void)
{
    u8 *state = D_03004830;
    s8 flag = (s8)state[0x2C];
    if (flag == 0) {
        u32 event = 0x80F7;
        state[0x2B]++;
        D_03002AB0[0x25] = event;
        D_030023D0[0] = 2;
    }
}

void sub_08007E88(void)
{
    u8 *state;
    sub_08007588(0x298, 0x215C);
    sub_08007588(0x278, 0x217C);
    state = D_03004830;
    state[0x2C] = 0x67;
    state[0x2B]++;
}
