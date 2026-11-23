extern u8 D_03003F98[];
void sub_08049C88(Entity *);
void sub_0804A184(Entity *);
void sub_0804A118(Entity *);
void sub_08048F64(Entity *);
u16 sub_08037C98(void *, s32);
void sub_08037FC4(void *, u16);
s32 sub_0803A8EC(void *);
u8 sub_08001770(s32);
u8 sub_08049F34(Entity *, s32);
void sub_08049C40(Entity *, s32, s32);

void sub_0804A0E4(Entity *actor)
{
    volatile u16 *timer = (u16 *)&actor->unk54;
    u32 remaining = *timer;
    if (remaining != 0xFFFF)
        *timer = remaining - 1;
    if (*timer == 0) {
        u8 *state = D_03004830;
        state += 0x2B;
        *state = 7;
        actor->unk64 = (u32)sub_08049C88;
    }
}

void sub_0804A150(Entity *actor)
{
    Entity *entity = actor;
    if (sub_08037C98(actor, 1) == 0) {
        u32 flags, mask;
        actor->unk64 = (u32)sub_0804A184;
        flags = *D_03003F98;
        mask = 0x7F;
        mask &= flags;
        *D_03003F98 = mask;
    }
    sub_0803A8EC(entity);
}

void sub_0804A1BC(Entity *actor)
{
    u8 *timer = &actor->unk54;
    u32 remaining = *timer - 1;
    *timer = remaining;
    if ((u8)remaining == 0) {
        u32 flags, mask;
        actor->unk64 = (u32)sub_0804A118;
        flags = *D_03003F98;
        mask = 0x7F;
        mask &= flags;
        *D_03003F98 = mask;
        sub_08037FC4(actor, 0);
    } else {
        sub_0803A8EC(actor);
    }
}

void sub_080499D8(Entity *actor)
{
    Entity *entity = actor;
    if (sub_08001770(0x95) == 0 || sub_08049F34(actor, 0x96) != 0) {
        u16 x, y;
        u8 *saved;
        x = *(u16 *)((u8 *)entity + 2);
        saved = (u8 *)entity + 0x94;
        *(u16 *)saved = x;
        y = entity->unk6;
        saved = (u8 *)entity + 0x96;
        *(u16 *)saved = y;
        saved -= 0x5B;
        *saved = 9;
        entity->unk64 = (u32)sub_08048F64;
        sub_08049C40(entity, 0xC0, 0x3E);
    }
}
