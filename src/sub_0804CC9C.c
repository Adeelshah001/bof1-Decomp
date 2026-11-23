extern const u8 D_0822F5B8[];
void sub_0804D7EC(u8 *, s32, s32);
void sub_0804BC8C(u8 *, s32);

void sub_0804CBC8(u8 *actor)
{
    u16 offset = D_0822F5B8[0x24] | (D_0822F5B8[0x25] << 8);
    *(u16 *)(actor + 0xA6) = offset;
    sub_0804D7EC(actor, 0x16B8, 0xF67C);
    sub_0804BC8C(actor, 0);
}

void sub_0804CC1C(u8 *actor)
{
    u16 offset = D_0822F5B8[0x26] | (D_0822F5B8[0x27] << 8);
    *(u16 *)(actor + 0xA6) = offset;
    sub_0804D7EC(actor, 0x1628, 0xF66C);
    sub_0804BC8C(actor, 0);
}

void sub_0804CC5C(u8 *actor)
{
    u16 offset = D_0822F5B8[0x28] | (D_0822F5B8[0x29] << 8);
    *(u16 *)(actor + 0xA6) = offset;
    sub_0804D7EC(actor, 0x1668, 0xF5DC);
    sub_0804BC8C(actor, 1);
}

void sub_0804CC9C(u8 *actor)
{
    u16 offset = D_0822F5B8[0x28] | (D_0822F5B8[0x29] << 8);
    *(u16 *)(actor + 0xA6) = offset;
    sub_0804D7EC(actor, 0x1678, 0xF5EC);
    sub_0804BC8C(actor, 1);
}
