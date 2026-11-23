extern u8 D_0202DBD0[];
extern u8 D_080FAFFC[];

s32 sub_0803ADA8(u16 arg0) {
    u32 r0 = arg0;
    u32 r1;
    u32 r2;
    u32 r3;
    u8 *table;
    u8 *bitmasks;
    r0 <<= 0x10;
    r2 = r0 >> 0x10;
    r1 = 7;
    r2 &= r1;
    r0 >>= 0x13;
    r0 <<= 0x18;
    r0 >>= 0x18;
    r1 = (u32)D_0202DBD0;
    r3 = 0x45E;
    r1 += r3;
    r0 += r1;
    r1 = (u32)D_080FAFFC;
    r2 += r1;
    table = (u8 *)r0;
    bitmasks = (u8 *)r2;
    *table |= *bitmasks;
    return 0;
}
