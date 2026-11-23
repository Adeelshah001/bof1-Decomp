extern u8 D_03002AB0[];
extern u16 D_03004120;

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
} ScriptState1F;

void sub_0800421C(s32, s32, s32);
void sub_08023FD8(s32);
void sub_0802411C(s32, s32);

void sub_0801FA10(void)
{
    u8 *p = D_03004830;
    u8 *q = p + 0x2A;
    u8 zero = 0;

    *q = 0x1B;
    p[0x2B] = zero;
}

void sub_0801FA28(void)
{
    D_03004120 = 3;
    sub_0800421C(0x10, 0xB58, 0x211C);
    D_03004830[0x2B]++;
}

void sub_0801F9D0(void)
{
    sub_0802411C(0x4020, 0x1A0);
    D_03002AB0[0xB8] |= 0x80;
    sub_08023FD8(0x68);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}

void sub_0801FA58(void)
{
    sub_08023FD8(0x6A);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}
