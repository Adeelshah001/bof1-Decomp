void sub_08004EA0(s32);

void sub_08011538(void)
{
    u8 *p = D_03004830;
    s32 val = (s8)p[0x2D];
    if (val == 0) {
        sub_08004EA0(0x82C7);
        p[0x2B]++;
    }
}
