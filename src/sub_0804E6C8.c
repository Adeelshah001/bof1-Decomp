void sub_0804FE34(void);
void sub_0804FDE4(Entity *);

extern struct {
    u8 pad[0xA4];
    u16 unkA4;
} D_030023E0;

void sub_0804E6C8(Entity *entity) {
    u16 val;
    u8 unk3B_val;
    u8 shifted;
    u8 *ptr54;
    u8 *ptrC9;
    
    sub_0804FE34();
    
    val = D_030023E0.unkA4;
    
    if (val == 0x66) {
        unk3B_val = entity->unk3B;
        shifted = unk3B_val << 6;
        ptr54 = (u8 *)entity + 0x54;
        *ptr54 = shifted;
        unk3B_val = entity->unk3B;
        
        if (unk3B_val != 3) {
            ptrC9 = ptr54 + 0x75;
            *ptrC9 = 0;
        } else {
            ptrC9 = (u8 *)entity + 0xC9;
            *ptrC9 = 1;
        }
    } else if (val == 6) {
        unk3B_val = entity->unk3B;
        if (unk3B_val > 3) {
            ptrC9 = (u8 *)entity + 0xC9;
            *ptrC9 = 0;
        } else {
            ptrC9 = (u8 *)entity + 0xC9;
            *ptrC9 = 1;
        }
    } else {
        ptr54 = (u8 *)entity + 0x54;
        *ptr54 = 0;
    }
    
    sub_0804FDE4(entity);
}
