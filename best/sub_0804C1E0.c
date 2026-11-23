extern void (*const D_080FD330[])(Entity *);
extern u8 gEntityPool[];
extern u8 D_03002130[];
extern const u8 D_0822F5B8[];
void *Entity_FindFreeSlot(void);
s32 sub_0803A8EC(void *);
void sub_0804D1D0(Entity *, u16, u16);
void sub_0804B9D4(Entity *);
void sub_0804D6B0(Entity *);
void sub_0804D844(Entity *, u16);

void sub_0804C240(Entity *actor)
{
    void (*const *handlers)(Entity *);
    ((u8 *)actor)[0x3D] = 2;
    handlers = D_080FD330;
    handlers[actor->unk3B](actor);
    if (actor->unk2A != 0)
        sub_0803A8EC(actor);
}

void sub_0804C1E0(Entity *actor)
{
    if (((Entity *)D_03004830)->unk2A == 0x170D) {
        u16 *counter;
        u8 *flags;
        u32 value, mask;
        u32 x = 0xC28;
        *(u16 *)((u8 *)actor + 2) = x;
        counter = (u16 *)((u8 *)actor + 0xA6);
        *counter += 2;
        flags = gEntityPool;
        flags += 0x81A;
        value = *flags;
        mask = 0xBF;
        mask &= value;
        *flags = mask;
    } else {
        u8 *entry = D_03002130;
        if (*(u16 *)(entry + 2) == 0xBCC) {
            u32 value, mask;
            entry -= 0xA6;
            value = *entry;
            mask = 0x40;
            mask |= value;
            *entry = mask;
        }
    }
}

void sub_0804C120(Entity *actor)
{
    Entity *slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unk3B = 9;
        ((u8 *)slot)[0x3C] = 0xC;
        slot->unk3A = 1;
    }
    slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unk3B = 0xA;
        ((u8 *)slot)[0x3C] = 0xC;
        slot->unk3A = 1;
    }
    *(u16 *)((u8 *)actor + 0xA6) += 2;
}

void sub_0804C570(Entity *actor)
{
    const u8 *data = D_0822F5B8;
    u32 low, high;
    u16 *position;
    s32 zeroByte;
    s16 zeroHalf;
    u8 *field;
    low = data[8];
    high = data[9];
    low |= high << 8;
    position = (u16 *)((u8 *)actor + 0xA6);
    zeroByte = 0;
    zeroHalf = 0;
    *position = low;
    sub_0804D1D0(actor, 0xFFD0, 0x80);
    field = (u8 *)actor + 0x63;
    *field = 1;
    field -= 2;
    *field = 1;
    *(u16 *)((u8 *)actor + 0xAA) = zeroHalf;
    actor->unk54 = zeroByte;
    sub_0804B9D4(actor);
    actor->unk64 = (u32)sub_0804D6B0;
    sub_0804D844(actor, 0x1A0);
}
