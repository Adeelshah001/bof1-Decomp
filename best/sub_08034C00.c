extern u8 D_03003F98;
extern u8 D_03002510[];
extern u8 D_030043BC;
extern u8 D_0822DF68[];

void sub_080379D4(s32);

void sub_08034B94(u8 *actor, const u8 *operand)
{
    D_03004830[0x2D] |= *operand;
    *(u32 *)(actor + 0x88) += 3;
}

void sub_08034BB0(u8 *actor)
{
    if (D_03004830[0x2D] & 8)
        *(u32 *)(actor + 0x88) += 2;
}

void sub_08034B60(u8 *actor)
{
    D_03003F98 |= 0x80;
    D_03002510[0x6C] = 0x12;
    sub_080379D4(0x12);
    *(u32 *)(actor + 0x88) += 2;
}

void sub_08034C00(u8 *actor, const u8 *operand)
{
    u16 offset = operand[2] | (operand[3] << 8);
    if (D_030043BC == 1)
        offset += 0x2A54;
    else if (D_030043BC == 2)
        offset += 0x41D3;
    *(const u8 **)(actor + 0x88) = D_0822DF68 + offset;
}
