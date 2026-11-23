void sub_08037FC4(void *, u32);
u32 sub_080915D4(const Entity *);
u32 sub_08091590(u8 *);
void sub_0807B248(void *);
void sub_08083300(void *, u32);
void sub_08090698(Entity *);

extern u16 D_02020FC0[];
extern u16 D_020211C0[];
extern u8 D_030043D8;
extern u8 D_03004F30[];

void sub_0808F89C(Entity *entity)
{
    u8 *data = (u8 *)entity;
    if (--data[0x55] == 0) {
        entity->unk4D = 12;
        sub_08037FC4(entity, (u16)sub_080915D4(entity));
    }
}

void sub_0808F534(u16 value, u16 offset, s32 count)
{
    u8 *dirty = &D_030043D8;
    for (; count >= 0; count--) {
        *(u16 *)(offset + (u32)D_02020FC0) = value;
        *(u16 *)(offset + (u32)D_020211C0) = value;
        offset += 2;
    }
    *dirty = 1;
}

void sub_0808F500(void)
{
    if (D_03004F30[0xB] == 0) {
        u16 offset = 0x1E0;
        const u16 *first = (const u16 *)((u8 *)D_02020FC0 + offset);
        s32 adjustment = -0x842;
        sub_0808F534(adjustment + *first, offset, 15);
    }
}

void sub_0809060C(Entity *entity)
{
    sub_0807B248(entity);
    if (--entity->unk54 == 0) {
        Entity *child;
        entity->unk4D = 6;
        sub_08083300(entity, (sub_08091590((u8 *)entity) << 24) >> 23);
        child = (Entity *)entity->unk74;
        child->unk6C = (u32)entity;
        child->unk41 = entity->unk41;
        sub_08090698(entity);
    }
}
