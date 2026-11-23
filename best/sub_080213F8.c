extern u8 D_03004830[];

typedef struct {
    u8 pad00[0x2A];
    u8 unk2A;
    u8 unk2B;
    s8 unk2C;
} ScriptState;

void sub_080213F8(void) {
    if (((ScriptState *)D_03004830)->unk2C < 0) {
        ((ScriptState *)D_03004830)->unk2A = 4;
        ((ScriptState *)D_03004830)->unk2B = 0;
    }
}
