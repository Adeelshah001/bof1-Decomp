extern u8 D_0300418C;

u16 sub_0802A4F8(u16 arg0) {
    u32 pal = (arg0 & 0x1C00);
    u32 flip = arg0 >> 14;
    u8 tmp = (pal >> 10) + D_0300418C;

    return (arg0 & 0x3FF) | (tmp << 12) | (flip << 10);
}
