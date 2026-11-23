typedef void (*ActorCallback)(Entity *);
void sub_0804DC64(Entity *);
void sub_0804E104(Entity *);
void sub_0804E31C(Entity *);
extern u8 D_03004E88[];
extern const u16 D_080FD4EC[];
extern const ActorCallback D_080FD4FC[];

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))

s32 sub_0804E2A4(u8 flags)
{
    u32 saved = flags;
    if (flags & 0x80)
        return 6;
    if (flags & 0x40)
        return 4;
    saved &= 0x20;
    if (!saved)
        return 0;
    return 2;
}

void sub_0804E2D4(Entity *actor)
{
    u16 *timer = (u16 *)((u8 *)actor + 0x46);
    u32 elapsed = *timer;
    if (elapsed > 44) {
        u8 *stage;
        u32 next;
        u32 zero;
        actor->unk64 = (u32)sub_0804E31C;
        stage = D_03004830;
        stage += 0x2B;
        next = *stage + 1;
        zero = 0;
        *stage = next;
        *D_03004E88 = zero;
    } else {
        *timer = elapsed + 1;
        sub_0804DC64(actor);
        sub_0804E104(actor);
    }
}

void sub_0804E238(Entity *actor)
{
    u8 *index = (u8 *)actor + 0x61;
    u32 pair = *index << 1;
    u16 *timer = (u16 *)((u8 *)actor + 0x46);
    u32 duration = 0x38;
    const u16 *coords;
    const ActorCallback *callbacks;
    *timer = duration;
    coords = D_080FD4EC;
    HALF(actor, 2) = *(const u16 *)((u32)coords + (pair << 1));
    pair++;
    actor->unk6 = *(const u16 *)((u32)coords + (pair << 1));
    sub_0804DC64(actor);
    *timer = duration;
    callbacks = D_080FD4FC;
    callbacks[*index](actor);
}

void sub_0804DF78(Entity *actor)
{
    u16 *accumulator = (u16 *)(0x4A + (u32)actor);
    u32 value = *accumulator;
    u32 delta;
    if (0x8000 & value) {
        delta = HALF(actor, 0x12) * 4 + 6;
        *accumulator = value + delta;
    } else {
        delta = (HALF(actor, 0x12) - *(vu16 *)((u8 *)actor + 0x16)) * 4 + 10;
        *accumulator = value + delta;
        HALF(actor, 0x16)--;
    }
    HALF(actor, 0x12)++;
}
