extern u8 D_03001698;
extern u8 D_03001674;
extern u8 D_0300166C;
extern u8 D_030016A4;

u8 sub_0801D9C0(s32, s32, s32);
void sub_0803D3B8(s32);
void sub_0800518C(s16, s16, s16);

typedef struct {
    u8 pad00[0x2B];
    s8 step;
} ScriptStepFlags;

void sub_0801F4F4(void)
{
    if (sub_0801D9C0(0x202, 0, 1) == 0) {
        ((ScriptStepFlags *)D_03004830)->step = (~0x7F | ((ScriptStepFlags *)D_03004830)->step) + 1;
    }
}

void sub_0801F574(void)
{
    if (sub_0801D9C0(0x101, 1, 0) == 0) {
        ((ScriptStepFlags *)D_03004830)->step |= ~0x7F;
        ((ScriptStepFlags *)D_03004830)->step++;
    }
}

void sub_0801F5A4(void)
{
    sub_0803D3B8(5);
    sub_0800518C(0, 0x7A8, 0x61C);
    D_03004830[0x2B]++;
    D_03001698 = 8;
    D_03001674 = 8;
    D_0300166C = 0x40;
    D_030016A4 = 0x40;
}
