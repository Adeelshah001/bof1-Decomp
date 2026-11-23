s32 sub_080988A4(u8 **entry)
{
    u8 *entity = *entry;
    if (!(entity[0xDC] & 0xC0) && !(entity[0xF1] & 0x70))
        return 1;
    return 0;
}

s32 sub_0809887C(u8 **entry)
{
    u8 *entity = *entry;
    if (*(u16 *)(entity + 0xF4) != *(u16 *)(entity + 0xF6) && !(0x80 & entity[0xF1]))
        return 0;
    return 1;
}

void sub_08099B50(u8 *);
void sub_08099C24(u8 *);
void sub_08099C44(u8 *);

void sub_08098F2C(u8 *entity)
{
    u8 *flags;
    u8 turn;
    if ((u32)entity[2] < (u32)(*(u16 *)(entity + 0x44) >> 8)) {
        if (--entity[0x54] != 0) {
            sub_08099C44(entity);
            return;
        }
        flags = entity + 0x61;
        turn = *flags + 2;
        if ((u8)(turn - 16) > 1)
            goto update_turn;
    }
    sub_08099B50(entity);
    return;

update_turn:
    *flags = turn & 0x1F;
    sub_08099C24(entity);
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
    direction = (entity[0x61] & 0xF0) << 8;
    *(u16 *)(entity + 0x44) = direction;
    sub_0809A0E4(entity);
}
