#ifndef BOF_SCRIPT_ENTITY_VIEW
#define BOF_SCRIPT_ENTITY_VIEW
typedef struct {
    u8 pad00[0x3A];
    u8 unk3A, unk3B, unk3C;
    u8 pad3D[3];
    u8 unk40, unk41;
    u8 pad42[0x12];
    u8 unk54;
    u8 pad55[0xC];
    u8 unk61;
    u8 pad62[6];
    u8 *script;
    u8 pad6C[0x14];
    u8 unk80;
    u8 pad81[0x53];
    void *owner;
} ScriptEntityView;
#endif
void *Entity_FindFreeSlot(void);
void sub_08025EE8(ScriptEntityView *arg0) {
    ScriptEntityView *object = Entity_FindFreeSlot();
    if (object != NULL) {
        object->unk3A = 1;
        object->unk3C = 0x13;
        object->unk3B = arg0->script[2];
        object->unk80 = arg0->script[3];
        object->unk41 = arg0->script[4];
        arg0->script += 5;
    }
}
void sub_08025F2C(u8 *arg0) {
    if (arg0[0x40] != 0)
        arg0[0x40] = 0;
    else
        arg0[0x40] = 1;
    *(u32 *)(arg0 + 0x68) += 2;
}
void sub_08025F48(ScriptEntityView *arg0) {
    ScriptEntityView *object = Entity_FindFreeSlot();
    if (object != NULL) {
        object->unk3A = 1;
        object->unk3C = 0x14;
        object->unk3B = 6;
        object->unk54 = arg0->script[2];
        object->unk61 = arg0->script[3];
        object->owner = arg0;
        arg0->script += 4;
    }
}
