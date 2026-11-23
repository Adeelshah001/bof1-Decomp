extern u8 D_03002AB0[];

s32 sub_080379D4(s32);
void *sub_0803ED98(void);
void *Entity_FindFreeSlot(void);

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x60];
    u8 *script;
} ScriptEntity;

void sub_0802313C(ScriptEntity *arg0) {
    void *ent;
    u8 *base;
    u8 val;

    sub_080379D4(0x22);
    ent = Entity_FindFreeSlot();
    if (ent != NULL) {
        base = (u8 *)ent;
        base[0x3C] = 6;
        base[0x3A] = 1;
        val = arg0->script[2] << 1;
        base[0x41] = val;
        *(u16 *)(base + 0x02) = arg0->unk2;
        *(u16 *)(base + 0x06) = arg0->unk6;
        *(u16 *)(base + 0x2C) = (u16)(arg0->unk6 + 0x10);
    }
    arg0->script += 3;
}

void sub_08023184(ScriptEntity *arg0) {
    void *ent;
    u8 *base;
    u8 val;

    ent = sub_0803ED98();
    if (ent != NULL) {
        base = (u8 *)ent;
        base[0x3B] = 0;
        base[0x3C] = 8;
        base[0x3A] = 1;
        val = arg0->script[2] << 1;
        base[0x41] = val;
        *(u16 *)(base + 0x02) = arg0->unk2;
        *(u16 *)(base + 0x06) = arg0->unk6;
        *(u16 *)(base + 0x2C) = (u16)(arg0->unk6 + 0x10);
    }
    arg0->script += 3;
}

void sub_080231CC(ScriptEntity *arg0) {
    void *ent;
    u8 *base;
    u8 val;

    sub_080379D4(0x23);
    ent = Entity_FindFreeSlot();
    if (ent != NULL) {
        base = (u8 *)ent;
        base[0x54] = 0x10;
        base[0x3B] = 3;
        base[0x3C] = 8;
        base[0x3A] = 1;
        val = arg0->script[2] << 1;
        base[0x41] = val;
        *(u16 *)(base + 0x06) = arg0->unk6;
        *(u16 *)(base + 0x02) = arg0->unk2;
        *(u16 *)(base + 0x2C) = (u16)(arg0->unk6 + 0x10);
    }
    arg0->script += 3;
}
