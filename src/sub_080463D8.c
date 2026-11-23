extern u8 D_03001850;
extern void (*const D_080FC6B0[])(Entity *);
s32 sub_0803A8EC(void *);
void sub_0803EE6C(void *);
u8 sub_08055660(u8);
void sub_0804636C(Entity *);
void sub_0804625C(Entity *);
void sub_080463A0(Entity *);

void sub_080462E0(Entity *actor)
{
    if (sub_08055660(((u8 *)actor)[0x5C]) != 0) {
        u32 kind = actor->unk3B;
        u32 mask = 0xF;
        mask &= kind;
        if (mask == 2) {
            sub_0803EE6C(actor);
            return;
        } else {
            u8 *field;
            u8 zero;
            actor->unk64 = (u32)sub_0804636C;
            field = (u8 *)actor + 0x8C;
            zero = 0;
            *field = zero;
            actor->unk54 = zero;
        }
    }
    sub_0803A8EC(actor);
}

void sub_08046328(Entity *actor)
{
    u8 *timer = &actor->unk54;
    if (*timer != 0x11) {
        sub_0804625C(actor);
    } else {
        u8 *field;
        u8 zero = 0;
        u16 x, y;
        *timer = zero;
        field = (u8 *)actor + 0x5E;
        *field = zero;
        x = *(u16 *)((u8 *)actor + 2);
        field -= 0x18;
        *(u16 *)field = x;
        y = actor->unk6 + 4;
        field += 4;
        *(u16 *)field = y;
        actor->unk64 = (u32)sub_080463A0;
    }
    sub_080463A0(actor);
}

void sub_080463D8(Entity *actor)
{
    Entity *entity = actor;
    if (D_03001850 == ((u8 *)actor)[0x5C]) {
        u8 *field;
        u8 zero;
        actor->unk64 = (u32)sub_0804636C;
        field = (u8 *)actor + 0x8C;
        zero = 0;
        *field = zero;
        actor->unk54 = zero;
    }
    sub_0803A8EC(entity);
}

void sub_08046530(Entity *actor)
{
    u8 zero = 0;
    u8 *mode, *field;
    u32 index;
    void (*const *handlers)(Entity *);
    actor->unk2A = 0x82;
    mode = (u8 *)actor + 0x3D;
    *mode = 2;
    field = (u8 *)actor + 0x40;
    *field = zero;
    field -= 4;
    *field = zero;
    actor->unk41 = 0x2C;
    handlers = D_080FC6B0;
    mode -= 2;
    index = *mode - 1;
    *mode = index;
    handlers[(u8)index](actor);
}
