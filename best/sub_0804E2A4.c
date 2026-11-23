s32 sub_0804E2A4(u32 raw)
{
    u32 flags = (u8)raw;
    u8 saved = flags;
    u32 test;
    test = flags & 0x80;
    if (test)
        return 6;
    test = 0x40;
    test &= flags;
    if (test)
        return 4;
    saved &= 0x20;
    if (!saved)
        goto no_direction;
    return 2;
no_direction:
    return 0;
}
