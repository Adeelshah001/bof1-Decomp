extern u8 D_0202DBD0[];
extern const u8 D_08100690[];
extern const u8 *const D_08100694[];
void sub_0805CF40(s32, u16 *);
void sub_080017EC(s32);
void sub_0805BDE0(u8 state, u16 *first, u16 *second)
{
    u32 value;
    u32 next;
    if (!(state & 0x80)) {
        u8 *counter = D_03004830;
        counter += 0x40;
        ++*counter;
    }
    value = 0x285;
    *first = value;
    next = value - 2;
    *second = next;
}

void sub_0805BE10(u8 state, u16 *first, u16 *second)
{
    if (!(state & 0x80))
        goto finish;
    {
        u8 *counter = D_03004830;
        counter += 0x40;
        ++*counter;
    }
finish:
    *first = 0x286;
    *second = 0xFFFF;
}

void sub_0805BD20(u8 state, u16 *first, u16 *second)
{
    if (!(state & 0x80)) {
        u16 index;
        u16 *tiles;
        u32 location;
        u32 tile;
        sub_0805CF40(0x15D, &index);
        tiles = (u16 *)D_0202DBD0;
        location = index;
        tiles += 0x102;
        tile = 0x142;
        tiles[location] = tile;
        sub_080017EC(0x76);
    }
    *first = 0x25A;
    *second = 0x25C;
}

const u8 *sub_0805D984(u16 id)
{
    u16 value = id;
    if (id >> 8) {
        u32 group = 0x3000;
        u32 offset;
        const u8 *record;
        u32 mask;
        u32 recordFlags;
        group &= value;
        group >>= 12;
        offset = D_08100690[group];
        offset *= (u8)value;
        record = D_08100694[group] + offset;
        recordFlags = *(const vu8 *)(record + 8);
        mask = 0x40;
        mask &= recordFlags;
        if (!mask)
            return record;
        goto missing;
    }
missing:
    return NULL;
}
