extern u8 D_03003F98;
extern u8 D_03002AB0[];
extern const u16 D_080FD264[];
u16 sub_08037C98(void *, s32);
void sub_0803A974(void *);
void sub_08049EE8(Entity *);
void sub_080491AC(void *, s32, s32, s32);

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))
void sub_0804A2E8(Entity *actor)
{
    u8 *parent = D_03002AB0;
    u8 *direction;
    u16 *origin;
    u32 x, y;
    u8 state;
    const u16 *offsets;
    u32 index;
    state = *(vu8 *)(parent + 0x40);
    *((u8 *)actor + 0x40) = state;
    direction = parent + 0x61;
    state = *(vu8 *)direction;
    *((u8 *)actor + 0x61) = state;
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

