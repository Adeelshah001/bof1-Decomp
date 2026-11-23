typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x16 - 0x08];
    u16 unk16;
    u8 pad18[0x2C - 0x18];
    u16 unk2C;
    u8 pad2E[0x3B - 0x2E];
    u8 unk3B;
    u8 pad3C[0x68 - 0x3C];
    u32 unk68;
    u8 pad6C[0xD4 - 0x6C];
    Entity *unkD4;
} Entity505;

void sub_0803EE6C(void *);
void sub_080470B4(Entity505 *);
void sub_080379D4(s32);
extern void (*const D_080FD69C[])(Entity505 *);

void sub_0805058C(Entity505 *arg0) {
    arg0->unkD4->unk41 &= 0xCF;
    sub_0803EE6C(arg0);
}

void sub_080505A8(Entity505 *arg0) {
    Entity *parent = arg0->unkD4;
    sub_080470B4(arg0);
    parent->unk6 = arg0->unk6;
    if (arg0->unk16 & 0x8000) {
        if (arg0->unk2C < arg0->unk6) {
            parent->unk6 = arg0->unk2C;
            D_080FD69C[arg0->unk3B](arg0);
        }
    }
}

void sub_08050568(Entity505 *arg0) {
    D_03004830[0x2B]++;
    sub_080379D4(0x21);
    sub_0805058C(arg0);
}

void sub_08050528(Entity505 *arg0) {
    Entity *parent = arg0->unkD4;
    D_03004830[0x2B]++;
    parent->unk78 = arg0->unk68;
    sub_0803EE6C(arg0);
}
