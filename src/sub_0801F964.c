extern u8 D_03002AB0[];
extern u8 D_03004830[];
void sub_08024008(s32 arg0);
void sub_0802411C(s32 arg0, s32 arg1);

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
} ScriptState1F;

void sub_0801F8E0(void)
{
    D_03002AB0[0xB8] |= 0x80;
    sub_0802411C(0x40A0, 0x1C0);
    sub_08024008(0x74);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}

void sub_0801F964(void)
{
    D_03002AB0[0xB8] |= 0x80;
    sub_08024008(0x76);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}
