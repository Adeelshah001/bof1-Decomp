u8 sub_0801D9C0(s32, s32, s32);

typedef struct {
    u8 pad00[0x2B];
    s8 step;
} ScriptStepFlags;

void sub_0801F4F4(void)
{
    if (sub_0801D9C0(0x202, 0, 1) == 0) {
        ((ScriptStepFlags *)D_03004830)->step |= ~0x7F;
        ((ScriptStepFlags *)D_03004830)->step++;
    }
}
