extern void sub_08005274(s32 arg0);

extern u8 D_03001694[];
extern u8 D_03001864[];
extern u8 D_030023DC[];
extern u8 D_030033D4[];
extern u8 D_03004830[];

typedef struct {
    u8 pad[0x2B];
    u8 unk2B;
    s8 unk2C;
} ScriptState;

void sub_0801CE80(void) {
    ScriptState *state = (ScriptState *)D_03004830;
    if (state->unk2C == 0) {
        sub_08005274(7);
        state->unk2C = 1;
    }
    *(u16 *)D_030033D4 = 8;
    *(u16 *)D_03001864 = 0x17;
    *(u32 *)D_03001694 |= 0x80;
    if (D_030023DC[0] != 1) {
        state->unk2C = 0x40;
        state->unk2B++;
    }
}
