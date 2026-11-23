typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0x4C - 0x3D];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x88 - 0x51];
    const u8 *unk88;
    u8 pad8C[0xB8 - 0x8C];
    u8 unkB8;
    u8 padB9[0x124 - 0xB9];
} Struct_03002AB0;

extern Struct_03002AB0 D_03002AB0[];
extern const u8 D_0822DF68[];
extern u8 D_030043BC;
extern const u8 D_082209BA[];

void sub_08030B84(Struct_03002AB0 *arg0, u16 arg1) {
    u16 offset = (D_0822DF68[arg1] | (D_0822DF68[arg1 + 1] << 8)) + 0x2A54;
    arg0->unk88 = D_0822DF68 + offset;
}

void sub_08030BB0(Struct_03002AB0 *arg0, u16 arg1) {
    D_030043BC = 1;
    sub_08030B84(arg0, arg1);
    arg0->unkB8 |= 4;
    arg0->unk4C = 4;
    arg0->unk4D = 0;
    arg0->unk50 = 0;
}

u8 sub_08030BF0(u8 arg0) {
    u8 i;

    for (i = 0; i <= 7; i++) {
        if (D_03002AB0[i].unk3C == arg0) {
            return i;
        }
    }
    return 0xFF;
}

void sub_08030C24(u8 arg0, const u8 *arg1) {
    u16 offset = arg1[0] | (arg1[1] << 8);
    Struct_03002AB0 *entry = &D_03002AB0[arg0];

    entry->unk88 = D_082209BA + 1 + offset;
    entry->unk4C = 4;
    entry->unk4D = 0;
    entry->unk50 = 0;
}
