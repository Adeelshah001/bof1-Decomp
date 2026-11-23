typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
} ScriptState1F;

void sub_0800518C(s32, s32, s32);
void sub_0800F85C(s32);
void sub_08024008(s32);
void sub_0802411C(s32, s32);

void sub_0801F810(void)
{
    u8 *p = D_03004830;
    u8 *q = p + 0x2A;
    u8 zero = 0;

    *q = 0x18;
    p[0x2B] = zero;
}

void sub_0801F828(void)
{
    sub_0800518C(0x11F, 0x16A8, 0xFFFFF66C);
    D_03004830[0x2B]++;
}

void sub_0801F7DC(void)
{
    sub_0800F85C(8);
    sub_0802411C(0x4060, 0x1C0);
    sub_08024008(0x70);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}

void sub_0801F854(void)
{
    sub_0800518C(0x12C, 0xA68, 0xFFFFA56C);
    D_03004830[0x2B]++;
}
