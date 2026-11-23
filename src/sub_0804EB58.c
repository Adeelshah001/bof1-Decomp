typedef struct Entity4E {
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
    u16 unk54;
    u8 pad56[0x64 - 0x56];
    u32 unk64;
    u8 pad68[0xC9 - 0x68];
    u8 unkC9;
    u8 padCA;
    u8 unkCB;
    u8 padCC[0xD4 - 0xCC];
    struct Entity4E *unkD4;
} Entity4E;

typedef struct Entity4E_B {
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
    u8 pad68[0xD4 - 0x68];
    struct Entity4E_B *unkD4;
} Entity4E_B;

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
} Struct2AB0;

extern const u16 D_080FD574[];
extern Struct2AB0 D_03002AB0;
extern u16 D_030023D4;
extern u16 D_030040E0;

void sub_08037FC4(void *, s32);
void sub_0804F428(void *);
void sub_080502E8(void *);
void sub_080500D4(void *);

void sub_0804EB58(Entity4E *arg0) {
    arg0->unk54 = D_080FD574[arg0->unkCB];
    arg0->unk2C += 0x32;
    arg0->unk41 = 0xE;
    arg0->unk1C = 0x1A0;
    arg0->unkC9++;
    arg0->unk2A = 0x138;
    sub_08037FC4(arg0, 6);
}

void sub_0804EBA0(Entity4E_B *arg0) {
    u16 y;
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

void sub_0804EBF8(Entity4E_B *arg0) {
    Entity4E_B *parent = arg0->unkD4;
    u16 y;
    arg0->unk3D = 2;
    arg0->unk41 = 0xE;
    arg0->unk1C = 0x150;
    arg0->unk54 = 0x80;
    arg0->unk64 = (u32)sub_080502E8;
    arg0->unk2 = parent->unk2;
    y = parent->unk6;
    arg0->unk6 = y - 0x20;
    arg0->unk2C = y - 8;
    arg0->unk2A = 0x138;
    sub_08037FC4(arg0, 6);
}

void sub_0804EC44(Entity4E_B *arg0) {
    u16 y;
    arg0->unk2 = D_030023D4;
    y = D_030040E0;
    arg0->unk6 = y;
    arg0->unk2C = y;
    arg0->unk64 = (u32)sub_080500D4;
    arg0->unk3D = 2;
    arg0->unk41 = 8;
    arg0->unk3A |= 0x30;
    arg0->unk1C = 0;
    arg0->unk2A = 0xA4;
    sub_08037FC4(arg0, 0x18);
    arg0->unk54 = 0x2E;
}
