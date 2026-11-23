extern const u8 D_082D4934[];
extern const u8 D_082D47B4[];
extern const u8 D_082D45F4[];

u16 sub_08091694(const Entity *entity);

s32 sub_08091660(const Entity *entity)
{
    return (0x0F & *(const u8 *)(sub_08091694(entity) + 4 + (u32)D_082D4934)) * 2;
}

u32 sub_08091640(const Entity *entity)
{
    return (0xF0U & *(const u8 *)(sub_08091694(entity) + 4 + (u32)D_082D4934)) >> 3;
}

s32 sub_08091680(const Entity *entity)
{
    const u8 *table = D_082D47B4;
    return *(const u8 *)(entity->pad3C[0] + (u32)table) * 3;
}

u16 sub_08091694(const Entity *entity)
{
    return (0x7F & *(const u8 *)(entity->pad3C[0] + (u32)D_082D45F4)) * 5 - 5;
}
