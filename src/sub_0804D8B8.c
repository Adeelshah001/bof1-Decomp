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
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    u32 unk64;
    u8 pad68[0x80 - 0x68];
    u8 unk80;
} MyEntity;

s32 sub_08037C98(void *, s32);
void sub_0803A8EC(void *);
void sub_0804D85C(MyEntity *);
MyEntity *Entity_FindFreeSlot(void);
void sub_0804D944(MyEntity *);
void sub_08037FC4(void *, s32);
void sub_0804D724(void);

extern u16 D_080FD4A4[];

void sub_0804D9B8(MyEntity *arg0) {
    MyEntity *r5 = arg0;
    if ((sub_08037C98(arg0, 1) << 16) == 0) {
        arg0->unk64 = (u32)&sub_0804D85C;
    }
    sub_0803A8EC(r5);
}

MyEntity *sub_0804D8B8(void *unused, u8 arg1) {
    MyEntity *e = Entity_FindFreeSlot();
    if (e != NULL) {
        e->unk3A = 1;
        e->unk3C = 0xD;
        e->unk3B = 2;
        e->unk2 = D_080FD4A4[arg1];
        e->unk6 = D_080FD4A4[arg1 + 1];
        e->unk2C = D_080FD4A4[arg1 + 1];
    }
    return e;
}

void sub_0804D85C(MyEntity *arg0) {
    MyEntity *r6 = arg0;
    sub_0804D944(arg0);
    if (--arg0->unk54 == 0) {
        if (arg0->unk80 == 0) {
            arg0->unk80 = 8;
            arg0->unk64 = (u32)&sub_0804D9B8;
            arg0->unk54++;
            sub_08037FC4(arg0, 4);
        } else {
            arg0->unk54 = 0x50;
            sub_0804D8B8(r6, arg0->unk80 * 2);
            arg0->unk80--;
        }
    }
}

void sub_0804D844(MyEntity *arg0, s32 arg1) {
    arg0->unk1C = arg1;
    arg0->unk2A = 0x7C;
    arg0->unk41 = 0x34;
    sub_0804D724();
}
