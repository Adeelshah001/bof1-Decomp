extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern u8 D_0202DBD0[];
extern const u8 D_080FA05C[];

u8 sub_0802A4B8(u8, u16, u16);

typedef struct {
    u8 pad00[0x90];
    u32 unk90;
    u32 unk94;
} ActorEventFields;

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
    u8 pad288[0x2B8 - 0x288];
    u8 flags2B8;
} MapSaveFields;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} MapStateFields;

void sub_0802CE80(ActorEventFields *actor, u16 event)
{
    u32 *slot;

    D_030023D0[0] = 2;
    slot = &actor->unk90;
    actor->unk94 = event;
    *slot = event;
}

void sub_0802CE28(u16 sourceMap, u16 destMap)
{
    const u8 *mapFlags = D_080FA05C;

    if (!(mapFlags[sourceMap] & 1)) {
        u16 map = destMap & 0x7FFF;

        if (mapFlags[map] & 1) {
            MapSaveFields *save = (MapSaveFields *)D_0202DBD0;
            ActorPosition *actor;

            save->returnMap = map;
            actor = (ActorPosition *)D_03002AB0;
            save->returnX = actor->x;
            save->returnY = actor->y;
        }
    }
}

void sub_0802CF08(u8 *actor)
{
    u8 *state = D_03002AB0;
    if (state[0xC5] != 0) {
        u8 result = sub_0802A4B8(state[0xC5], *(u16 *)(actor + 0x46), *(u16 *)(actor + 0x4A));

        state[0xC6] += result;
    }
}

void sub_0802CDF4(u8 *actor)
{
    u8 *flags = actor + 0xBA;

    *flags = 0;
    if (((MapStateFields *)0x030023E0)->unkA4 == 0 &&
        (((MapSaveFields *)0x0202DBD0)->flags2B8 & 1))
        *flags = 0x84;
}
