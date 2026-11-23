typedef struct {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u8 pad2C[0x3A - 0x2C];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 unk3D;
    u8 pad3E[0x41 - 0x3E];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x64 - 0x56];
    u32 unk64;
    u8 pad68[0x80 - 0x68];
    u8 unk80;
    u8 pad81[0xC9 - 0x81];
    u8 unkC9;
    u8 unkCA;
    u8 unkCB;
    u8 padCC[0xD4 - 0xCC];
    u32 unkD4;
} ActorFD;

ActorFD *Entity_FindFreeSlot(void);
void sub_0804F614(void);
void sub_080503B8(void);
void sub_0804F184(void);
u16 sub_08037C98(void *, s32);
void sub_0803A8EC(void *);
void sub_08037FC4(void *, s32);
void sub_080502A0(void);

void sub_0804FD0C(ActorFD *arg0) {
    ActorFD *slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unk3A = 1;
        slot->unk54 = 0x10;
        slot->unkC9 = 0;
        slot->unkD4 = arg0->unkD4;
        slot->unk64 = (u32)sub_0804F614;
    }
}

void sub_0804FD6C(ActorFD *arg0, u8 arg1) {
    ActorFD *slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unkCB = arg1;
        slot->unk3A = 1;
        slot->unk3B = arg0->unk3B;
        if (arg0->unk3B != 0x28) {
            slot->unk64 = (u32)sub_080503B8;
        } else {
            slot->unk64 = (u32)sub_0804F184;
        }
        slot->unkD4 = arg0->unkD4;
    }
}

void sub_0804F428(ActorFD *arg0) {
    u8 *timer = &arg0->unk54;
    u8 t = *timer;
    if (t == 0) {
        u8 *p;
        if (sub_08037C98(arg0, 1) != 0) {
            sub_0803A8EC(arg0);
            return;
        }
        arg0->unk64 = (u32)sub_080502A0;
        p = &arg0->unk3D;
        *p = 2;
        arg0->unk2A = 0x224;
        arg0->unk1C = 0x1AA;
        *timer = 0x21;
        p += 4;
        *p = 0xA;
        sub_08037FC4(arg0, 0);
        (*timer)--;
    } else {
        *timer = t - 1;
    }
}
