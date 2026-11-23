typedef struct {
    u8 pad00[0x3A];
    u8 flags;
    u8 kind;
    u8 group;
    u8 pad3D[0x4C - 0x3D];
    u16 unk4C;
    u8 pad4E[0x78 - 0x4E];
    Entity *owner;
    u8 pad7C[0xE0 - 0x7C];
} OwnedEntity;
extern OwnedEntity gEntityPool[];

void sub_08075738(Entity *, s32);
void sub_0808591C(Entity *, s32);

void sub_0807983C(Entity *owner) {
    OwnedEntity *entity = gEntityPool;
    s32 i = 0;
    u8 *flags = &entity->flags;
    OwnedEntity *found;

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
    sub_08075738(owner, 0x1A);
}
