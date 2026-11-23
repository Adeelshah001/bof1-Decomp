void sub_08097018(void *entity, u8 x, u8 y)
{
    u32 dx = (u32)(s8)x << 16;
    u32 dy = (u32)(s8)y << 16;
    u16 *coords = entity;
    coords[1] += dx >> 16;
    coords[3] += dy >> 16;
}
