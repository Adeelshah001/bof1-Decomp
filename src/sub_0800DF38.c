extern u8 D_03004830[];

void sub_0800764C(s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_08005274(s32);
void sub_080052C0(s32);
void sub_0809ED9C(s32);

void sub_0800DEE4(void)
{
    sub_0800764C(0x08);
    D_03004830[0x2C] = 0x78;
    D_03004830[0x2B]++;
}

void sub_0800DF08(void)
{
    sub_0800312C(0x10, 0x06);
    sub_08001F80(0, 0, 0);
    D_03004830[0x2C] = 0x0A;
    D_03004830[0x2B]++;
}

void sub_0800DF38(void)
{
    if ((s8)D_03004830[0x2C] == 0x14)
        sub_08005274(1);
    if (--D_03004830[0x2C] == 0)
        D_03004830[0x2B]++;
}

void sub_0800DF70(void)
{
    sub_0809ED9C(3);
    sub_080052C0(7);
    D_03004830[0x2C] = 0x7A;
    D_03004830[0x2B]++;
}
