typedef struct Entity53 Entity53;
struct Entity53 {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x02];
    u16 unk06;
    u8 pad08[0x3A - 0x08];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x64 - 0x3D];
    u32 unk64;
    u8 pad68[0x94 - 0x68];
    Entity53 *unk94;
    u8 pad98[0xB4 - 0x98];
    u16 unkB4;
    u8 padB6[0xB8 - 0xB6];
    u8 unkB8;
    u8 padB9[0xC9 - 0xB9];
    u8 unkC9;
    u8 padCA[0xCC - 0xCA];
    u8 unkCC;
    u8 padCD[0xD2 - 0xCD];
    u8 unkD2;
    u8 padD3;
    Entity53 *unkD4;
    Entity53 *unkD8;
};

extern const u8 D_080FE04C[];
extern const u8 D_0822B3B8[];
extern u8 D_03000ACC;
extern Entity53 D_03002AB0;

void sub_08053440(Entity53 *);
Entity53 *Entity_FindFreeSlot(void);
u8 sub_08038458(s32);

void sub_0805375C(Entity53 *arg0) {
    arg0->unkCC = D_080FE04C[arg0->unk3B];
    arg0->unkC9 = 0;
    arg0->unk64 = (u32)sub_08053440;
}

void sub_08053638(Entity53 *arg0) {
    Entity53 *ent;
    Entity53 *parent = arg0->unkD4;

    ent = Entity_FindFreeSlot();
    if (ent != NULL) {
        ent->unk3A = 1;
        ent->unk3C = 0x14;
        ent->unk3B = 0x10;
        ent->unkD2 = D_0822B3B8[arg0->unkCC + 1];
        ent->unk02 = parent->unk02;
        ent->unk06 = parent->unk06;
        arg0->unkD8 = ent;
        arg0->unkCC += 2;
    }
}

void sub_08053900(Entity53 *arg0) {
    if (sub_08038458(0) != 0) {
        D_03002AB0.unk94 = arg0->unkD4;
        D_030023D0[0] = 2;
        D_03002AB0.unkB8 &= ~4;
        arg0->unkCC++;
    }
}

void sub_08053588(Entity53 *arg0) {
    Entity53 *ent;

    if (D_03000ACC == 0) {
        D_03000ACC = 0xB;
    }
    ent = Entity_FindFreeSlot();
    if (ent != NULL) {
        ent->unk3A = 1;
        ent->unk3C = 0x14;
        ent->unk3B = D_03000ACC;
        arg0->unkB4 = 0xC;
        arg0->unkCC++;
    }
}
