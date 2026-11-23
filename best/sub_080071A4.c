
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
    Entity *ent = Entity_FindFreeSlot();
    *(Entity **)D_03000840 = ent;
    if (ent != NULL) {
        *(u8 *)((u8 *)ent + 0x41) = (u8)arg2;
        *(u8 *)((u8 *)ent + 0x3C) = 6;
        *(u8 *)((u8 *)ent + 0x3A) = 1;
        *(u16 *)((u8 *)ent + 0x02) = arg0;
        *(u16 *)((u8 *)ent + 0x06) = arg1;
    }
}

void sub_08007264(s32 arg0) {
    u32 *table = D_080F5C94;
    u32 idx = (u32)(0xFF0000 & (arg0 << 0x10)) >> 0x11;
    sub_080A0770(table[idx]);
}

void sub_080071A4(void) {
    *(u32 *)D_03000844 = 0;
    sub_080A0770(((u32 *)D_080F5880)[(s8)D_03004830[0x2A]]);
    if ((s8)D_03004830[0x2C] >= 0) {
        D_03004830[0x2C] -= 1;
    }
}
