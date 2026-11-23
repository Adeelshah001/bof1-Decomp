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
    u8 unk3B;
    u8 unk3C;
    u8 unk3D;
    u8 pad3E[0x41 - 0x3E];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    u32 unk64;
} LocalEntity;

s32 sub_08037C98(void *, s32);
s32 sub_0803A8EC(void *);
void sub_0803EE6C(void *);
void sub_080379D4(s32);
void sub_0803A974(void *);
LocalEntity *Entity_FindFreeSlot(void);
void sub_0804FFE4(void *);
s32 sub_08037FC4(void *, s32);
void sub_080502BC(void *);

void sub_0804FFB4(Entity *arg0) {
    if (--arg0->unk54 != 0) {
        sub_08037C98(arg0, 0);
        sub_0803A8EC(arg0);
    } else {
        sub_0803EE6C(arg0);
    }
}

void sub_0805001C(Entity *arg0) {
    u8 *p = &arg0->unk54;
    u8 val = *p;
    if (val == 0) {
        sub_0803EE6C(arg0);
        return;
    }
    if ((val & 0x1F) == 0x10) {
        sub_080379D4(0x25);
    }
    sub_08037C98(arg0, 0);
    sub_0803A974(arg0);
    (*p)--;
}

void sub_08050058(LocalEntity *arg0) {
    LocalEntity *slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unk54 = arg0->unk54 * 8;
        slot->unk3A = 1;
        slot->unk1C = arg0->unk1C;
        slot->unk2 = arg0->unk2;
        slot->unk6 = arg0->unk6;
        slot->unk2C = arg0->unk6 + 1;
        arg0->unk64 = (u32)sub_0804FFE4;
    }
}

void sub_0805009C(LocalEntity *arg0) {
    arg0->unk3D = 2;
    arg0->unk1C = 0x170;
    arg0->unk41 = 0xC;
    arg0->unk2A = 0xA2;
    sub_08037FC4(arg0, 0);
    arg0->unk64 = (u32)sub_080502BC;
    ((void (*)(LocalEntity *))arg0->unk64)(arg0);
}
