extern const u8 D_0822B3B8[];
extern u8 D_03003F98;

void *Entity_FindFreeSlot(void);
void sub_0803EE6C(void *);
void sub_08053AA8(void *);

typedef struct Entity53A Entity53A;
struct Entity53A {
    u8 pad00[0x22];
    u16 unk22;
    u8 pad24[0x3A - 0x24];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x40 - 0x3D];
    u8 unk40;
    u8 unk41;
    u8 pad42[0x4C - 0x42];
    u8 unk4C;
    u8 pad4D[0x50 - 0x4D];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    void (*unk64)(void *);
    u8 pad68[0x80 - 0x68];
    u8 unk80;
    u8 pad81[0xCC - 0x81];
    u8 unkCC;
    u8 padCD[0xD8 - 0xCD];
    Entity53A *unkD8;
};

void sub_08053A3C(Entity53A *arg0) {
    arg0->unkD8->unk41 = D_0822B3B8[arg0->unkCC + 1] * 2;
    arg0->unkCC += 2;
}

void sub_08053A60(Entity53A *arg0) {
    Entity53A *slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unk3A = 1;
        slot->unk3B = 0;
        slot->unk41 = 0x3A;
        slot->unk3C = 0x13;
        slot->unk80 = 0x23;
        arg0->unk64 = sub_08053AA8;
        slot->unk54 = 0x5E;
    }
}

void sub_08053AA8(void *arg0) {
    u8 *timer = (u8 *)arg0 + 0x54;
    if (--*timer == 0) {
        D_03003F98 |= 0x20;
        sub_0803EE6C(arg0);
    }
}

void sub_08053948(Entity53A *arg0) {
    Entity53A *e = arg0->unkD8;
    e->unk4C = 0;
    e->unk50 = 0;
    e->unk22 = 0;
    e->unk40 = 0;
    e->unk3A = 0;
    arg0->unkCC++;
}
