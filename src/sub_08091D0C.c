void sub_08098294(Entity *, void *);
void sub_08038128(Entity *, u32, s32, s32);
void sub_08037FC4(Entity *, u16);
void sub_08095EFC(Entity *);
void sub_08095DE0(Entity *);
void sub_08038264(Entity *);
void sub_08095DD4(Entity *);
void sub_08095DB0(Entity *, s32);
void sub_080379D4(u8);
void sub_08096D24(Entity *, u32, u32);
void sub_08097034(Entity *);
void sub_08095A98(Entity *);
extern u8 D_03004F50[];

void sub_08091CD0(Entity *entity)
{
    u8 *related = (u8 *)entity->unk78;
    u16 *original = (u16 *)(related + 0xF6);
    u16 previous = *original;
    u16 *saved;
    u16 delta;
    u8 *world;
    sub_08098294(entity, related);
    saved = (u16 *)&entity->unk54;
    *saved = previous;
    delta = *original - previous;
    world = D_03004F50;
    *(u16 *)(world + 0x40) = delta;
    *(u16 *)(world + 0x74) = delta;
    *original = *saved;
    world[0x48] = 2;
}

void sub_08091D0C(Entity *entity)
{
    u8 *data = (u8 *)entity;
    Entity *saved = entity;
    s32 y = 0x2F9C;
    u16 x;
    if (data[0x50] == 0)
        y -= 0x9C;
    x = 0xFF0;
    *(u16 *)((u8 *)saved + 2) = x;
    saved->unk6 = y;
    *(u16 *)((u8 *)saved + 0x38) = 0xA0;
    saved->unk54 = 4;
    sub_08038128(saved, saved->unk78, 0, 0x18);
    saved->unk4D++;
    sub_08037FC4(saved, 4);
    sub_08095EFC(saved);
}

void sub_08091D60(Entity *entity)
{
    u8 *timer = &entity->unk54;
    if (--*timer == 0) {
        sub_08095DE0(entity);
    } else {
        u8 *phase = (u8 *)entity + 0x61;
        u32 status;
        *phase = (0x1F000000U & ((u32)(*phase + 1) << 24)) >> 24;
        sub_08038264(entity);
        status = *timer;
        if (status & 3)
            sub_08095DD4(entity);
        else
            sub_08095DB0(entity, 4);
    }
}

void sub_08091B58(Entity *entity)
{
    u8 *data = (u8 *)entity;
    u32 phase;
    sub_08038264(entity);
    if ((1 & entity->unk54) == 0) {
        sub_080379D4(5);
        sub_08096D24(entity, 0x10, 0x20);
    }
    phase = data[0x61];
    phase &= 0xF0;
    if (phase != (*(u16 *)(data + 0x44) >> 8)) {
        sub_08097034(entity);
        data[0x55] = 10;
        data[0x4C]++;
    }
    sub_08095A98(entity);
}
