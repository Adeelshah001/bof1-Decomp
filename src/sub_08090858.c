extern const u8 D_08152A18[];

void sub_080908E0(u8 *entity)
{
    u32 index = entity[0xDB];
    u32 table = (u32)D_08152A18;
    u8 delay;
    index *= 2;
    index++;
    delay = *(const u8 *)(index + table);
    entity[0x55] = delay;
}

u8 sub_080908C4(u8 *entity);
void sub_080908E0(u8 *entity);

void sub_08090858(u8 *entity)
{
    u32 delay = sub_080908C4(entity);
    if (delay != 9) {
        entity[0xDB]++;
        sub_080908C4(entity);
        sub_080908E0(entity);
    } else {
        entity[0x4D] = 6;
        delay = entity[0x7D] >> 4;
        entity[0x41] = delay;
    }
}
