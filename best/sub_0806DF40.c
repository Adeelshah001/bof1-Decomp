void sub_0806DF40(u8 *actor)
{
    u8 *base;
    u8 flags = 0xF0 & actor[0x7D];
    actor[0x7D] = flags;
    base = D_03003420;

    if (actor >= base && actor < (u8 *)((u32)base + 0xB68))
        flags |= 1;
    actor[0x7D] = flags;
    actor[0xE0] = 2;
    actor[0xE2] &= 0xF0;
}
