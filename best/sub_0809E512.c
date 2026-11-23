typedef struct {
    u8 pad00[0x40];
    const u8 *cursor;
} ScriptReader;

static inline u32 FilterScriptRead(const void *ptr, u32 value)
{
    u32 address = (u32)ptr;
    if (!(address >> 25) && (address < 0x080BB03C || (address >> 14)))
        value = 0;
    return value;
}

u32 sub_0809E510(u32 unused, void *reader, const u8 *ptr)
{
    return FilterScriptRead(ptr, *ptr);
}

u32 sub_0809E512(u32 unused, void *reader, const void *ptr, u32 value)
{
    return FilterScriptRead(ptr, value);
}

void sub_0809E4F8(u32 *dst)
{
    const u32 *src = (const u32 *)0x080BB03C;
    s32 count = 0x24;
    do {
        *dst++ = FilterScriptRead(src, *src);
        ++src;
    } while (--count > 0);
}

u32 sub_0809E52C(u32 unused, ScriptReader *reader)
{
    const u8 *ptr = reader->cursor;
    reader->cursor = ptr + 1;
    return FilterScriptRead(ptr, *ptr);
}
