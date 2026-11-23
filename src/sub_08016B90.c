extern u8 D_03002AB0[];
extern u8 D_03004154[];
extern u8 D_03004830[];

void sub_0803ADDC(s32, s32);
void *sub_0803ED98(void);

typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
} Unk2AB0_Pos;

void sub_08016B90(void) {
    sub_0803ADDC(0xE8, 0xFFFF);
    *(u32 *)D_03004154 = (u32)sub_0803ED98();
    
    *(u8 *)(*(u32 *)D_03004154 + 0x3A) = 1;
    *(u8 *)(*(u32 *)D_03004154 + 0x3C) = 6;
    *(u8 *)(*(u32 *)D_03004154 + 0x41) = 8;
    
    *(u16 *)(*(u32 *)D_03004154 + 2) = ((Unk2AB0_Pos *)D_03002AB0)->unk2;
    *(u16 *)(*(u32 *)D_03004154 + 6) = ((Unk2AB0_Pos *)D_03002AB0)->unk6;
    *(u16 *)(*(u32 *)D_03004154 + 0x2C) = ((Unk2AB0_Pos *)D_03002AB0)->unk6 + 0x10;
    
    D_03004830[0x2C] = 0x1E;
    D_03004830[0x2B]++;
}
