typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3B - 0x2E];
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x3F - 0x3D];
    u8 unk3F;
    u8 pad40[0x46 - 0x40];
    u16 unk46;
    u8 pad48[0x4A - 0x48];
    u16 unk4A;
    u8 pad4C[0x64 - 0x4C];
    u32 unk64;
} Unk464C0;

extern const u16 D_080FC68C[];
extern const u32 D_080FC6A8[];

void sub_080464C0(Unk464C0 *arg0) {
    u8 idx = arg0->unk3C * 2;
    u16 val = D_080FC68C[idx];

    arg0->unk2 = val;
    arg0->unk46 = val;
    arg0->unk6 = D_080FC68C[idx + 1];
    arg0->unk4A = arg0->unk6 + 4;
    arg0->unk2C = arg0->unk6;
    arg0->unk64 = D_080FC6A8[arg0->unk3B];
    arg0->unk3C = 2;
    if (!(arg0->unk3B & 0x80)) {
        arg0->unk3F = 1;
    } else {
        arg0->unk3F = 3;
    }
}
