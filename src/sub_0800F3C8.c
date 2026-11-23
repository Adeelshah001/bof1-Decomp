extern u8 D_0202DBD0[];

void sub_0800764C(s32);

void sub_0800F3C8(void)
{
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;
    u8 timer = --(*ptr);
    if (timer == 0)
    {
        u8 *arr = D_0202DBD0;
        arr[0x483] |= 0x10;
        *ptr = timer + 0x10;
        sub_0800764C(4);
        base[0x2B]++;
    }
}
