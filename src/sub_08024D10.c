extern u8 D_03002AB0[];
extern u8 D_030023DC;
void sub_0802411C(s32, s32);
void sub_0800511C(s32, s32);

void sub_08024CFC(void)
{
    u8 *state = D_03004830;

    state[0x3F] = 0;
    state[0x40] = 0;
}

void sub_08024D10(void)
{
    sub_0802411C(0x4040, 0x180);
    D_03004830[0x40]++;
}

void sub_08024CE0(void)
{
    sub_0800511C(0, 1);
    D_03004830[0x40]++;
}

void sub_08024D34(void)
{
    D_03002AB0[0xB8] |= 8;
    if (D_030023DC != 1) {
        u8 *state = D_03004830;

        state[0x41] = 0x28;
        state[0x40]++;
    }
}
