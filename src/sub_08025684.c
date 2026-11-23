extern u8 D_030040E4[];
void sub_080017EC(s32);
void sub_08023FD8(s32);
void sub_08007588(s32, s32);
u8 sub_08033420(void);

void sub_08025660(void)
{
    sub_080017EC(0x1C);
    D_03004830[0x40]++;
    sub_08023FD8(0x7A);
}

void sub_08025684(void)
{
    sub_08007588(0x1758, 0xFFFFD15C);
    D_03004830[0x40]++;
}

void sub_080256D8(void)
{
    if (sub_08033420() != 0)
    {
        u8 *p;
        D_030040E4[0] |= 0x80;
        p = D_03004830;
        p[0x41] = 0;
        p[0x40]++;
    }
}
