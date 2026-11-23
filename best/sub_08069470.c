u8 sub_08069464(void *unused, s32 kind)
{
    u8 allowed;

    if (kind != 3)
        allowed = 0;
    else
        allowed = 1;
    return allowed;
}

u8 sub_08069470(void *unused, s32 kind)
{
    u8 allowed;

    if (kind != 4)
        allowed = 0;
    else
        allowed = 1;
    return allowed;
}

u8 sub_08069450(void *unused, s32 kind, u32 flags)
{
    u8 allowed;

    if (kind == 2 && !(4 & flags))
        allowed = 1;
    else
        allowed = 0;
    return allowed;
}

u8 sub_0806947C(void *unused, s32 kind)
{
    u8 allowed;

    if (kind != 5)
        allowed = 0;
    else
        allowed = 1;
    return allowed;
}
