void sub_0802EAD8(Entity *arg0) {
    u8 *base = (u8 *)arg0;
    u8 *src_base = *(u8 **)(base + 0x88);
    u8 *src = src_base;
    u16 val;
    
    // First pair: src[1], src[2] -> offsets 0x02, 0x82
    val = src[1] | (src[2] << 8);
    if (src[1] & 0x80) val |= 0xFF00;
    val += *(u16 *)(base + 0x02);
    *(u16 *)(base + 0x02) = val;
    *(u16 *)(base + 0x82) = val;
    
    // Second pair: src[3], src[4] -> offsets 0x06, 0x86, 0x2C
    val = src[3] | (src[4] << 8);
    if (src[3] & 0x80) val |= 0xFF00;
    val += *(u16 *)(base + 0x06);
    *(u16 *)(base + 0x06) = val;
    *(u16 *)(base + 0x86) = val;
    *(u16 *)(base + 0x2C) = val;
    
    *(u8 **)(base + 0x88) = src_base + 3;
}
