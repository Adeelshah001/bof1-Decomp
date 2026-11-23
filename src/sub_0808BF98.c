void sub_0807B27C(Entity *);
void sub_08083300(Entity *, u32);
void sub_0808BEB8(Entity *);
s32 sub_0807CE30(u8 *);
void sub_0807CB08(void);
void sub_0808BE30(u8 *, u8, u16);
u16 sub_0807B2BC(void *);
void sub_0808C428(Entity *);
void sub_0807C638(Entity *, u32);

extern u8 D_03004F50[];
extern const u16 D_081529E0[], D_081529EC[];

void sub_0808BE80(Entity *entity)
{
    if (--entity->unk54 != 0) {
        sub_0807B27C(entity);
    } else {
        sub_08083300(entity, 42);
        entity->unk4D = 12;
        sub_0808BEB8(entity);
    }
}

void sub_0808BDCC(u8 *entity)
{
    u8 *saved = entity;
    u8 state = 0x25;
    entity[0xE1] = state;
    if (sub_0807CE30(saved) != 0) {
        sub_0808BE30(saved, 8, 0xA20);
    } else {
        u32 value;
        state = 6;
        saved[0xE0] = state;
        sub_0807CB08();
        value = 0x1030;
        sub_0808BE30(saved, 14, value);
    }
}

void sub_0808BF98(Entity *entity)
{
    u8 *timer = &entity->unk54;
    if (*timer != 0) {
        if (sub_0807B2BC(entity) == 0)
            *(u16 *)((u8 *)entity + 0x20) = 1;
        (*timer)--;
    } else {
        u8 *world = D_03004F50;
        u32 next = world[0x60];
        *timer = next;
        next++;
        world[0x4A] = next;
        sub_0808C428(entity);
    }
}

void sub_0808C0AC(Entity *entity)
{
    Entity *child;
    u8 *index;
    u32 offset;
    const u16 *table;
    sub_0807C638(entity, 12);
    child = (Entity *)entity->unk6C;
    index = (u8 *)entity + 0x55;
    offset = *index;
    table = D_081529E0;
    offset *= 2;
    *(u16 *)((u8 *)child + 2) = *(const u16 *)(offset + (u32)table);
    *(u16 *)((u8 *)child + 6) = *(const u16 *)(offset + (u32)D_081529EC);
    child->unk78 = entity->unk74;
    child->unk6C = (u32)entity;
    entity->unk74 = (u32)child;
    offset = *index;
    *(u8 *)&child->unk70 = offset;
}
