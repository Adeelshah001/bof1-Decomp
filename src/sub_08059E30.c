typedef struct {
    u8 pad00[0x03];
    u8 unk3;
    u8 unk4;
    u8 unk5;
} Struct58;

extern u8 D_03003410;
extern u16 D_03004E18;
extern u16 D_03004E08;
extern u32 D_030040F0;
extern u32 D_03003FB0;
extern u32 D_03002500;
extern u8 D_030023DC;
extern u16 D_03002508;
extern u8 D_03004E90;
extern u16 D_0300168C;
extern u16 D_03001644;

void sub_08058C8C(Struct58 *arg0) {
    D_03003410 = 0x13;
    D_03004E18 |= 0xF0;
    D_03004E08 |= 0xF0;
    arg0->unk3 = 0;
    arg0->unk4 = 0;
    arg0->unk5 = 4;
    D_030023DC = 1;
}

void sub_08058D00(Struct58 *arg0) {
    D_03003410 = 0x13;
    D_03004E18 |= 0xF0;
    D_03004E08 |= 0xF0;
    D_030040F0 = 0;
    D_03003FB0 = 0;
    D_03002500 = 0;
    arg0->unk3 = 0;
    arg0->unk4 = 3;
    arg0->unk5 = 4;
    D_030023DC = 1;
}

void sub_080589F0(Struct58 *arg0) {
    if (D_03002508 != 0 && D_03004E90 == 0) {
        D_0300168C = 0xDE;
    } else {
        D_0300168C = 0xDF;
    }
    arg0->unk4 = 1;
    arg0->unk3 = D_03001644;
    arg0->unk5 = 8;
    D_030023DC = 1;
}

typedef struct {
    u8 pad00[0x1A];
    u8 unk1A;
    u8 pad1B[0x1D - 0x1B];
    u8 unk1D;
    u8 unk1E;
    u8 unk1F;
    u8 pad20[0x22 - 0x20];
    u8 unk22;
} Struct4550;

typedef struct {
    u8 pad00[0x2A6];
    u8 unk2A6;
} StructDBD0;

extern Struct4550 D_03004550;
extern StructDBD0 D_0202DBD0;
extern const u8 D_080FFB00[];
extern const u8 D_080FFB04[];

s32 sub_08059E30(void) {
    u8 idx;
    D_03004550.unk1D &= 0xC;
    idx = D_0202DBD0.unk2A6;
    D_03004550.unk22 = D_080FFB00[idx];
    D_03004550.unk1E = D_080FFB04[idx];
    D_03004550.unk1F = 0;
    D_03004550.unk1A = 2;
    return 0;
}
