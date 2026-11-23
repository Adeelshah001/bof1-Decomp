extern const u8 D_08152A18[];

u8 sub_080908C4(u8 *entity)
{
    u32 index = entity[0xDB];
    u32 table = (u32)D_08152A18;
    u8 delay;
    index *= 2;
    delay = *(const u8 *)(index + table);
    entity[0x54] = delay;
    return delay;
}

extern const u8 D_08152A18[];

void sub_080908E0(u8 *entity)
{
    u32 index = entity[0xDB];
    u32 table = (u32)D_08152A18;
    index *= 2;
    index++;
    entity[0x55] = *(const u8 *)(index + table);
}

u8 sub_080908C4(u8 *entity);
void sub_080908E0(u8 *entity);

void sub_08090858(u8 *entity)
{
    u8 delay = sub_080908C4(entity);
    if (delay != 9) {
        entity[0xDB]++;
        sub_080908C4(entity);
        sub_080908E0(entity);
    } else {
        u8 palette;
        entity[0x4D] = 6;
        palette = entity[0x7D] >> 4;
        entity[0x41] = palette;
    }
}

void sub_0807CB08(void);
void sub_0809084C(u8 *entity);

void sub_08090820(u8 *entity)
{
    entity[0xDB] = 0;
    entity[0x54] = 5;
    entity[0x55] = 4;
    entity[0x4D] = 4;
    sub_0807CB08();
    sub_0809084C(entity);
}
