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
    u16 mapId, graphicsId;
    register u32 destination;
    s8 mode = state->mode;
    if (mode == 0) {
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
void sub_0803B228(void)
{
    MapGraphicsState *state = (MapGraphicsState *)D_03004830;
    if (state->mode == 6)
        sub_0803ADDC(0xB4, 0xFFFF);
}
typedef struct {
    u8 pad00[0x2B2];
    u8 unk2B2;
} MapProgress;

extern MapProgress D_0202DBD0;
u8 sub_08001770(u16);
void sub_0803B364(void)
{
    sub_0803ADDC(0x1F0, 0xFFFF);
    sub_0803ADDC(0x12C, 0xFFFF);
    if ((u8)(D_0202DBD0.unk2B2 - 2) > 2 && sub_08001770(0x42))
        sub_0803AF58(0x7E, 0xFFFF);
}
void sub_0803C108(void);
void sub_0803B46C(void)
{
    MapGraphicsState *state = (MapGraphicsState *)D_03004830;
    if (state->mode == 6) {
        sub_0803AF58(0x46, 0xFFFF);
        sub_0803ADDC(0x148, 0xFFFF);
    }
    sub_0803C108();
}
