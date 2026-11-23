extern u8 sub_08001770(s32 arg0);

extern u8 D_03002AB0[];
extern u8 D_03004114[];
extern u8 D_03004830[];

typedef struct {
    u8 pad[0x2A];
    u8 unk2A;
    u8 unk2B;
} ScriptState;

void sub_08018A30(void) {
    u8 result;
    u32 zero_ext_result;
    ScriptState *state = (ScriptState *)D_03004830;

    result = sub_08001770(0xA0);
    zero_ext_result = (u32)result;
    if (zero_ext_result != 0 || state->unk2A == 3) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    state->unk2A = 3;
    state->unk2B = zero_ext_result;
    D_03002AB0[0xB8] |= 0x04;
    *(u16 *)D_03004114 = zero_ext_result;
}
