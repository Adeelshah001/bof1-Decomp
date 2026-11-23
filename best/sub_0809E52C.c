void sub_0809E510(u32 unused0, u32 unused1, const vu8 *ptr)
{
    (void)*ptr;
}

u32 sub_0809E512(u32 unused0, u32 unused1, const void *ptr, u32 value)
{
    if ((u32)ptr < 0x02000000)
        value = 0;
    return value;
}

void sub_0809E4F8(u32 *dst)
{
    const u32 *src = (const u32 *)0x080BB03C;
    s32 count = 0x24;
    do {
        *dst++ = sub_0809E512(0, count, src, *src);
        ++src;
    } while (--count > 0);
}

void sub_0809E52C(u32 unused, const vu32 *reader)
{
    (void)reader[0x10];
}
