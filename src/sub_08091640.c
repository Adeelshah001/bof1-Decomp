extern const u8 D_082D4934[][1];
extern const u8 D_082D47B4[];
extern const u8 D_082D45F4[];

u16 sub_08091694(const Entity *entity);

u32 sub_08091640(const Entity *entity)
{
    u32 offset = sub_08091694(entity);
    const u8 (*table)[1] = D_082D4934;
    offset += 4;
    return (0xF0U & table[offset][0]) >> 3;
}
