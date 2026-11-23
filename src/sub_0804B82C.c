u16 sub_08037C98(void *, s32);
void sub_0803A974(void *);
void sub_0803EE6C(void *);
void sub_0803828C(void *, void *, u16, u8);
void sub_08037FC4(void *, u16);
void sub_080379D4(s32);
void sub_0804B7A4(Entity *);
void sub_0804B85C(Entity *);
void sub_0804B628(Entity *);
extern u16 D_03004890;

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))
void sub_0804B7D8(Entity *actor)
{
    Entity *saved = actor;
    sub_08037C98(actor, 0);
    if (--actor->unk54 == 0)
        actor->unk64 = (u32)sub_0804B7A4;
    sub_0803A974(saved);
}

void sub_0804B7A4(Entity *actor)
{
    Entity *saved = actor;
    if (sub_08037C98(actor, 1) == 0)
        sub_0803EE6C(actor);
    sub_0803828C(saved, (u8 *)saved + 4, HALF(saved, 0x38), *((u8 *)saved + 0x61));
    sub_0803A974(saved);
}

void sub_0804B82C(Entity *actor)
{
    Entity *saved = actor;
    actor->unk64 = (u32)sub_0804B85C;
    HALF(actor, 0x38) = 0xE0;
    if (actor->unk3B != 0)
        *((u8 *)actor + 0x40) = 1;
    sub_08037FC4(saved, 0);
}

void sub_0804B768(Entity *actor)
{
    u8 *timer = &actor->unk54;
    u32 remaining = *timer;
    if (remaining != 0) {
        remaining--;
        *timer = remaining;
        if ((u8)remaining == 0) {
            u16 *delay = &D_03004890;
            *delay = 200;
        }
    } else {
        sub_080379D4(23);
        *(u16 *)timer = 210;
        actor->unk64 = (u32)sub_0804B628;
    }
}
