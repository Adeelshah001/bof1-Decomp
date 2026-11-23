extern u16 D_030040F8;
extern u8 D_03002CF8[];
void sub_08037A74(s32);
void sub_0800D2BC(void);
void sub_08033AF4(s32);
void sub_08004EA0(s32);

void sub_0800DDDC(void)
{
    sub_08037A74(0x100);
    D_03004830[0x2B]++;
}

void sub_0800DD5C(void)
{
    u8 *state;
    D_030040F8 = 14;
    sub_0800D2BC();
    state = D_03004830;
    state[0x2D] = 0;
    state[0x2C] = 3;
    state[0x2B]++;
}

void sub_0800DD0C(void)
{
    sub_08033AF4(2);
    D_03002CF8[0xBA] |= 4;
    D_03004830[0x2B]++;
}

void sub_0800DEC4(void)
{
    sub_08004EA0(0x8171);
    D_03004830[0x2B]++;
}
