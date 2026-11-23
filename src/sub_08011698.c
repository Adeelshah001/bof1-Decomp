extern u8 D_03002AB0[];
void sub_08003378(s32);
void sub_08024008(s32);
void sub_080017EC(s32);
void sub_0800F820(void);
void sub_080104D8(void);
void sub_0800518C(s32, s32, s32);

void sub_08011678(void)
{
    sub_08003378(0x40);
    sub_08024008(0x1A);
    D_03004830[0x2B]++;
}

void sub_08011698(void)
{
    u8 *state = D_03004830;
    if (((s8)state[0x2D] & 0x80) != 0) {
        sub_080017EC(0x7B);
        sub_0800F820();
        sub_0800518C(0, 0xBA8, 0xA3C);
        state[0x2B]++;
    }
}

void sub_08011630(void)
{
    u8 *state = D_03004830;
    if (8 & state[0x2D]) {
        u8 *actor;
        sub_080104D8();
        actor = D_03002AB0;
        actor[0xB8] = 4;
        sub_0800518C(0xBB, 0x1E8, -0x5DA4);
        state[0x2B]++;
    }
}

void sub_080116E0(void)
{
    u8 *state = D_03004830;
    if ((s8)state[0x2D] == 1)
        state[0x2B]++;
}
