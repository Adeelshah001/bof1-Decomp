extern u8 D_030023E0[];
s32 sub_0803A8EC(void *);
u16 sub_08037C98(void *, s32);
void sub_08037FC4(void *, u16);
u8 sub_08055660(u8);
void sub_08055A58(Entity *);
void sub_08055568(Entity *);
void sub_08055A64(Entity *);
void sub_08055B84(Entity *);

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))
void sub_08055A24(Entity *actor)
{
    u32 x = HALF(actor, 2) + 13;
    u8 *flags;
    u32 old, mask;
    HALF(actor, 2) = x;
    HALF(actor, 0x46) = x;
    actor->unk64 = (u32)sub_08055A58;
    flags = &actor->unk41;
    old = *flags;
    mask = 0xCF;
    mask &= old;
    mask |= 0x20;
    *flags = mask;
    actor->unk2C = actor->unk6 - 0x90;
}

void sub_080559C8(Entity *actor)
{
    u8 *scene;
    actor->unk6 += 16;
    actor->unk64 = (u32)sub_08055568;
    actor->unk2C -= 8;
    sub_0803A8EC(actor);
    scene = D_030023E0;
    scene += 0xA4;
    if (*(u16 *)scene == 0x1A8) {
        u8 *flags = &actor->unk41;
        u32 old = *flags;
        u32 mask = 0x0F;
        mask &= old;
        mask |= 0x20;
        *flags = mask;
    }
}

void sub_08055A98(Entity *actor)
{
    if (sub_08037C98(actor, 1) == 0) {
        u8 *state;
        void (*callback)(Entity *);
        sub_08037FC4(actor, 4);
        state = (u8 *)actor + 0x3C;
        *state = 0x85;
        callback = sub_08055A64;
        actor->unk64 = (u32)callback;
        callback(actor);
    } else {
        sub_0803A8EC(actor);
    }
}

void sub_08055990(Entity *actor)
{
    if (sub_08055660(*((u8 *)actor + 0x5C))) {
        void (*callback)(Entity *) = sub_08055B84;
        actor->unk64 = (u32)callback;
        sub_08037FC4(actor, 2);
        callback(actor);
    } else {
        sub_08055B84(actor);
    }
}
