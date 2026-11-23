typedef struct {
    u8 pad00[0x2B];
    u8 unk2B;
    u8 unk2C;
    u8 unk2D;
} ScriptState;

void sub_0801AF40(void) {
    ScriptState *state = (ScriptState *)D_03004830;
    if (--state->unk2C == 0) {
        state->unk2D++;
        state->unk2B++;
    }
}
