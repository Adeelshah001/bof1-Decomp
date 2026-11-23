typedef struct {
    u8 pad00[0x2A];
    u16 mapId;
    u8 pad2C[5];
    s8 mode;
} MapGraphicsState;

void sub_0803ADDC(u16, u16);
void sub_0803AF58(u16, u16);
void sub_0803B1D4(void)
{
    MapGraphicsState *state = (MapGraphicsState *)D_03004830;
    if (state->mode == 0) {
        u32 destination = 0xFFFF;
        u32 mapId = state->mapId;
        if (mapId == 0x1F0B)
            sub_0803AF58(0x4D, destination);
    }
    sub_0803ADDC(0x1BC, 0xFFFF);
    sub_0803ADDC(0x54, 0xFFFF);
    sub_0803ADDC(0x58, 0xFFFF);
}
s32 sub_0803B02C(u32 arg)
{
    u32 index = (u16)arg;
    s32 offset, base;
    u32 block;
    u32 tile, row, column;
    if ((u32)index <= 0x3FFF) {
        offset = index * 2;
        base = 0x06004000;
    } else {
        block = (u16)(index - 0x4000);
        if ((u32)block <= 0xBFE) {
            offset = block * 4;
            base = 0x0600C000;
        } else {
            tile = (u32)(index - 0x6000) << 16;
            row = (tile >> 24) << 9;
            column = 0xFF0000;
            column &= tile;
            offset = (row + (column >> 16)) * 2;
            base = 0x06010000;
        }
    }
    return offset + base;
}
