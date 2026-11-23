extern void (*const D_080FB004[])(void);
void sub_0803B120(u16 index)
{
    D_080FB004[index]();
}

extern void (*const D_080FB7C4[])(void);
void sub_0803ADDC(u16, u16);
void sub_0803B138(void)
{
    void (*const *handlers)(void);
    u8 *state;
    sub_0803ADDC(0x1B0, 0xFFFF);
    sub_0803ADDC(0x160, 0xFFFF);
    sub_0803ADDC(0xE8, 0xFFFF);
    sub_0803ADDC(0x1F4, 0xFFFF);
    sub_0803ADDC(0x238, 0xFFFF);
    handlers = D_080FB7C4;
    state = D_03004830;
    handlers[(s8)state[0x31]]();
}

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
    if (state->mode == 0 && state->mapId == 0x1F0B)
        sub_0803AF58(0x4D, 0xFFFF);
    sub_0803ADDC(0x1BC, 0xFFFF);
    sub_0803ADDC(0x54, 0xFFFF);
    sub_0803ADDC(0x58, 0xFFFF);
}

s32 sub_0803B02C(u16 index)
{
    s32 offset, base;
    u16 block;
    u32 tile;
    if ((u32)index <= 0x3FFF) {
        offset = index * 2;
        base = 0x06004000;
    } else {
        block = index - 0x4000;
        if ((u32)block <= 0xBFE) {
            offset = block * 4;
            base = 0x0600C000;
        } else {
            tile = (u16)(index - 0x6000);
            offset = (((tile >> 8) << 9) + (tile & 0xFF)) * 2;
            base = 0x06010000;
        }
    }
    return offset + base;
}
