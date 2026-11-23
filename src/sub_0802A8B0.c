extern u8 D_0202B1C0[];

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad6[0x2A - 0x06];
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
    u16 unk30;
    u16 unk32;
    u16 unk34;
    u16 unk36;
    u16 unk38;
    u16 unk3A;
    u16 unk3C;
    u16 unk3E;
    u16 unk40;
    u16 unk42;
} BattleStruct;

u16 sub_0802A8B0(s16 *arg0, BattleStruct *arg1, BattleStruct *arg2) {
    u32 r0_val;
    u32 r1_val;
    u32 r0_result;
    u32 r1_unk2;
    u32 r2_mask;
    u32 r1_unk42;
    u16 *r1_ptr;
    u32 base;
    u16 ret_val;
    
    r0_val = arg1->unk3A;
    r1_val = r0_val;
    r1_val += 0x20;
    arg1->unk3A = (u16)r1_val;
    if (arg2->unk4 == 0) {
        u32 mask = 0x3FF;
        r1_val &= mask;
        arg1->unk3A = (u16)r1_val;
    }
    
    base = (u32)D_0202B1C0;
    r0_result = (D_0202B1C0[arg1->unk3A] << 6) + arg1->unk30;
    ret_val = (u16)r0_result;
    
    r1_ptr = &arg1->unk42;
    r1_unk2 = arg1->unk2;
    r2_mask = 0x80;
    r2_mask <<= 1;
    r2_mask &= r1_unk2;
    r2_mask <<= 3;
    r1_unk42 = *r1_ptr;
    r1_unk42 += r2_mask;
    *arg0 = (s16)r1_unk42;
    
    return ret_val;
}
