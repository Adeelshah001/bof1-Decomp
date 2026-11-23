void sub_0803A508(void *);
void sub_0804D724(void *);
void sub_0804D784(void *, s32, s32);

void sub_0804B928(Entity *actor)
{
    u16 x, y, value;
    actor->unk54 = 0;
    sub_0804D784(actor, 0, 0);
    x = *(u16 *)((u8 *)actor + 2);
    y = actor->unk6;
    *(vu16 *)((u8 *)actor + 2) = x;
    *(vu16 *)&actor->unk6 = y;
    actor->unk2C = y;
    sub_0803A508(actor);
    actor->unk2A = 0x7A;
    value = 0x36;
    actor->unk41 = value;
    value += 0xDA;
    actor->unk1C = value;
    sub_0804D724(actor);
}

extern u16 D_03004890;
extern const u8 D_0822F5B8[];
void sub_0804D1D0(void *, s32, s32);
void sub_0804B9D4(Entity *);
void sub_0804D6CC(Entity *);

void sub_0804B8C8(Entity *actor)
{
    const u8 *data;
    u32 index;
    u8 *field;
    u8 zeroByte;
    u16 zeroHalf;
    D_03004890 = 0x190;
    data = D_0822F5B8;
    index = data[0x12];
    index |= data[0x13] << 8;
    field = (u8 *)actor + 0xA6;
    zeroByte = 0;
    zeroHalf = 0;
    *(u16 *)field = index;
    sub_0804D1D0(actor, 0x80, 0x78);
    field = (u8 *)actor + 0x61;
    *field = 1;
    field += 2;
    *field = 1;
    field = (u8 *)actor + 0xAA;
    *(u16 *)field = zeroHalf;
    field -= 0x56;
    *field = zeroByte;
    sub_0804B9D4(actor);
    actor->unk2A = zeroHalf;
    actor->unk64 = (u32)sub_0804D6CC;
}

u16 sub_08037C98(void *, s32);
void sub_0803828C(void *, void *, u16, u8);
void sub_0803A8EC(void *);
void sub_0804B8A0(Entity *);

void sub_0804B85C(Entity *actor)
{
    Entity *e = actor;
    if (--actor->unk54 == 0)
        actor->unk64 = (u32)sub_0804B8A0;
    sub_0803828C(e, (u8 *)e + 4, *(u16 *)((u8 *)e + 0x38), ((u8 *)e)[0x61]);
    sub_08037C98(e, 0);
    sub_0803A8EC(e);
}

void sub_080379D4(s32);
u16 sub_08037C98(void *, s32);
void sub_08037FC4(void *, u8);
void sub_0803A8EC(void *);
void sub_0804B48C(Entity *);

void sub_0804B714(Entity *actor)
{
    Entity *e = actor;
    u8 *timer = &actor->unk54;
    if (--*timer == 0) {
        sub_080379D4(0x10);
        *timer = 0x28;
    }
    if (sub_08037C98(actor, 1) == 0) {
        ((u8 *)actor)[0x55] = 0x14;
        actor->unk64 = (u32)sub_0804B48C;
        sub_08037FC4(actor, 4);
    }
    sub_0803A8EC(e);
}
