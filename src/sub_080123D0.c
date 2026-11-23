extern u8 D_03004830[];
extern u8 D_03002AB0[];

void sub_080123A0(Entity *arg0)
{
    D_03002AB0[0xB8] |= 0x40;
    arg0->unk68 += 2;
}

void sub_080123D0(Entity *arg0)
{
    u8 *ptr = (u8 *)arg0->unk68;
    u8 c = ptr[2];

    if (((s8)D_03004830[0x2D] & c) == 0) {
        D_03004830[0x2D] |= c;
        arg0->unk68 = (u32)(ptr + 3);
    }
}
