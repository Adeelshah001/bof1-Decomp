typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3B - 0x2E];
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u16 unk54;
    u8 pad56[0x64 - 0x56];
    void (*unk64)(void *);
} Entity497;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

extern Struct23E0 D_030023E0;

void sub_08049CE4(Entity497 *, s32);
void sub_08049C40(Entity497 *, s32, s32);
void sub_0803EE6C(Entity497 *);
void sub_08049C88(void *);
void sub_08049CA4(void *);
void sub_08048DB8(void *);

void sub_08049774(Entity497 *arg0) {
    Entity497 *e = arg0;
    if (arg0->unk3B == 3) {
        arg0->unk2C--;
    }
    sub_08049CE4(e, 0x2A);
}

void sub_08049794(Entity497 *arg0) {
    arg0->unk64 = sub_08049C88;
    sub_08049C40(arg0, 0xA0, 0xE);
    if (D_030023E0.unkA4 == 0xFA) {
        arg0->unk2C += 0x40;
        arg0->unk41 |= 0x30;
    }
}

void sub_080497D0(Entity497 *arg0) {
    if ((s8)D_03004830[0x31] == 2) {
        arg0->unk64 = sub_08049CA4;
        sub_08049C40(arg0, 0xC0, 0x3A);
        arg0->unk2C = arg0->unk6 - 0xC;
    } else {
        sub_0803EE6C(arg0);
    }
}

void sub_08049710(Entity497 *arg0) {
    arg0->unk54 = 0x34B;
    arg0->unk2C = 8;
    arg0->unk64 = sub_08048DB8;
    sub_08049C40(arg0, 0x80, 0x2E);
}
