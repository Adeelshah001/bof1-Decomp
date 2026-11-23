typedef struct {
    u8 pad00[2];
    u16 x;
    u8 pad04[2];
    u16 y;
    u8 pad08[0x36];
    u8 tile;
} TileQueryEntity;

typedef struct {
    u8 pad00[0xA0];
    u16 unkA0;
} TileQueryMapState;

extern TileQueryMapState D_030023E0;
extern const u8 D_080A64C0[16];
extern u8 D_03002AB0[];
u8 sub_0803601C(void *map, u16 x, u16 y);
void *sub_080A0A68(void *dest, const void *src, u32 size);
u8 sub_0805CF40(u16 item, s16 *index);
u8 sub_08001770(u16 flag);

u8 sub_08036C50(void *map, TileQueryEntity *entity)
{
    u8 tile = sub_0803601C(map, entity->x, entity->y);
    entity->tile = tile;
    return tile;
}

u8 sub_08036C04(void *map, u16 x, u16 y)
{
    u8 tiles[16];
    u8 tile = sub_0803601C(map, x, y);
    u32 result = tile;

    sub_080A0A68(tiles, D_080A64C0, sizeof(tiles));
    if (D_030023E0.unkA0 == 2)
        result = tiles[tile];
    if (result == 0xFF)
        result = tile;
    return result;
}

u8 sub_08036CF4(void)
{
    s16 index;
    if (sub_0805CF40(0x155, &index) == 0)
        return TRUE;
    return FALSE;
}

u8 sub_08036D1C(void)
{
    u8 *state = D_03002AB0;
    if (sub_08001770(0x6D) && state[0x3C] == 5)
        return TRUE;
    return FALSE;
}
