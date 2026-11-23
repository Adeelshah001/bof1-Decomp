extern u8 D_0202DBD0[];
extern const u8 D_08100690[];
extern const u8 *const D_08100694[];
void sub_0805CF40(s32, u16 *);
void sub_080017EC(s32);
void sub_0805BDE0(u8 state, u16 *first, u16 *second)
{
    u32 value;
    if (!(state & 0x80)) {
        u8 *counter = D_03004830;
        counter += 0x40;
        ++*counter;
    }
    value = 0x285;
    *first = value;
    value -= 2;
    *second = value;
}

void sub_0805BE10(u8 state, u16 *first, u16 *second)
{
    if (state & 0x80) {
        u8 *counter = D_03004830;
        counter += 0x40;
        ++*counter;
    }
    *first = 0x286;
    *second = 0xFFFF;
}

void sub_0805BD20(u8 state, u16 *first, u16 *second)
{
    if (!(state & 0x80)) {
        u16 index;
        u8 *tiles;
        u32 offset;
        sub_0805CF40(0x15D, &index);
        tiles = D_0202DBD0;
        offset = index << 1;
        tiles += 0x204;
        *(u16 *)(offset + (u32)tiles) = 0x142;
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
        group &= value;
        group >>= 12;
        offset = D_08100690[group];
        offset *= (u8)value;
        record = D_08100694[group] + offset;
        mask = 0x40;
        mask &= record[8];
        if (!mask)
            return record;
    }
    return NULL;
}
