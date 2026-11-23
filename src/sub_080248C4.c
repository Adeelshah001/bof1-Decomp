extern u8 D_03002AB0[];
void sub_08023FD8(u8);
u8 sub_08038458(u8);
s32 sub_080274FC(void);

void sub_080248E4(void)
{
    sub_08023FD8(0x4A);
    D_03004830[0x40]++;
}

void sub_080248C4(void)
{
    if (sub_08038458(1))
        D_03004830[0x40]++;
}

void sub_0802490C(void)
{
    u8 *step;
    u8 value;

    D_03002AB0[0xB8] &= 0xBF;
    sub_080274FC();
    step = D_03004830 + 0x40;
    value = *step;
    if (value != 0)
        *step = value + 1;
}

void sub_080248A0(void)
{
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
}
