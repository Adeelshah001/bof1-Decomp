void sub_080380F4(Entity *, u32, u8, s32);
void sub_08038278(Entity *);
void sub_0807C638(Entity *, s32);
void sub_08091570(Entity *);

void sub_08088D6C(Entity *entity)
{
    u8 *bytes = (u8 *)entity;
    u8 timer = --entity->unk54;
    u32 timerBits = (u32)timer << 24;
    u32 mask = 0x03000000;
    u8 *flag;
    u8 mode;

    mask &= timerBits;
    if (!mask)
        sub_0807C638(entity, 0);

    sub_08038278(entity);
    entity->unk2C = entity->unk6;
    flag = bytes + 0x70;
    *flag = 0;
    sub_080380F4(entity, entity->unk78, flag[-0x1B], 0xC);

    mode = bytes[0x61];
    mode &= 0xF0;
    if (bytes[0x46] != mode) {
        sub_08091570(entity);
        entity->unk4D = 6;
    }
}
