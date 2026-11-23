extern const u16 D_080FD57E[];
void sub_0803EE6C(void *);
void sub_0804FC18(void *);
void sub_0804FC50(void *);
void sub_0804FCA0(Entity *);
void sub_0805009C(void);
void sub_0804F518(void);
void sub_080503D4(void);
void sub_080379D4(s32);
void *Entity_FindFreeSlot(void);

void sub_0804FB34(Entity *actor)
{
    u8 *timer = (u8 *)actor + 0x55;
    u8 *counter;
    u32 sign;
    u32 remaining;
    *timer = 2;
    counter = timer;
    sign = 0x80;
    do {
        sub_0804FC18(actor);
        sub_0804FC50(actor);
        remaining = *counter - 1;
        *counter = remaining;
        remaining &= sign;
    } while (remaining == 0);
    sub_0803EE6C(actor);
}

void sub_0804FAF0(Entity *actor)
{
    u8 index;
    const u16 *coords;
    actor->unk64 = (u32)sub_0805009C;
    index = (actor->unk3B - 0x23) * 2;
    coords = D_080FD57E;
    *(u16 *)((u8 *)actor + 2) = *(const u16 *)((u32)coords + (index << 1));
    actor->unk6 = *(const u16 *)((u32)coords + ((index + 1) << 1));
    sub_080379D4(2);
    sub_0804FCA0(actor);
}

void sub_0804FCA0(Entity *actor)
{
    Entity *effect = Entity_FindFreeSlot();
    if (effect != NULL) {
        u8 kind = actor->unk3B - 0x23;
        u8 *field = (u8 *)effect + 0x55;
        *field = kind;
        effect->unk64 = (u32)sub_0804F518;
        --field;
        *field = 0x3C;
        field -= 0x1A;
        *field = 1;
    }
}

void sub_0804FCD8(Entity *actor, u8 kind)
{
    Entity *slot = Entity_FindFreeSlot();
    Entity *effect = slot;
    if (effect != NULL) {
        u8 *kindField = (u8 *)slot + 0xCB;
        u8 zero = 0;
        *kindField = kind;
        effect->unk64 = (u32)sub_080503D4;
        effect->unk3A = 1;
        ((u8 *)effect)[0xC9] = zero;
    }
}
