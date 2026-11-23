void sub_0807B248(u8 *entity);
void sub_08083BB4(void);

void sub_080914DC(u8 *entity)
{
    u8 *flags;
    u32 shifted;
    u32 mask;
    sub_08083BB4();
    flags = entity + 0x61;
    shifted = (u32)(*flags + 0x10) << 24;
    mask = 0x1F000000;
    mask &= shifted;
    *flags = mask >> 24;
    entity[0x4D] = 8;
    sub_0807B248(entity);
}
