extern u8 D_03004830[];
extern u8 D_03002AB0[];
void sub_080017EC(s32);

void sub_08011BEC(void)
{
    sub_080017EC(0x64);
}

void sub_08011C10(void)
{
    u8 *p;
    u8 *q;
    u8 zero;

    p = D_03004830;
    q = p + 0x2A;
    zero = 0;
    *q = 0x13;
    p[0x2B] = zero;
}

void sub_08011BB4(void)
{
    D_03002AB0[0xB8] |= 4;
}

void sub_08011C28(void)
{
    u8 *p;
    u8 *q;
    u8 zero;

    sub_080017EC(0xDF);
    p = D_03004830;
    q = p + 0x2A;
    zero = 0;
    *q = 0x12;
    p[0x2B] = zero;
}
