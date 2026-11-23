typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
    u8 padB9[0x1AC - 0xB9];
    u32 unk1AC;
    u8 pad1B0[0x1DC - 0x1B0];
    u8 unk1DC;
    u8 pad1DD[0x2D0 - 0x1DD];
    u32 unk2D0;
    u8 pad2D4[0x300 - 0x2D4];
    u8 unk300;
    u8 pad301[0x3F4 - 0x301];
    u32 unk3F4;
    u8 pad3F8[0x424 - 0x3F8];
    u8 unk424;
} Unk03002AB0;
extern Unk03002AB0 D_03002AB0;

void sub_0801051C(void) {
    D_03002AB0.unk1AC++;
}

void sub_08010530(void) {
    D_03002AB0.unk2D0++;
}

void sub_08010544(void) {
    D_03002AB0.unk3F4++;
}

void sub_080104D8(void) {
    D_03002AB0.unkB8 = 0;
    D_03002AB0.unk1DC = 0;
    D_03002AB0.unk300 = 0;
    D_03002AB0.unk424 = 0;
}
