extern u8 D_03002AB0[];
extern u8 D_03002BD4[];

void sub_08034DF8(u8 *actor)
{
    D_03004830[0x2D]++;
    *(u32 *)(actor + 0x88) += 2;
}

void sub_08034E10(u8 *actor)
{
    u8 *actors = D_03002BD4;

    (*(u32 *)(actors + 0x88))++;
    (*(u32 *)(actors + 0x124 + 0x88))++;
    (*(u32 *)(actors + 2 * 0x124 + 0x88))++;
    *(u32 *)(actor + 0x88) += 2;
}

void sub_08034E5C(u8 *actor, const u8 *operand)
{
    u8 *state = D_03004830;
    u8 value = *operand;

    state[0x2D] = value;
    *(u32 *)(actor + 0x88) += 3;
}

void sub_08034E8C(u8 *actor)
{
    D_03002AB0[0xB8] ^= 0x40;
    *(u32 *)(actor + 0x88) += 2;
}
