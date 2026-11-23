extern u8 D_03002AB0[];
extern u8 D_030023E0[];
void sub_08030BB0(void *, s32);
void sub_08037FC4(void *, u16);
void sub_0804757C(Entity *);
void sub_0803EE38(Entity *);
u8 sub_080448A4(Entity *, s32);
void sub_08045504(Entity *);
void sub_08045F88(Entity *);
s32 sub_0803A8EC(void *);

void sub_08045A28(Entity *actor, u8 direction)
{
    s32 tile;

    switch (direction) {
    case 0:
        tile = 0x7C;
        break;
    case 8:
        tile = 0x7E;
        break;
    case 16:
        tile = 0x80;
        break;
    case 24:
        tile = 0x82;
        break;
    default:
        tile = 0;
        break;
    }
    sub_08030BB0(D_03002AB0, tile);
}

void sub_08046784(Entity *actor)
{
    u8 *field;
    u16 y;
    s32 delay = 0x224;
    void (*callback)(Entity *);

    actor->unk2A = delay;
    actor->unk1C = delay - 0x7A;
    field = &actor->unk41;
    *field = 10;
    field -= 5;
    *field = 4;
    y = actor->unk6;
    actor->unk2C = y;
    field += 0xE;
    *(u16 *)field = y;
    y = *(u16 *)((u8 *)actor + 2);
    field -= 4;
    *(u16 *)field = y;
    field -= 7;
    *field = 1;
    callback = sub_0804757C;
    actor->unk64 = (u32)callback;
    sub_08037FC4(actor, 0);
    ((u8 *)actor)[0x3D] = 2;
    callback(actor);
}

void sub_08044A84(Entity *actor)
{
    u8 zero = 0;
    u8 mode;

    actor->unk1C = 0x80;
    if (sub_080448A4(actor, zero)) {
        mode = actor->unk60;
        if (mode == 3 || mode == 0) {
            actor->unk64 = (u32)sub_08045F88;
            ((u8 *)actor)[0x6C] = zero;
            return;
        }
        if (mode == 2) {
            sub_0803EE38(actor);
            return;
        }
        *(u16 *)((u8 *)actor + 2) = 0x968;
        *(u16 *)((u8 *)actor + 0x46) = 0x968;
    }
    actor->unk64 = (u32)sub_08045504;
}

void sub_0804494C(Entity *actor)
{
    u16 mode;

    actor->unk1C = 0x80;
    actor->unk64 = (u32)sub_08045504;
    mode = *(u16 *)(D_030023E0 + 0xA4);
    if (mode == 0x1B5) {
        *(u16 *)((u8 *)actor + 2) += 8;
        actor->unk41 = 0x2C;
    } else if (mode == 0x1A8) {
        actor->unk41 = (actor->unk41 & 0xF) | 0x20;
    }
    sub_0803A8EC(actor);
}
