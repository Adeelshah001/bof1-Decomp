void sub_0809A0B0(Entity *);
void sub_08038128(Entity *, u32, s32, s32);
void sub_08038264(Entity *);
void sub_08038178(Entity *, u32);
void sub_0803EE6C(Entity *);
void sub_0809A540(Entity *);
void sub_08037FC4(Entity *, u16);

void sub_0809A4B8(Entity *entity)
{
    u8 *data = (u8 *)entity;
    u32 phase;
    u16 initial = 0x160;
    *(u16 *)(data + 0x38) = initial;
    *(u16 *)(data + 2) += 16;
    entity->unk6 -= 8;
    sub_0809A0B0(entity);
    sub_08038128(entity, entity->unk78, 8, 16);
    phase = data[0x61];
    phase &= 0xF0;
    phase <<= 8;
    *(u16 *)(data + 0x44) = phase;
}

void sub_0809A4F8(Entity *entity)
{
    u8 *data = (u8 *)entity;
    u32 phase;
    sub_08038264(entity);
    sub_08038178(entity, entity->unk78);
    phase = data[0x61];
    phase &= 0xF0;
    if (phase != (*(u16 *)(data + 0x44) >> 8)) {
        u32 zero = 0;
        u8 *timer;
        entity->unk78 = zero;
        sub_0803EE6C(entity);
        timer = &entity->unk54;
        *timer++ = zero;
        *timer = zero;
    } else {
        sub_0809A540(entity);
    }
}

void sub_08099444(Entity *entity)
{
    u8 *phase;
    u16 *previous;
    u32 next;
    u32 mask;
    sub_08038264(entity);
    sub_08038128(entity, entity->unk78, 8, 16);
    phase = (u8 *)entity + 0x61;
    next = *phase;
    mask = 0xF0;
    next &= mask;
    previous = (u16 *)((u8 *)entity + 0x44);
    if (next != (*previous >> 8)) {
        u32 parent = entity->unk6C;
        entity->unk78 = parent;
        sub_08038178(entity, parent);
        mask &= *phase;
        mask <<= 8;
        *previous = mask;
        ((u8 *)entity)[0x4C] = 4;
    }
    sub_0809A540(entity);
}

void sub_08099220(Entity *entity)
{
    Entity *saved = entity;
    u8 *timer = &entity->unk54;
    u32 zero = 0;
    u8 *data;
    u32 phase;
    *timer = zero;
    *(u16 *)((u8 *)saved + 0x38) = 0xE0;
    sub_08038178(saved, saved->unk78);
    data = (u8 *)saved;
    phase = (data[0x61] += 3);
    *(u16 *)(data + 0x44) = phase << 8;
    *(u16 *)(data + 0x48) = zero;
    data[0x4C]++;
    sub_08037FC4(saved, 2);
}
