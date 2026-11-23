typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x1C - 0x08];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x3A - 0x2E];
    u8 unk3A;
    u8 pad3B[0x3D - 0x3B];
    u8 unk3D;
    u8 pad3E[0x41 - 0x3E];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    u32 unk64;
} Entity4E_B;

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
} Struct2AB0;

extern Struct2AB0 D_03002AB0;
void sub_08037FC4(void *, s32);
void sub_0804F428(void *);

void sub_0804EBA0(Entity4E_B *arg0) {
    u32 y;
    arg0->unk64 = (u32)sub_0804F428;
    arg0->unk3A |= 0x10;
    arg0->unk3D = 2;
    arg0->unk2A = 0xA2;
    arg0->unk1C = 0x1D0;
    arg0->unk41 = 8;
    arg0->unk2 = D_03002AB0.unk2;
    y = D_03002AB0.unk6 + 0x10;
    arg0->unk6 = y;
    arg0->unk2C = y;
    arg0->unk54 = 0x10;
    sub_08037FC4(arg0, 0);
}
