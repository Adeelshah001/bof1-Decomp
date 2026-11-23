void sub_08091E1C(Entity *entity) {
    u8 *base = (u8 *)entity;
    u8 val4C;
    u32 val54;
    u32 val55;
    
    val4C = base[0x4C];
    
    if (val4C == 0) {
        sub_080379D4(0x1E);
        base[0x54] = 0;
        val4C = base[0x4C];
        base[0x4C] = val4C + 1;
        base[0x55] = 9;
    }
    
    val54 = base[0x54];
    val54 = val54 - 1;
    base[0x54] = val54;
    
    if (val54 & 0x80) {
        base[0x54] = 8;
        val55 = base[0x55];
        val55 = val55 - 1;
        base[0x55] = val55;
        
        if ((val55 & 0x80) == 0) {
            sub_0809568C(entity, 0);
        } else {
            sub_08096CBC(entity);
        }
    }
}
