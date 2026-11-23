typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x02];
    u16 unk06;
    u8 pad08[0x46 - 0x08];
    u16 unk46;
    u8 pad48[0x4A - 0x48];
    u16 unk4A;
    u8 pad4C[0x61 - 0x4C];
    u8 unk61;
    u8 pad62[0x6F - 0x62];
    u8 unk6F;
    u8 pad70[0x124 - 0x70];
} Struct7E0E0;

extern Struct7E0E0 D_03003620;
extern Struct7E0E0 D_03002BD4[];

void sub_0803AF58(s32, s32);

void sub_0807E0E0(void) {
    D_03003620.unk02 = 0xEA8;
    D_03003620.unk46 = 0xEA8;
    D_03003620.unk06 = 0xFDAC;
    D_03003620.unk4A = 0xFDAC;
    D_03003620.unk6F = 0;
    D_03002BD4[0].unk02 = 0xEA8;
    D_03002BD4[0].unk06 = 0xFD6C;
    D_03002BD4[-1].unk61 = 2;
    D_03002BD4[0].unk61 = 2;
    sub_0803AF58(0x62, 0xFFFF);
    sub_0803AF58(0x69, 0xFFFF);
}
