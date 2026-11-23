extern u8 D_03004620[];
extern u8 sub_080FBCE6[];
extern u8 D_03004410[];
extern s32 (*const D_080FBB1C[])(void);
extern s32 (*const D_080FBAFC[])(void);
extern u8 D_0202DBD0[];

void sub_08043D34(void)
{
    void (**table)(void) = (void (**)(void))(sub_080FBCE6 + 0x6E);
    table[D_03004620[0xB2]]();
}

u8 sub_08044060(void)
{
    s32 (*const *table)(void) = D_080FBB1C;
    return table[D_03004410[0xC] >> 1]();
}

u8 sub_08044088(void)
{
    s32 (*const *table)(void) = D_080FBAFC;
    return table[D_03004410[0xA] >> 1]();
}

void sub_080440AC(void)
{
    u16 sum = 0;
    u16 i;
    u8 *base = D_0202DBD0;
    for (i = 2; i <= 0x4FA; i++) {
        sum += base[i];
    }
    *(u16 *)D_0202DBD0 = sum;
}
