extern u8 D_03004168;
void sub_08004EA0(s32);

void sub_08025604(void)
{
    u8 *p = D_03004830;
    u32 cnt = p[0x41];
    u8 rem;

    cnt--;
    p[0x41] = cnt;
    rem = cnt;
    if (rem == 0)
    {
        sub_08004EA0(0x81EB);
        D_03004168 = rem;
        p[0x40]++;
    }
}
