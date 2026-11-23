typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x38 - 0x2E];
    u16 unk38;
    u8 pad3A[0x3B - 0x3A];
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u16 unk54;
    u8 pad56[0x61 - 0x56];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    void (*unk64)(void *);
    u8 pad68[0x80 - 0x68];
    u8 unk80;
} Entity497;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

extern Struct23E0 D_030023E0;

void sub_08037FC4(void *, s32);
void sub_0803A8EC(void *);
void sub_08049C40(Entity497 *, s32, s32);
void sub_08048DB8(void *);
void sub_08049CA4(void *);
void sub_08048E20(void *);
void sub_08049DE4(void *);

void sub_080496EC(Entity497 *arg0) {
    arg0->unk54 = 0x34B;
    arg0->unk64 = sub_08048DB8;
    sub_08049C40(arg0, 0x80, 0x28);
}

void sub_08049674(Entity497 *arg0) {
    Entity497 *e = arg0;
    arg0->unk2C = arg0->unk6 - 0xF0;
    arg0->unk64 = sub_08049CA4;
    sub_08049C40(arg0, 0x60, 0xC);
    if (D_030023E0.unkA4 == 0x1B1) {
        arg0->unk6 = (arg0->unk6 & 0xFFF0) | 9;
    }
    sub_0803A8EC(e);
}

void sub_08049860(Entity497 *arg0) {
    arg0->unk2C = arg0->unk6 - 0xF0;
    *(u8 *)&arg0->unk54 = 0x10;
    arg0->unk61 = 0x10;
    arg0->unk38 = 0;
    arg0->unk80 = 0;
    arg0->unk64 = sub_08048E20;
    sub_08049C40(arg0, 0x80, 0xA);
}

void sub_0804989C(Entity497 *arg0) {
    sub_08037FC4(arg0, 6);
    arg0->unk61 = 0;
    arg0->unk38 = 0;
    arg0->unk64 = sub_08049DE4;
    sub_08049C40(arg0, 0x80, 0x3A);
}
