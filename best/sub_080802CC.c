void *sub_08084D04(u16, u8);

void *sub_080802CC(u8 *arg0)
{
    u16 i;

    arg0[0x5E] = 0;
    i = 4;
    while (i != 0) {
        s32 prev = i - 1;
        u8 *p = arg0 + 0x64;
        u8 *q = &p[prev];
        u8 val = *q;
        if (val != i) {
            u16 a = (val - 1) * 2;
            *q = i;
            return sub_08084D04(a, (u8)(prev * 2));
        }
        i = prev;
    }
    return 0;
}
