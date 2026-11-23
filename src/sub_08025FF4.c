typedef struct {
    u8 pad00[0x3A];
    u8 unk3A, unk3B, unk3C;
    u8 pad3D[0x2B];
    u8 *script;
    u8 pad6C[0x14];
    u8 unk80;
    u8 pad81[0x53];
    void *owner;
    void *unkD8;
} ScriptEntityView;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk030023E0;

extern Unk030023E0 D_030023E0;

void *Entity_FindFreeSlot(void);
void sub_08038CC8(u16, s32, s32);
void sub_08038BF8(s32, s32, s32);
void sub_080030D4(void);
void sub_0802411C(s32, s32);

void sub_08025FF4(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u8 value = script[2];
    u8 *state = D_03004830;
    state[0x2D] = value;
    *(u8 **)(arg0 + 0x68) = script + 3;
}

void sub_08026008(ScriptEntityView *arg0) {
    ScriptEntityView *object = Entity_FindFreeSlot();
    if (object != NULL) {
        object->unk3A = 1;
        object->unk3C = 0x15;
        object->unk3B = arg0->script[2];
        object->owner = arg0;
        object->unkD8 = &arg0->unk80;
        arg0->script += 3;
    }
}

void sub_08025F90(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u32 a = script[2] | (script[3] << 8);
    u32 b = script[4] | (script[5] << 8);
    sub_08038CC8(D_030023E0.unkA4, a, b);
    sub_08038BF8(a, b, 0);
    sub_080030D4();
    *(u32 *)(arg0 + 0x68) += 6;
}

void sub_08026178(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    sub_0802411C(script[3] | (script[4] << 8), script[2] | 0x100);
    *(u32 *)(arg0 + 0x68) += 5;
}
