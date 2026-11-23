extern const u8 D_0822F254[];
extern void (* const D_080FD288[])(void *);
extern void *D_03004448;

void sub_080379D4(s32);
u16 *sub_08040A74(s32);
void sub_0804B338(void *, s32);
void *Entity_FindFreeSlot(void);

typedef struct {
    u8 pad00[0x10];
    u32 unk10;
    u32 unk14;
    u8 pad18[0x3A - 0x18];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x54 - 0x3D];
    u8 unk54;
    u8 unk55;
    u8 pad56[0xA4 - 0x56];
    u16 unkA4;
    u8 padA6[0xC7 - 0xA6];
    u8 unkC7;
    u8 padC8[0xD4 - 0xC8];
    void *unkD4;
} Entity4B2;

void sub_0804B2AC(void *arg0, u16 arg1, u16 arg2) {
    u16 *ptr = sub_08040A74(0x31);
    ptr[0] = arg1;
    ptr[2] = arg2;
    sub_080379D4(0xE);
}

void sub_0804B258(Entity4B2 *arg0, u8 arg1) {
    u32 idx;
    u16 offset;
    arg0->unkA4++;
    idx = arg0->unk3B * 4;
    offset = D_0822F254[idx + 2] | (D_0822F254[idx + 3] << 8);
    offset += (u8)~arg1;
    D_080FD288[D_0822F254[offset]](arg0);
}

void sub_0804B300(Entity4B2 *arg0) {
    u8 val;
    arg0->unk54 = D_0822F254[arg0->unkA4];
    val = D_0822F254[arg0->unkA4 + 1];
    arg0->unk55 = val;
    arg0->unkC7 = val;
    sub_0804B338(arg0, 1);
}

void sub_0804B204(Entity4B2 *arg0) {
    Entity4B2 *object = Entity_FindFreeSlot();
    if (object != NULL) {
        object->unk3A = 1;
        object->unk3C = 0x14;
        object->unk3B = 8;
        object->unk10 = (object->unk10 & 0xFF000000) | 0x56000;
        object->unk14 = (object->unk14 & 0xFF000000) | 0x8E4000;
        arg0->unkD4 = object;
        D_03004448 = object;
    }
}
