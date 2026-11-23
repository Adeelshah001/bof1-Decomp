extern u8 D_03002AB0[];
extern Entity *Entity_FindFreeSlot(void);
extern Entity *D_03000840;
s32 sub_08001770(s32);

void sub_080075A4(u16 arg0) {
    u8 *base = D_03002AB0;

    *(u32 *)(base + 0x94) = arg0;
    D_030023D0[0] = 2;
}

void sub_080075BC(s32 arg0) {
    u8 *base;

    D_03004830[0x2B]++;
    base = D_03002AB0;
    *(u32 *)(base + 0x94) = (u32)arg0;
    D_030023D0[0] = 2;
}

void sub_08007548(u16 arg0, s32 arg1) {
    Entity *ent;

    ent = Entity_FindFreeSlot();
    D_03000840 = ent;
    if (ent != NULL) {
        ((u8 *)ent)[0x3B] = arg0;
        ((u8 *)D_03000840)[0x3E] = arg0 >> 8;
        ((u8 *)D_03000840)[0x3A] = 1;
        ((u8 *)D_03000840)[0x3C] = 0x12;
        *(s32 *)((u8 *)D_03000840 + 0xD4) = arg1;
    }
}

void sub_080076F4(void) {
    if ((sub_08001770(0x27) << 0x18) == 0) {
        D_03004830[0x2D] &= ~0x10;
    }
}
