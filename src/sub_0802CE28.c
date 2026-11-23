extern u8 D_03002AB0[];
extern u8 D_0202DBD0[];
extern const u8 D_080FA05C[];

typedef struct {
    u16 unk00;
    u16 x;
    u16 unk04;
    u16 y;
} ActorPosition;

typedef struct {
    u8 pad00[0x0E];
    u16 returnX;
    u8 pad10[2];
    u16 returnY;
    u8 pad14[0x286 - 0x14];
    u16 returnMap;
} MapSaveFields;

void sub_0802CE28(u16 nextMap, u16 previousMap)
{
    const u8 *mapFlags = D_080FA05C;

    if (!(mapFlags[nextMap] & 1)) {
        u16 previousMapId = previousMap & 0x7FFF;

        if (mapFlags[previousMapId] & 1) {
            MapSaveFields *save = (MapSaveFields *)D_0202DBD0;
            ActorPosition *actor;

            save->returnMap = previousMapId;
            actor = (ActorPosition *)D_03002AB0;
            save->returnX = actor->x;
            save->returnY = actor->y;
        }
    }
}

