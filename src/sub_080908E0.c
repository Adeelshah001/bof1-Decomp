extern const u8 D_08152A18[];

void sub_080908E0(u8 *entity)
{
    u32 index = entity[0xDB];
    u32 table = (u32)D_08152A18;
    index *= 2;
    index++;
    index += table;
    index = *(const u8 *)index;
    entity[0x55] = index;
}
