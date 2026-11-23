
extern u32 D_080F5CD4[];
extern u32 D_080F5C94[];
extern u32 D_03000840[];
extern u32 D_03000844[];
extern u32 D_080F5880[];

extern void sub_080A0774(void *, u32);
extern void sub_080A0770(u32);
extern Entity *Entity_FindFreeSlot(void);

typedef struct {
    u8 pad0[1];
    u8 unk1;
} UnkSubStruct;

void sub_08007284(Entity *arg0) {
    u32 *table = D_080F5CD4;
    UnkSubStruct *e = (UnkSubStruct *)arg0->unk68;
    sub_080A0774(arg0, table[e->unk1]);
}

void sub_080072A0(u16 arg0, u16 arg1, u16 arg2) {
    Entity *ent;
    ent = Entity_FindFreeSlot();
    *(Entity **)(void*)D_03000840 = ent;
    if (ent != NULL) {
        *(u8 *)((u8 *)ent + 0x41) = arg2;
        *(u8 *)((u8 *)ent + 0x3C) = 6;
        *(u8 *)((u8 *)ent + 0x3A) = 1;
        *(u16 *)((u8 *)ent + 0x02) = arg0;
        *(u16 *)((u8 *)ent + 0x06) = arg1;
    }
}

void sub_08007264(s32 arg0) {
    u32 *table = D_080F5C94;
    u32 idx = (arg0 & 0xFF0000) >> 17;
    sub_080A0770(table[idx]);
}

void sub_080071A4(void) {
    u32 *ptr = D_03000844;
    u32 *table = D_080F5880;
    u8 *base = D_03004830;
    *ptr = 0;
    sub_080A0770(table[base[0x2A]]);
    if ((s8)base[0x2C] >= 0) {
        base[0x2C] -= 1;
    }
}
