typedef void (*ActorCallback)(Entity *);
void sub_0804DC64(Entity *);
void sub_0804E104(Entity *);
void sub_0804E31C(Entity *);
extern u8 D_03004E88[];
extern const u16 D_080FD4EC[];
extern const ActorCallback D_080FD4FC[];

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))

void sub_0804E238(Entity *actor)
{
    u8 *index = (u8 *)actor + 0x61;
    u32 pair = *index;
    u32 offset;
    u16 *timer;
    u32 duration;
    const u16 *coords;
    const ActorCallback *callbacks;
    pair <<= 1;
    timer = (u16 *)((u8 *)actor + 0x46);
    duration = 0x38;
    *timer = duration;
    coords = D_080FD4EC;
    offset = pair;
    offset <<= 1;
    HALF(actor, 2) = *(const u16 *)(offset + (u32)coords);
    pair++;
    actor->unk6 = *(const u16 *)((u32)coords + (pair << 1));
    sub_0804DC64(actor);
    *timer = duration;
    callbacks = D_080FD4FC;
    callbacks[*index](actor);
}

