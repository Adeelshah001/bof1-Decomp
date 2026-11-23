extern void sub_0801DBF0(u8 arg0);

extern u8 D_03002500[];
extern u8 D_03003410[];
extern u8 D_030040F0[];
extern u8 D_03004830[];

typedef struct {
    u8 pad[0x2B];
    u8 unk2B;
    u8 pad2C[0x2D - 0x2B - 1];
    u8 unk2D;
} ScriptState;

void sub_0801D0D0(void) {
    ((ScriptState *)D_03004830)->unk2D = 7;
    do {
        sub_0801DBF0(((ScriptState *)D_03004830)->unk2D);
        ((ScriptState *)D_03004830)->unk2D = ((ScriptState *)D_03004830)->unk2D - 1;
    } while ((s32)(s8)((ScriptState *)D_03004830)->unk2D >= 0);
    *(u32 *)D_030040F0 = 0xF;
    *(u32 *)D_03002500 = 0xF;
    D_03003410[0] = 0x3F;
    ((ScriptState *)D_03004830)->unk2B++;
}
