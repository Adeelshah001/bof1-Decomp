typedef struct {
    u8 pad00[0x3A];
    u8 flags;
    u8 kind;
    u8 group;
    u8 pad3D[0x78 - 0x3D];
    Entity *owner;
    u8 pad7C[0xE0 - 0x7C];
} OwnedEntity;

extern OwnedEntity gEntityPool[];
void sub_080756DC(Entity *);
void sub_0808591C(Entity *, s32);
void sub_0807983C(Entity *);

void sub_08079B4C(Entity *owner)
{
    OwnedEntity *entity;
    s32 i;
    u8 *flags;
    OwnedEntity *found;

    sub_080756DC(owner);
    entity = gEntityPool;
    i = 0;
    flags = &entity->flags;
    do {
        if (flags[0] != 0 && flags[2] == 4 && entity->owner == owner) {
            u32 kind = flags[1];
            if (kind == 8 || kind == 10 || kind == 16) {
                found = entity;
                goto done;
            }
        }
        flags += sizeof(*entity);
        entity++;
        i++;
    } while (i < 13);
    found = NULL;

done:
    if (found == NULL) {
        ((u8 *)owner)[0xE3] = 0x14;
        sub_0808591C(owner, 0x14);
    }
    sub_0807983C(owner);
}
