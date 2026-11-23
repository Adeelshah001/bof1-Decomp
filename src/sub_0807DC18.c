struct Unk2DBD0 {
    u8 pad00[0x16];
    u16 unk16;
    u8 pad18[0x1A - 0x18];
    u16 unk1A;
    u8 pad1C[0x290 - 0x1C];
    u16 unk290;
    u8 pad292[0x2B9 - 0x292];
    u8 unk2B9;
};

struct Unk2AB0 {
    u8 pad00[0xB8];
    u8 unkB8;
};

struct Unk4F50 {
    u8 pad00[0x5B];
    u8 unk5B;
};

extern struct Unk2DBD0 D_0202DBD0;
extern struct Unk2AB0 D_03002AB0;
extern u8 D_03004584;
extern struct Unk4F50 D_03004F50;

void sub_080017EC(s32);

void sub_0807DC18(u8 arg0) {
    if (arg0 != 0) {
        D_0202DBD0.unk290 = 0x102;
        D_0202DBD0.unk16 = 0x1DB8;
        D_0202DBD0.unk1A = 0x8D7C;
        D_0202DBD0.unk2B9 = 1;
        D_03002AB0.unkB8 &= ~4;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
        return;
    }
    sub_080017EC(0xA1);
}
