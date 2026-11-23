extern u8 D_030009A0;
extern u8 D_030009A1;
extern u8 D_030009A8[];
extern u8 D_030009B2;

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

void sub_080756DC(Entity *owner)
{
    OwnedEntity *entity = gEntityPool;
    s32 i = 0;
    u8 *flags = &entity->flags;
    do {
        if (flags[0] != 0 && flags[2] == 4 && entity->owner == owner) {
            u32 kind = flags[1];
            if (kind == 8 || kind == 10 || kind == 16)
                goto found;
        }
        flags += sizeof(*entity);
        entity++;
        i++;
    } while (i < 13);
    entity = NULL;
found:
    if (entity != NULL && entity->flags != 0) {
        entity->flags = 0;
        entity->unk4C = 0;
    }
}

void sub_0803F880(void)
{
    u8 *entries;
    u8 index;
    u8 *entry;
    D_030009A1++;
    entries = D_030009A8;
    index = ++D_030009B2;
    entry = entries + index;
    *entry = D_030009A0;
    D_030009A0 = 0xFF;
}

s32 sub_0803F7B0(void)
{
    u8 *entries;
    u8 index;
    u8 *entry;
    D_030009A1++;
    entries = D_030009A8;
    index = ++D_030009B2;
    entry = entries + index;
    *entry = D_030009A0;
    D_030009A0 = 0xFF;
    return 0;
}

s32 sub_0803F7B0(void);

s32 sub_0803F764(void)
{
    u8 *entries = D_030009A8;
    u8 *index = &D_030009B2;
    if (!(entries[*index] & 0x80)) {
        u8 next;
        u8 *entry;
        D_030009A1++;
        next = ++*index;
        entry = entries + next;
        *entry = D_030009A0;
    } else {
        sub_0803F7B0();
    }
    return 0;
}
