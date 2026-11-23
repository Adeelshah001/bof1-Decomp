extern u8 gEntityPool[];
void sub_08021A28(s32, s32);
void sub_0803EE6C(void *);

void sub_08021560(void)
{
    u8 *p = D_03004830;
    p[0x2D] = 0x10;
    p[0x2B]++;
}

void sub_08021534(void)
{
    u8 *p = D_03004830;
    u8 *q = p + 0x2D;

    *q = 0;
    sub_08021A28(1, 0x76);
    *q = 0x10;
    p[0x2B]++;
}

void sub_08021590(void)
{
    u8 *p = D_03004830;
    if ((s8)p[0x2C] < 0)
    {
        u8 *q = p + 0x2A;
        u8 zero = 0;
        *q = 6;
        p[0x2B] = zero;
    }
}

void sub_08021510(void)
{
    u8 *p = gEntityPool;
    sub_0803EE6C(p);
    sub_0803EE6C(p + 0xE0);
    sub_08021560();
}
