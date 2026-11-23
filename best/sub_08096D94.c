extern u8 D_03004F50[];

s32 sub_08096D94(void)
{
    u8 *battle = D_03004F50;
    if (--battle[0x4A] != 0)
        return 2;
    return 3;
}

s32 sub_08096DD8(u8 *entity)
{
    if (!(entity[0xF0] & 0x50) && entity[0x3A] != 0 && !(entity[0xF1] & 0x80))
        return 1;
    return 0;
}

extern u16 D_020211CE;

void sub_08096B60(u8 *entity, u32 packed)
{
    u8 *bytes;
    u16 *color = &D_020211CE;
    u8 zero;
    *color = 0;
    bytes = entity + 0x54;
    zero = 0;
    bytes[0] = packed;
    packed >>= 8;
    bytes++;
    *bytes = packed;
    *(u16 *)(entity + 0x38) = zero;
}
