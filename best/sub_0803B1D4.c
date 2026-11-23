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
    u32 destination;
    u16 mapId, graphicsId;
    if (state->mode == 0) {
        destination = 0xFFFF;
        mapId = state->mapId;
        if (mapId == 0x1F0B)
            sub_0803AF58(0x4D, destination);
    }
    graphicsId = 0x1BC;
    destination = 0xFFFF;
    sub_0803ADDC(graphicsId, destination);
    sub_0803ADDC(0x54, destination);
    sub_0803ADDC(0x58, destination);
}
