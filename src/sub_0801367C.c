extern u8 D_03002AB0[];
extern u16 D_03004114;

void sub_080137AC(Entity *actor, u16 delta)
{
    u8 *data = (u8 *)actor;
    u32 x = delta + *(u16 *)(data + 2);

    *(u16 *)(data + 2) = x;
    *(u16 *)(data + 0x46) = x;
    actor->unk68 += 2;
}

void sub_0801369C(u16 arg0)
{
    D_03004830[0x2A] = arg0;
    D_03004830[0x2B] = arg0 >> 8;
    D_03002AB0[0xB8] |= 4;
    D_03004114 = 1;
}

void sub_0801367C(void)
{
    D_03002AB0[0x4D] = 0;
    *(u16 *)(D_03002AB0 + 0x50) = 0;
    D_03004114 = 1;
}

void sub_0801365C(u16 arg0)
{
    D_03004830[0x2A] = arg0;
    D_03004830[0x2B] = arg0 >> 8;
    sub_0801367C();
}
