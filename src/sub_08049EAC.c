void sub_08049EAC(Entity *arg0, u16 arg1, u16 arg2) {
    u16 *field_02 = (u16 *)((u8 *)arg0 + 0x02);
    u16 *field_06 = (u16 *)((u8 *)arg0 + 0x06);
    u16 *field_2C = (u16 *)((u8 *)arg0 + 0x2C);
    u32 val;
    
    *field_02 = *field_02 + arg1;
    
    val = (u32)*field_06 + arg2;
    *field_06 = val;
    *field_2C = val;
}
