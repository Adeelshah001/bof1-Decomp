typedef struct Entity53 Entity53;
struct Entity53 {
    u8 pad00[2];
    u16 unk02;
    u8 pad04[2];
    u16 unk06;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3A - 0x2E];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0xCC - 0x3D];
    u8 unkCC;
    u8 padCD[0xD4 - 0xCD];
    Entity53 *unkD4;
    Entity53 *unkD8;
};

extern const u8 D_0822B3B8[];
Entity53 *Entity_FindFreeSlot(void);

void sub_080535D4(Entity53 *actor)
{
    Entity53 *ent = Entity_FindFreeSlot();
    Entity53 *parent;

    if (ent != NULL) {
        ent->unk3A = 1;
        ent->unk3C = D_0822B3B8[actor->unkCC + 1];
        ent->unk3B = D_0822B3B8[actor->unkCC + 2];
        parent = actor->unkD4;
        ent->unk02 = parent->unk02;
        ent->unk06 = parent->unk06 - 0x10;
        ent->unk2C = parent->unk06 + 0x10;
        actor->unkD8 = ent;
        actor->unkCC += 3;
    }
}
