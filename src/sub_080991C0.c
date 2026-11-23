s32 sub_080988A4(u8 **entry)
{
    u8 *entity = *entry;
    u32 flags = entity[0xDC];
    flags &= 0xC0;
    if (flags == 0) {
        flags = entity[0xF1];
        flags &= 0x70;
        if (flags == 0)
            return 1;
    }
    return 0;
}

s32 sub_0809887C(u8 **entry)
{
    u8 *entity = *entry;
    u16 *previous = (u16 *)(entity + 0xF6);
    u16 *current = (u16 *)(entity + 0xF4);
    if (*current != *previous && !(0x80 & entity[0xF1]))
        return 0;
    return 1;
}

void sub_08038178(u8 *, u32);
void sub_0809A0E4(u8 *);

void sub_080991C0(u8 *entity)
{
    u16 x, y;
    u16 direction;
    *(u16 *)(entity + 0x38) = 0xE0;
    if (entity[0x3B] == 12) {
        x = 0xF70;
        y = 0x2F56;
    } else {
        x = 0xF74;
        y = 0x2F4A;
    }
    *(u16 *)(entity + 2) = x;
    *(u16 *)(entity + 6) = y;
    entity[0x4C] = 2;
    sub_08038178(entity, *(u32 *)(entity + 0x78));
    direction = entity[0x61];
    direction &= 0xF0;
    direction <<= 8;
    *(u16 *)(entity + 0x44) = direction;
    sub_0809A0E4(entity);
}
