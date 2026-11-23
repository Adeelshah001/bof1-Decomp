extern u8 D_03004830[];
s32 sub_0801DC00(s32);

typedef struct {
    u8 pad00[0x2B];
    u8 unk2B;
    u8 pad2C[0x4D - 0x2C];
    u8 unk4D;
} ScriptState;

void sub_0801EC58(void) {
    if ((sub_0801DC00(4) << 24) == 0) {
        ((ScriptState *)D_03004830)->unk4D = 0x30;
        ((ScriptState *)D_03004830)->unk2B++;
    }
}
