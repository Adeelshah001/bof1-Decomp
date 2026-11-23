extern const u8 D_0822F5B8[];
void sub_0804BC8C(Entity *, s32);
void sub_0804D7EC(Entity *, u16, u16);

static inline u32 read_map_value(u32 offset)
{
    const u8 *data = D_0822F5B8;
    u32 low = data[offset];
    u32 high = data[offset + 1];
    return low | (high << 8);
}

void sub_0804BF28(Entity *);
void sub_0804B9D4(Entity *);
void sub_0804D800(Entity *);
void sub_08016854(s32, Entity *);

void sub_0804CAA4(Entity *actor)
{
    *(u16 *)((u8 *)actor + 0xA6) = read_map_value(0x1C);
    sub_0804D7EC(actor, 0x1658, 0xF6AC);
    sub_0804BC8C(actor, 1);
}

void sub_0804CADC(Entity *actor)
{
    *(u16 *)((u8 *)actor + 0xA6) = read_map_value(0x1E);
    sub_0804D7EC(actor, 0x1658, 0xF6CC);
    sub_0804BC8C(actor, 1);
}

void sub_0804CB14(Entity *actor)
{
    u32 value = read_map_value(0x20);
    u8 *field = (u8 *)actor + 0xA6;
    u8 zeroByte = 0;
    u16 zeroHalf = 0;
    *(u16 *)field = value;
    actor->unk54 = zeroByte;
    *(u16 *)((u8 *)actor + 0xAA) = zeroHalf;
    actor->unk64 = (u32)sub_0804BF28;
    ((u8 *)actor)[0x62] = 0xFF;
    sub_0804D7EC(actor, 0x1698, 0xF6AC);
    sub_0804B9D4(actor);
    sub_0804D800(actor);
}

void sub_0804CB74(Entity *actor)
{
    u8 *flags;
    u32 old, mask;
    sub_08016854(0x2A, actor);
    flags = &actor->unk3A;
    old = *flags;
    mask = 0x10;
    mask |= old;
    *flags = mask;
    *(u16 *)((u8 *)actor + 0xA6) = read_map_value(0x22);
    sub_0804D7EC(actor, 0xC88, 0xA7C);
    sub_0804BC8C(actor, 0);
}
