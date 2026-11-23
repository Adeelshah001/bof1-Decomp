extern u16 D_03004120[];
extern u8 D_030023DC[];
void sub_080138CC(void);
void sub_08013894(void);
void sub_080138A8(void);
void sub_080017EC(s32);
void sub_0800421C(s32, s32, s32);

void sub_08015768(void)
{
    sub_080138CC();
    sub_08013894();
    D_03004830[0x2B]++;
}

void sub_08015784(void)
{
    D_03004120[0] = 2;
    sub_0800421C(0x11F, 0x16B8, -0x944);
    D_03004830[0x2B]++;
}

void sub_080157B8(void)
{
    u8 *state = D_03004830;

    if (D_030023DC[0] != 1) {
        state[0x2C] = 32;
        state[0x2B]++;
    }
}

void sub_08015700(void)
{
    sub_080017EC(0x95);
    sub_080138A8();
    D_03004830[0x2B]++;
}
