extern u8 D_030023DC[];
extern u32 D_03002AB0[];
extern void sub_08007588(s32, s32);

void sub_08007DF0(void)
{
    if (*(u8 *)0x030023DC != 1) {
        u8 *state = (u8 *)0x03004830;
        state[0x2C] = 0x40;
        state[0x2B]++;
    }
}

void sub_08007E14(void)
{
    u8 *state = (u8 *)0x03004830;
    s8 *flag = (s8 *)(state + 0x2C);
    if (*flag == 0) {
        u32 *table;
        u32 event;
        *flag = 0x40;
        event = 0x80F6;
        state[0x2B]++;
        table = (u32 *)0x03002AB0;
        table[0x25] = event;
        *(u8 *)0x030023D0 = 2;
    }
}

void sub_08007E50(void)
{
    u8 *state = (u8 *)0x03004830;
    s8 flag = (s8)state[0x2C];
    if (flag == 0) {
        u32 *table;
        u32 event = 0x80F7;
        state[0x2B]++;
        table = (u32 *)0x03002AB0;
        table[0x25] = event;
        *(u8 *)0x030023D0 = 2;
    }
}

