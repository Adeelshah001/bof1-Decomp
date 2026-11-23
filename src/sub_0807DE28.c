typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x0A - 0x08];
    u16 unkA;
    u8 pad0C[0x16 - 0x0C];
    u16 unk16;
    u8 pad18[0x1A - 0x18];
    u16 unk1A;
    u8 pad1C[0x290 - 0x1C];
    u16 unk290;
    u8 pad292[0x2AC - 0x292];
    u8 unk2AC;
    u8 pad2AD[0x2B9 - 0x2AD];
    u8 unk2B9;
} Unk0202DBD0;

typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} Unk03004F50;

extern Unk0202DBD0 D_0202DBD0;
extern u8 D_03004584;
extern Unk03004F50 D_03004F50;

void sub_080017EC(s32);
void sub_08002BBC(u8);

void sub_0807DE28(u8 arg0) {
    if (arg0 != 0) {
        D_0202DBD0.unk290 = 0xBB;
        D_0202DBD0.unk16 = 0x1C8;
        D_0202DBD0.unk1A = 0xA1FC;
        D_0202DBD0.unk2B9 = 1;
        sub_080017EC(0x7E);
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        D_0202DBD0.unk6 = 0xAA8;
        D_0202DBD0.unkA = 0x3E5C;
        D_0202DBD0.unk2AC = 1;
    }
}
