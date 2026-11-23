extern u8 D_03002AB0[];
extern u8 D_0202DBD0[];

void sub_0800764C(s32);

void sub_0800F410(void)
{
    s32 timer = (s8)--D_03004830[0x2C];
    if (timer == 0)
    {
        D_03002AB0[0xB8] &= ~4;
        D_03004830[0x2A] = timer;
        D_03004830[0x2B] = timer;
    }
}

void sub_0800F3C8(void)
{
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;
    u8 timer = --(*ptr);
    if (timer == 0)
    {
        u8 *p = &D_0202DBD0[0x483];
        *p = *p | 0x10;
        *ptr = 0x10;
        sub_0800764C(4);
        base[0x2B]++;
    }
}

void sub_0800F380(void)
{
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;
    u8 timer = --(*ptr);
    if (timer == 0)
    {
        u8 *p = &D_0202DBD0[0x483];
        *p = *p | 0x48;
        *ptr = 0x10;
        sub_0800764C(4);
        base[0x2B]++;
    }
}
