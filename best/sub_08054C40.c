typedef struct Entity54C Entity54C;
struct Entity54C {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3A - 0x2E];
    u8 unk3A;
    u8 pad3B[0x3C - 0x3B];
    u8 unk3C;
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
    u8 pad42[0x50 - 0x42];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
    u8 pad55[0x60 - 0x55];
    s32 unk60;
    u8 pad64[0x73 - 0x64];
    u8 unk73;
    u8 pad74[0x78 - 0x74];
    void (*unk78)(void *);
};

void *Entity_FindFreeSlot(void);
s32 sub_08037C98(void *, s32);
void sub_08037FC4(void *, s32);
void sub_0803A8EC(void *);
void sub_08054A1C(void *);
void sub_08054C90(Entity54C *);
void sub_08054CD8(Entity54C *);
void sub_08054D08(void *);

void sub_08054C40(Entity54C *arg0, u8 arg1, s32 arg2) {
    void (*fn)(void *);
    arg0->unk73 = arg1;
    arg0->unk60 = arg2;
    arg0->unk54 = 0;
    fn = sub_08054A1C;
    arg0->unk78 = fn;
    fn(arg0);
}

void sub_08054C64(Entity54C *arg0) {
    Entity54C *e = arg0;
    if ((sub_08037C98(arg0, 1) << 16) == 0) {
        arg0->unk78 = (void (*)(void *))sub_08054C90;
    }
    sub_0803A8EC(e);
}

void sub_08054C90(Entity54C *arg0) {
    Entity54C *slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        u16 y;
        slot->unk3C = 0x1D;
        slot->unk3A = 1;
        slot->unk41 = 8;
        slot->unk2 = 0x758;
        y = 0x416C;
        slot->unk6 = y;
        slot->unk2C = y;
        arg0->unk78 = (void (*)(void *))sub_08054CD8;
        sub_0803A8EC(slot);
    }
}

void sub_08054CD8(Entity54C *arg0) {
    Entity54C *e = arg0;
    if (arg0->unk50 != 0) {
        sub_08037FC4(arg0, 6);
        arg0->unk6 += 0x10;
        arg0->unk78 = sub_08054D08;
    }
    sub_0803A8EC(e);
}
