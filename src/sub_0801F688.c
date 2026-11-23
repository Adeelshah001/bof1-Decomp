extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
} ScriptState1F;

u8 sub_0801D9C0(s32, s32, s32);
void sub_0800F85C(s32);
void sub_08024008(s32);
void sub_0802411C(s32, s32);

void sub_0801F5F4(void)
{
    if (sub_0801D9C0(0, 0, -1) == 0)
    {
        ScriptState1F *state = (ScriptState1F *)D_03004830;
        state->unk2B = (state->unk2B | ~0x7F) + 1;
    }
}

void sub_0801F688(void)
{
    sub_0800F85C(8);
    D_03002AB0[0xB8] |= 0x80;
    sub_08024008(0x6C);
    sub_0802411C(0x40C0, 0x1A0);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}
