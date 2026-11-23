extern const u8 D_082D4834[][1];

u16 sub_08091680(const Entity *entity);

u32 sub_08091570(Entity *entity)
{
    u32 offset = sub_08091680(entity);
    const u8 (*table)[1] = D_082D4834;
    u8 val = table[offset][0];
    entity->unk54 = val;
    return val;
}

u32 sub_08091590(u8 *entity)
{
    u32 offset = sub_08091680((const Entity *)entity);
    const u8 (*table)[1] = D_082D4834;
    u8 val;
    offset += 1;
    val = table[offset][0];
    entity[0x55] = val;
    return val;
}
