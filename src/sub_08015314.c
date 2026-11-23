void sub_080075BC(s32);
void sub_08007494(void);
void sub_080074C4(void);
void sub_080074E4(void);
void sub_080074F4(void);
void sub_08013B8C(void);
void sub_080379D4(s32);

void sub_08015314(void)
{
    u8 *state = D_03004830;
    state[0x2C] = 64;
    state[0x2B]++;
}

void sub_080152E4(void)
{
    u16 *actor = (u16 *)D_03003420;
    actor[1] = 0xD38;
    actor[3] = 0xA5C;
    actor[0x16] = 0xA5C - 0x20;
    sub_08007494();
    sub_080075BC(0x83F3);
}

void sub_08015344(void)
{
    sub_080075BC(0x83F4);
    sub_080074C4();
    sub_080074E4();
    sub_080074F4();
    D_03004830[0x2C] = 64;
}

void sub_080152B0(void)
{
    u16 *actor = (u16 *)D_03003420;
    actor[1] += 2;
    actor[3] -= 2;
    if ((s8)D_03004830[0x2C] == 0x48)
        sub_080379D4(8);
    sub_08013B8C();
}
