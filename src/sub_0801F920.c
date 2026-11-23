extern u8 D_03004830[];
extern u8 D_03002AB0[];
void sub_0800518C(s32 arg0, s32 arg1, s32 arg2);
void sub_0803D3B8(s32 arg0);
void sub_08024008(s32 arg0);
void sub_0802411C(s32 arg0, s32 arg1);

void sub_0801F920(void)
{
    u8 *p = D_03004830;
    u8 *q = p + 0x2A;
    u8 zero = 0;

    *q = 0x1A;
    p[0x2B] = zero;
}

void sub_0801F938(void)
{
    sub_0803D3B8(4);
    sub_0800518C(0, 0x1068, 0x85C);
    D_03004830[0x2B]++;
}

void sub_0801F8E0(void)
{
    D_03002AB0[0xB8] |= 0x80;
    sub_0802411C(0x40A0, 0x1C0);
    sub_08024008(0x74);
    D_03004830[0x2B] |= -0x80;
}

void sub_0801F964(void)
{
    D_03002AB0[0xB8] |= 0x80;
    sub_08024008(0x76);
    D_03004830[0x2B] |= -0x80;
}
