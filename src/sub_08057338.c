typedef struct {
    u8 pad00[2];
    u16 x;
    u8 pad04[2];
    u16 y;
    u8 pad08[0x3A - 8];
    u8 active;
    u8 subtype;
    u8 kind;
    u8 pad3D[0xB6 - 0x3D];
    u16 unkB6;
} AreaActor;

typedef struct {
    u8 pad00[0x18];
    AreaActor *child;
    u8 pad1C[0x4C - 0x1C];
    u8 spawned;
} AreaSpawner;

extern AreaActor D_03002AB0[];
AreaActor *Entity_FindFreeSlot(void);

void sub_08057338(AreaSpawner *actor)
{
    AreaActor *child;

    if (D_03002AB0[0].x <= 0x717 && D_03002AB0[0].y <= 0x2C4F) {
        if (!actor->spawned) {
            child = Entity_FindFreeSlot();
            if (child != NULL) {
                actor->child = child;
                child->active = 1;
                child->kind = 0x14;
                child->subtype = 2;
                child->unkB6 = 0x2C00;
                actor->spawned = 1;
            }
        }
    } else if (actor->spawned) {
        child = actor->child;
        child->subtype = 0;
        actor->spawned = 0;
    }
}
