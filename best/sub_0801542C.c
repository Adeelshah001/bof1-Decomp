extern u8 D_030023DC[];
extern u8 D_03002AB0[];
void sub_0800518C(s16, s16, s16);
void sub_080017EC(u16);
void sub_08007494(void);
u8 sub_08038458(u8);
void sub_080073D8(s16);

void sub_080153A4(void)
{
    if (D_030023DC[0] != 1) {
        sub_0800518C(0x11F, 0x16B8, -0x984);
        sub_080017EC(0x94);
        D_03004830[0x2B]++;
    }
}

void sub_0801542C(void)
{
    u8 *actor = D_03002AB0;
    u8 flags = actor[0xB8];

    flags &= ~0x40;
    flags &= ~0x04;
    actor[0xB8] = flags;
    D_03004830[0x2B]++;
}

void sub_08015450(void)
{
    if (sub_08038458(1)) {
        sub_08007494();
        D_03004830[0x2B]++;
    }
}

void sub_08015474(void)
{
    u8 *actor;

    sub_080073D8(0x72);
    actor = D_03002AB0;
    if (*(u16 *)(actor + 2) != 0x16B8)
        (*(u32 *)(actor + 0x88))++;
    D_03004830[0x2B]++;
}
