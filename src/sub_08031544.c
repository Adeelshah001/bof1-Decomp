typedef void (*FuncPtr314E8)(void *);
extern const FuncPtr314E8 D_080FA4D8[];
extern u8 D_03002AB0[];

u8 sub_08038458(s32);

typedef struct {
    u16 unk00;
    u16 unk02;
    u16 unk04;
    u8 pad06[0x4C - 0x06];
    u16 unk4C;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x88 - 0x51];
    u8 *unk88;
    u8 pad8C[0xB8 - 0x8C];
    u8 unkB8;
} Unk3149C;

void sub_080314E8(void *arg0, u8 arg1) {
    D_080FA4D8[arg1 & 7](arg0);
}

void sub_0803149C(Unk3149C *arg0, u8 arg1) {
    if (!(arg1 & 1) || sub_08038458(0) != 0) {
        u8 *ptr = arg0->unk88;
        u32 val = (ptr[2] << 8) | ptr[1];
        *(u32 *)(D_03002AB0 + 0x94) = val;
        *(u32 *)(D_03002AB0 + 0x90) = val;
        D_030023D0[0] = 2;
        arg0->unk88 = ptr + 3;
    }
}

void sub_08031544(Unk3149C *arg0) {
    arg0->unk88 = 0;
    arg0->unk4C = 2;
    arg0->unk50 = 0;
    arg0->unk00 = 0;
    arg0->unk04 = 0;
}

void sub_08031564(Unk3149C *arg0) {
    arg0->unkB8 &= 0xFB;
    arg0->unk88 = 0;
    arg0->unk4C = 2;
    arg0->unk50 = 0;
    arg0->unk00 = 0;
    arg0->unk04 = 0;
}
