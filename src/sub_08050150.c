typedef struct Entity50 Entity50;
struct Entity50 {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 pad3C[0x54 - 0x3C];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
    u8 pad68[0xB4 - 0x68];
    u16 unkB4;
    u16 unkB6;
    u8 padB8[0xC9 - 0xB8];
    u8 unkC9;
    u8 padCA[0xD4 - 0xCA];
    Entity50 *unkD4;
};

typedef struct Entity50_h {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 pad3C[0x54 - 0x3C];
    u16 unk54;
    u8 pad56[0x64 - 0x56];
    u32 unk64;
    u8 pad68[0xC9 - 0x68];
    u8 unkC9;
} Entity50_h;

u8 sub_08037ED4(Entity50 *, u16, u16);
Entity50 *Entity_FindFreeSlot(void);
void sub_0804F0E4(Entity50 *);
void sub_0804F588(Entity50_h *);
void sub_080379D4(s32);
u16 sub_08037C98(Entity50 *, s32);
void sub_0803A8EC(Entity50 *);
void sub_08050360(Entity50 *);

void sub_08050188(Entity50 *arg0) {
    arg0->unk61 = sub_08037ED4(arg0, arg0->unkB4, arg0->unkB6);
    arg0->unk61 = (arg0->unk61 + arg0->unkC9) & 0x1F;
}

void sub_08050150(Entity50 *arg0) {
    Entity50 *ent = Entity_FindFreeSlot();
    if (ent != NULL) {
        ent->unk3A = 1;
        ent->unkC9 = 1;
        ent->unk3B = arg0->unk3B;
        ent->unkD4 = arg0;
        ent->unk64 = (u32)sub_0804F0E4;
    }
}

void sub_08050118(Entity50_h *arg0) {
    arg0->unk64 = (u32)sub_0804F588;
    arg0->unkC9 = 0xFF;
    if (arg0->unk3B == 5) {
        arg0->unk54 = 0;
    } else if (arg0->unk3B == 6) {
        arg0->unk54 = 0x98;
    } else {
        arg0->unk54 = 0x44;
    }
}

void sub_080500D4(Entity50 *arg0) {
    Entity50 *e = arg0;
    if (arg0->unk54 != 0) {
        if (--arg0->unk54 == 0) {
            sub_080379D4(1);
        }
    } else {
        if (sub_08037C98(arg0, 1) == 0) {
            arg0->unk64 = (u32)sub_08050360;
        }
        sub_0803A8EC(e);
    }
}
