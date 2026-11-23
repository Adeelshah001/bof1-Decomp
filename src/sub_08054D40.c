u16 sub_08037C98(void *, s32);
s32 sub_0803A8EC(void *);
void sub_08037FC4(void *, u16);
void sub_08054D70(Entity *);
void sub_08054DBC(Entity *);
void sub_08054B08(Entity *);
void sub_08054E1C(Entity *);
void sub_08030BB0(void *, s32);
extern u8 D_030045B0[];
extern u8 D_03002AB0[];
void sub_08054D40(Entity *actor)
{
    Entity *saved = actor;
    if (--actor->unk54 == 0) {
        actor->unk78 = (u32)sub_08054D70;
        sub_08054DBC(actor);
    }
    sub_0803A8EC(saved);
}

void sub_08054D08(Entity *actor)
{
    u8 *counter;
    u8 *stage;
    sub_08037C98(actor, 0);
    counter = (u8 *)actor + 0x50;
    if (++*counter == 48) {
        stage = D_03004830;
        stage += 0x2B;
        ++*stage;
    }
    sub_0803A8EC(actor);
}

void sub_08054DDC(Entity *actor)
{
    Entity *saved = actor;
    if (sub_08037C98(actor, 1) == 0) {
        u8 *flags;
        u32 old;
        u32 mask;
        sub_08037FC4(actor, 0);
        actor->unk78 = (u32)sub_08054B08;
        flags = D_030045B0;
        flags += 0x2C;
        old = *flags;
        mask = 0x7F;
        mask &= old;
        *flags = mask;
    }
    sub_0803A8EC(saved);
}

void sub_08054E90(Entity *actor)
{
    u8 *field;
    u32 zero;
    actor->unk78 = (u32)sub_08054E1C;
    sub_08037FC4(actor, 2);
    field = &actor->unk54;
    zero = 0;
    *field = 0xBC;
    field += 0x1B;
    *field = 0x10;
    *(u16 *)((u8 *)actor + 0x5E) = zero;
    *(u16 *)((u8 *)actor + 2) = 0xEA0;
    sub_0803A8EC(actor);
    sub_08030BB0(D_03002AB0, 0x26);
}
