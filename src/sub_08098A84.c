void sub_08098B3C(s32);
void sub_080988CC(u8 *, u8 *);
void sub_0803EE6C(u8 *);
void *Entity_FindFreeSlot(void);

void sub_08098B04(Entity *entity)
{
    const u8 *parent = (const u8 *)entity->unk78;
    u8 timer = parent[0x54];
    if (timer != 0)
        return;
    ((u8 *)entity)[0x4C] = timer;
}

void sub_08098B18(u8 *entity)
{
    u8 *timer = entity + 0x54;
    if (--*timer == 0) {
        timer -= 8;
        *timer = 8;
    }
    sub_08098B3C((s32)entity);
}

void sub_08098A84(u8 *entity)
{
    u8 *parent = *(u8 **)(entity + 0x78);
    u8 state = parent[0x4C];
    u8 *status;
    if (state == 0x0C)
        entity[0x4C] = state;
    status = parent + 0xE0;
    state = *status;
    if (state == 0x12)
        goto remove;
    status = (u8 *)((u32)status + 0x11);
    state = *status;
    if ((state &= 0x80) == 0) {
        sub_080988CC(entity, parent);
        return;
    }
remove:
    sub_0803EE6C(entity);
}

void sub_080989B0(void)
{
    u8 *entity = Entity_FindFreeSlot();
    if (entity != NULL) {
        u8 *kind = entity + 0x3C;
        *kind = 0x0C;
        kind -= 2;
        *kind = 1;
    }
}
