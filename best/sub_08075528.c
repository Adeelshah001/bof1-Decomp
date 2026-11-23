extern const u16 D_08151B6C[];
extern const u16 D_08151B74[];
extern const u8 D_08151B94[];

typedef struct {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x2E - 0x1E];
    u16 unk2E;
    u8 pad30[0x3B - 0x30];
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x7D - 0x42];
    u8 unk7D;
} Unk75528;

void sub_08075528(Unk75528 *arg0) {
    u8 idx = arg0->unk3B;
    u16 val;
    u8 val2;
    arg0->unk1C = D_08151B6C[idx];
    val = D_08151B74[idx];
    arg0->unk2E = (((val - 0x6000) >> 8) << 9) + (val & 0xFF) + 0x6000;
    val2 = D_08151B94[idx];
    arg0->unk41 = val2;
    arg0->unk7D |= val2 << 4;
}
