extern u8 D_03004620[];
extern u8 sub_080FBCE6[];
extern u8 D_0202DBD0[];

s32 sub_08043D34(void)
{
    s32 (**table)(void) = (s32 (**)(void))(sub_080FBCE6 + 0x6E);
    return table[D_03004620[0xB2]]();
}

void sub_080440AC(void)
{
    u16 sum = 0;
    u16 i;
    for (i = 2; i <= 0x4FA; i++) {
        sum += D_0202DBD0[i];
    }
    *(u16 *)D_0202DBD0 = sum;
}
