extern u16 D_03004EE4;
extern u16 D_03004ECC;

typedef struct {
    union {
        u32 w;
        u16 h[2];
        u8 b[4];
    } unk0;
    union {
        u32 w;
        u16 h[2];
        u8 b[4];
    } unk4;
    u8 pad08[0x10 - 0x08];
    u32 unk10;
    u32 unk14;
    u8 pad18[0x1C - 0x18];
    u16 unk1C;
    u8 pad1E[0x38 - 0x1E];
    u16 unk38;
} Unk82DD4;

s32 sub_08082DD4(Unk82DD4 *arg0) {
    u16 pos;

    pos = ((arg0->unk0.w << 8) >> 16) + (arg0->unk10 >> 8);
    arg0->unk0.h[0] = pos << 8;
    arg0->unk0.b[2] = pos >> 8;

    pos = ((arg0->unk4.w << 8) >> 16) + (arg0->unk14 >> 8);
    arg0->unk4.h[0] = pos << 8;
    arg0->unk4.b[2] = pos >> 8;

    pos = arg0->unk0.h[1];
    D_03004EE4 = pos;
    pos = arg0->unk4.h[1];
    D_03004ECC = pos;

    arg0->unk1C = (arg0->unk1C - 1) & 0xFF;
    if (arg0->unk1C == 0) {
        D_03004EE4 = 0;
        D_03004ECC = 0;
        arg0->unk38 = 0;
        return 1;
    }
    return 0;
}
