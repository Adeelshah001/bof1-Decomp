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

void sub_0804C9C4(Entity *actor)
{
    *(u16 *)((u8 *)actor + 0xA6) = read_map_value(0x14);
    sub_0804D7EC(actor, 0xC08, 0x9B8C);
    sub_0804BC8C(actor, 3);
}

void sub_0804C9FC(Entity *actor)
{
    *(u16 *)((u8 *)actor + 0xA6) = read_map_value(0x16);
    sub_0804D7EC(actor, 0xC28, 0x9B8C);
    sub_0804BC8C(actor, 3);
}

void sub_0804CA34(Entity *actor)
{
    *(u16 *)((u8 *)actor + 0xA6) = read_map_value(0x18);
    sub_0804D7EC(actor, 0xAF8, 0x9B8C);
    sub_0804BC8C(actor, 3);
}

void sub_0804CA6C(Entity *actor)
{
    *(u16 *)((u8 *)actor + 0xA6) = read_map_value(0x1A);
    sub_0804D7EC(actor, 0x1658, 0xF68C);
    sub_0804BC8C(actor, 1);
}
