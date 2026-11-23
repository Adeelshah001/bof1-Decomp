extern u8 D_030023E0[];
void sub_08049C40(Entity *, s32, s32);
void sub_08049CA4(Entity *);
void sub_0804A118(Entity *);
void sub_08049E38(Entity *);
void sub_0804926C(Entity *);
void sub_0803EE6C(Entity *);
void sub_0803828C(Entity *, u8 *, u16, u8);
s32 sub_0803A8EC(void *);
void sub_0803A974(void *);

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))

void sub_0804934C(Entity *actor)
{
    Entity *entity = actor;
    u8 *scene;
    actor->unk2C = 8;
    scene = D_030023E0;
    scene += 0xA4;
    if (*(u16 *)scene == 2)
        actor->unk6++;
    entity->unk64 = (u32)sub_08049CA4;
    sub_08049C40(entity, 0xC0, 0x2E);
}

void sub_080492F8(Entity *actor)
{
    u8 *state = D_03004830;
    state += 0x31;
    if (*state <= 1) {
        sub_0803EE6C(actor);
    } else {
        actor->unk2C = actor->unk6 - 0x30;
        actor->unk64 = (u32)sub_0804A118;
        sub_08049C40(actor, 0x40, 0x38);
    }
}

void sub_08049210(Entity *actor)
{
    Entity *entity = actor;
    u8 *timer;
    u32 count;
    sub_0803828C(actor, (u8 *)actor + 4, HALF(actor, 0x38), ((u8 *)actor)[0x61]);
    timer = &actor->unk54;
    --*timer;
    timer += 4;
    count = *(u16 *)timer - 1;
    *(u16 *)timer = count;
    if ((u16)count == 0) {
        *(u16 *)timer = 7;
        actor->unk64 = (u32)sub_0804926C;
        HALF(actor, 0x38) = 0x20;
    }
    if (((u8 *)actor)[0x80] != 0)
        sub_0803A8EC(actor);
    else
        sub_0803A974(entity);
}

void sub_080498C8(Entity *actor)
{
    u16 y = actor->unk6 + 2;
    u8 zero = 0;
    actor->unk6 = y;
    actor->unk54 = 0x48;
    ((u8 *)actor)[0x61] = 0x10;
    HALF(actor, 0x38) = 0xA0;
    ((u8 *)actor)[0x80] = zero;
    actor->unk64 = (u32)sub_08049E38;
    sub_08049C40(actor, 0x80, 0x0A);
}
