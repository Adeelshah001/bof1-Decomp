extern u8 D_081A0C08[];
extern u8 D_0202B1C0[];
extern void sub_0802A578(u16, u16, u32);
extern void sub_0802A598(u16, u16, u32);

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad6[0x2C];
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

void sub_0802A7F0(u8 arg0, u16 arg1, u16 arg2) {
    u16 offset = D_081A0C08[arg0 + 0x28] | (D_081A0C08[arg0 + 0x29] << 8);
    sub_0802A578(arg1, arg2, (u32)&D_081A0C08[offset]);
}

void sub_0802A828(u8 arg0, u16 arg1, u16 arg2) {
    u16 offset = D_081A0C08[arg0 + 0x2C] | (D_081A0C08[arg0 + 0x2D] << 8);
    sub_0802A598(arg1, arg2, (u32)&D_081A0C08[offset]);
}

u16 sub_0802A860(u16 *arg0, BattleStruct *arg1) {
    u16 val;
    u16 temp;
    u16 result;
    u16 temp2;
    
    val = arg1->unk3A;
    temp = ((0x1F & val) + 1) & 0x1F;
    temp |= val & 0xFFE0;
    arg1->unk3A = temp;
    
    result = (D_0202B1C0[temp] << 6) + arg1->unk32;
    temp2 = *arg0;
    temp2 = (temp2 & 0xF800) ^ 0x800;
    temp2 |= arg1->unk40;
    *arg0 = temp2;
    
    return result;
}

u16 sub_0802A8B0(s16 *arg0, BattleStruct *arg1, BattleStruct *arg2) {
    u16 val;
    u16 temp;
    
    val = arg1->unk3A + 0x20;
    arg1->unk3A = val;
    if (arg2->unk4 == 0) {
        arg1->unk3A = val & 0x3FF;
    }
    
    *arg0 = arg1->unk42 + ((arg1->unk2 & 0x100) * 8);
    return (D_0202B1C0[arg1->unk3A] << 6) + arg1->unk30;
}
