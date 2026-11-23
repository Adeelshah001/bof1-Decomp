extern void sub_08006404(s32);

void sub_08009200(void)
{
    u8 *base = D_03004830;
    if ((s8)base[0x2D] != 0) {
        u8 *timer = base + 0x2C;
        *timer = 120;
        --timer;
        ++*timer;
    }
}

void sub_08009228(void)
{
    u8 *base = D_03004830;
    if ((s8)base[0x2C] < 0) {
        u8 *state;
        sub_08006404(2);
        state = base + 0x2D;
        *state = 0;
        state -= 2;
        ++*state;
    }
}

void sub_080091CC(void)
{
    u8 *base = D_03004830;
    if ((s8)base[0x2C] < 0) {
        u8 *state;
        sub_08006404(1);
        state = base + 0x2D;
        *state = 0;
        state -= 2;
        ++*state;
    }
}

void sub_080091B4(void)
{
    u8 *base = D_03004830;
    base[0x2C] = 120;
    ++base[0x2B];
}
