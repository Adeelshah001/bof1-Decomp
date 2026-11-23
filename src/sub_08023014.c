typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x24];
    u16 unk2C;
    u8 pad2E[0x0C];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x03];
    u8 unk40;
    u8 unk41;
    u8 pad42[0x02];
    u16 unk44;
    u16 unk46;
    u16 unk48;
    u16 unk4A;
    u8 pad4C[0x1C];
    u8 *script;
    u8 pad6C[0x0C];
    void (*unk78)(void);
} ScriptEntity22F;

ScriptEntity22F *Entity_FindFreeSlot(void);
void sub_080379D4(s32);
u8 sub_08001770(s32);
void sub_08037FC4(void *, s32);
void sub_08053D24(void);

void sub_08022F88(ScriptEntity22F *arg0)
{
    u32 val;

    val = arg0->script[2] | (arg0->script[3] << 8);
    arg0->unk2 = val;
    arg0->unk46 = val;
    val = arg0->script[4] | (arg0->script[5] << 8);
    arg0->unk4A = val;
    arg0->unk2C = val;
    arg0->unk6 = val;
    arg0->script += 6;
}

void sub_08022FB8(ScriptEntity22F *arg0)
{
    ScriptEntity22F *object = Entity_FindFreeSlot();

    if (object != NULL) {
        u32 val;

        object->unk3A = 1;
        object->unk3C = 8;
        object->unk3B = 0;
        object->unk41 = arg0->script[2] << 1;
        object->unk2 = arg0->script[3] | (arg0->script[4] << 8);
        val = arg0->script[5] | (arg0->script[6] << 8);
        object->unk6 = val;
        object->unk2C = val + 0x10;
        sub_080379D4(0x25);
        arg0->script += 7;
    }
}

void sub_08022F30(ScriptEntity22F *arg0)
{
    if (sub_08001770(0x29) != 0) {
        arg0->unk2 = 0xA00;
        arg0->unk6 = 0x2456;
        arg0->unk44 = 0;
        arg0->unk48 = 0;
        arg0->unk78 = sub_08053D24;
        arg0->unk41 = 0x3E;
        arg0->unk3B = 0xDC;
        arg0->unk40 = 0;
        sub_08037FC4(arg0, 0);
    }
}

void sub_08023014(ScriptEntity22F *arg0)
{
    ScriptEntity22F *object = Entity_FindFreeSlot();

    if (object != NULL) {
        u32 val;

        object->unk3A = 1;
        object->unk3C = 0x12;
        object->unk3B = 0x19;
        object->unk2 = arg0->script[2] | (arg0->script[3] << 8);
        val = arg0->script[4] | (arg0->script[5] << 8);
        object->unk6 = val;
        object->unk2C = val + 0x10;
        arg0->script += 6;
    }
}
