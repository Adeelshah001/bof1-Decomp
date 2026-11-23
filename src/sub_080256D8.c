extern u8 D_030040E4;
u8 sub_08033420(void);

void sub_080256D8(void)
{
    if (sub_08033420() != 0)
    {
        u8 *p;
        u8 *q;
        u8 zero;

        D_030040E4 |= 0x80;
        p = D_03004830;
        q = p + 0x41;
        zero = 0;
        *q = zero;
        p[0x40]++;
    }
}
