extern u8 D_03002AB0[];
extern u8 D_0300166C;
extern u8 D_03001674;
extern u8 D_03001698;
extern u8 D_030016A4;

void sub_0800518C(s32, s32, s32);
u8 sub_0801D9C0(s32, s32, s32);
void sub_0800F85C(s32);
void sub_08024008(s32);
void sub_0802411C(s32, s32);

void sub_0801F624(void)
{
    u8 *p = D_03004830;
    u8 *q = p + 0x2A;
    u8 zero = 0;

    *q = 0x15;
    p[0x2B] = zero;
}

void sub_0801F63C(void)
{
    sub_0800518C(0xCD, 0x1AD8, 0x671C);
    D_03001698 = 8;
    D_03001674 = 8;
    D_0300166C = 0x20;
    D_030016A4 = 0x20;
    D_03004830[0x2B]++;
}

void sub_0801F5F4(void)
{
    if (sub_0801D9C0(0, 0, -1) == 0)
    {
        D_03004830[0x2B] = (D_03004830[0x2B] | -0x80) + 1;
    }
}

void sub_0801F688(void)
{
    sub_0800F85C(8);
    D_03002AB0[0xB8] |= 0x80;
    sub_08024008(0x6C);
    sub_0802411C(0x40C0, 0x1A0);
    D_03004830[0x2B] |= -0x80;
}
