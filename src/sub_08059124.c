extern u8 D_03002AB0[];
extern u16 D_030023D4;
extern u16 D_030040E0;
extern u8 D_030016A4;
extern u8 D_03001674;

u8 *Entity_FindFreeSlot(void);
void sub_08058E78(void);

void sub_080591E0(u8 *arg0) {
    *(u16 *)(arg0 + 0x12) = (*(u16 *)(D_03002AB0 + 2) >> 4) + 0x50;
    *(u16 *)(arg0 + 0x16) = *(u16 *)(D_03002AB0 + 6) >> 4;
}

void sub_0805919C(u8 *arg0) {
    u16 x;
    u16 y;

    if (*(u16 *)(arg0 + 0x12) <= 0xAB) {
        x = 0xAB;
    } else if (*(u16 *)(arg0 + 0x12) > 0x149) {
        x = 0x149;
    } else {
        x = *(u16 *)(arg0 + 0x12);
    }
    *(u16 *)(arg0 + 2) = x;
    D_030023D4 = x;

    if (*(u16 *)(arg0 + 0x16) <= 0x8E) {
        y = 0x8E;
    } else if (*(u16 *)(arg0 + 0x16) > 0x14C) {
        y = 0x14C;
    } else {
        y = *(u16 *)(arg0 + 0x16);
    }
    *(u16 *)(arg0 + 6) = y;
    D_030040E0 = y;
}

void sub_08059164(u8 *arg0) {
    u8 *ent = Entity_FindFreeSlot();
    if (ent != NULL) {
        *(u8 **)(arg0 + 0xD4) = ent;
        ent[0x3A] = 1;
        ent[0x3C] = 0x14;
        ent[0x3B] = 0x13;
        *(u16 *)(ent + 2) = *(u16 *)(arg0 + 0x12);
        *(u16 *)(ent + 6) = *(u16 *)(arg0 + 0x16);
    }
}

void sub_08059124(u8 *arg0) {
    arg0[0x61] = 0;
    sub_080591E0(arg0);
    sub_0805919C(arg0);
    sub_08059164(arg0);
    D_030016A4 = 0x20;
    D_03001674 = 8;
    *(void (**)(void))(arg0 + 0x64) = sub_08058E78;
}
