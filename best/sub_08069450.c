s32 sub_08069464(void *unused, s32 kind)
{
    if (kind != 3)
        return 0;
    return 1;
}

s32 sub_08069470(void *unused, s32 kind)
{
    if (kind != 4)
        return 0;
    return 1;
}

s32 sub_08069450(void *unused, s32 kind, u32 flags)
{
    if (kind == 2 && !(4 & flags))
        return 1;
    return 0;
}

s32 sub_0806947C(void *unused, s32 kind)
{
    if (kind != 5)
        return 0;
    return 1;
}
