typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x40 - 0x2E];
    u8 unk40;
    u8 pad41[0x54 - 0x41];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    void (*unk64)(void *);
    u8 pad68[0x80 - 0x68];
    u8 unk80;
    u8 pad81[0xDC - 0x81];
    void (*unkDC)(void *);
    u8 padE0[0xE0 - 0xE0];
} Entity49B;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

extern Struct23E0 D_030023E0;

void sub_08049C40(Entity49B *, s32, s32);
u8 sub_08001770(s32);
void sub_08037FC4(Entity49B *, s32);
void sub_080491AC(Entity49B *, s32, s32, s32);
void sub_08049CA4(void *);
void sub_08049F74(void *);
void sub_08049C88(void *);
void sub_0804A1FC(void *);
void sub_0804A230(void *);

void sub_08049AFC(Entity49B *arg0) {
    arg0->unk2C = 0xC0A8;
    arg0->unk64 = sub_08049CA4;
    sub_08049C40(arg0, 0xA0, 0x2C);
}

void sub_08049B1C(Entity49B *arg0) {
    Entity49B *e = arg0;
    if (sub_08001770(0xD6) != 0) {
        sub_08037FC4(arg0, 0x1C);
    }
    e->unk64 = sub_08049F74;
    sub_08049C40(e, 0xA0, 0x2C);
}

void sub_08049A80(Entity49B *arg0) {
    Entity49B *e = arg0;
    arg0->unk64 = sub_08049C88;
    if (D_030023E0.unkA4 == 0x188) {
        arg0->unk6++;
    }
    sub_08049C40(e, 0xA0, 0x3C);
}

void sub_08049BB4(Entity49B *arg0) {
    if (arg0->unk40 != 0) {
        arg0->unk54 = 0x1C;
        arg0->unkDC = sub_0804A1FC;
        arg0->unk80 = 1;
        sub_080491AC(arg0, 6, 0x180, 0xF918);
    } else {
        arg0->unk54 = 8;
        arg0->unkDC = sub_0804A230;
        sub_080491AC(arg0, 0xA, 0x192, 0xF920);
    }
}
