extern u8 D_03003F98;
extern u8 D_03002AB0[];
extern const u16 D_080FD264[];
u16 sub_08037C98(void *, s32);
void sub_0803A974(void *);
void sub_08049EE8(Entity *);
void sub_080491AC(void *, s32, s32, s32);

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))
void sub_0804A2B8(Entity *actor)
{
    Entity *saved = actor;
    u16 result = sub_08037C98(actor, 1);
    if (result == 0) {
        actor->unk64 = (u32)sub_08049EE8;
        D_03003F98 = result;
    }
    sub_0803A974(saved);
}

void sub_0804A2E8(Entity *actor)
{
    u8 *parent = D_03002AB0;
    u8 *direction;
    u16 *origin;
    u16 x, y;
    const u16 *offsets;
    u32 index;
    *((u8 *)actor + 0x40) = parent[0x40];
    direction = parent + 0x61;
    *((u8 *)actor + 0x61) = *direction;
    x = HALF(parent, 2);
    origin = (u16 *)((u8 *)actor + 0x98);
    *origin = x;
    y = HALF(parent, 6);
    ++origin;
    *origin = y;
    offsets = D_080FD264;
    x += *(const u16 *)((u32)offsets + (*(vu8 *)direction << 2));
    HALF(actor, 2) = x;
    index = *(vu8 *)direction;
    y += *(const u16 *)((u32)offsets + (((index << 1) + 1) << 1));
    actor->unk6 = y;
    actor->unk2C = y;
}

void sub_0804A284(Entity *actor)
{
    u8 *field = &actor->unk54;
    *field = 8;
    field += 0x88;
    *(u32 *)field = (u32)sub_0804A284;
    field -= 0x5C;
    *field = 1;
    sub_080491AC(actor, 20, 0x170, 0xF92B);
}

void sub_0804A1FC(Entity *actor)
{
    u8 *field = &actor->unk54;
    *field = 28;
    field += 0x88;
    *(u32 *)field = (u32)sub_0804A1FC;
    field -= 0x5C;
    *field = 1;
    sub_080491AC(actor, 6, 0x180, 0xF918);
}
