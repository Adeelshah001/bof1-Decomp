extern const u8 D_082D4834[][1];

u16 sub_08091680(const Entity *entity);

void sub_08091570(Entity *entity)
{
    u32 offset = sub_08091680(entity);
    const u8 (*table)[1] = D_082D4834;
    entity->unk54 = table[offset][0];
}

void sub_08091590(u8 *entity)
{
    u32 offset = sub_08091680((const Entity *)entity);
    const u8 (*table)[1] = D_082D4834;
    offset += 1;
    entity[0x55] = table[offset][0];
}

u32 sub_080915B4(const Entity *entity)
{
    u32 offset = sub_08091680(entity);
    const u8 (*table)[1] = D_082D4834;
    offset += 2;
    return (0xF0U & table[offset][0]) >> 3;
}

s32 sub_080915D4(const Entity *entity)
{
    u32 offset = sub_08091680(entity);
    const u8 (*table)[1] = D_082D4834;
    offset += 2;
    return (0x0F & table[offset][0]) * 2;
}
