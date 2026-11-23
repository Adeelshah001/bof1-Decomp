extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[0x2C];
    s8 unk2C;
    s8 unk2D;
} ScriptState;

void sub_08011D28(Entity *p) {
    ScriptState *state = (ScriptState *)D_03004830;
    u8 *script;
    state->unk2D |= (script = (u8 *)p->unk68)[2];
    p->unk68 = (u32)(script + 3);
}

void sub_08011DFC(Entity *p) {
    ScriptState *state = (ScriptState *)D_03004830;
    u8 val = state->unk2D & 0x7F;
    state->unk2D = val;
    if (D_03002AB0[0xB8] & 4) {
        state->unk2D = val | ~0x7F;
    }
    p->unk68 += 2;
}
