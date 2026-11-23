extern u8 D_03001698;

void sub_0800518C(s16, s16, s16);

typedef struct {
    u8 pad00[0x2A];
    u8 unk2A;
    u8 unk2B;
    u8 unk2C;
    u8 unk2D;
} ScriptState;

void sub_0802188C(void)
{
    sub_0800518C(0, 0xAA8, 0x9AC);
    D_03001698 = 0x10;
    ((ScriptState *)D_03004830)->unk2C = 0;
    ((ScriptState *)D_03004830)->unk2D = 0;
    ((ScriptState *)D_03004830)->unk2B++;
}
