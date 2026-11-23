extern u8 D_03004830[];

void sub_0800518C(s32, s32, s32);
void sub_08024008(s32);
void sub_0802411C(s32, s32);
void sub_0800F820(void);

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
} ScriptState1F;

void sub_0801F6CC(void)
{
    u8 *state = D_03004830;
    u8 *script = state + 0x2A;
    u8 zero = 0;

    *script = 0x16;
    state[0x2B] = zero;
}

void sub_0801F70C(void)
{
    sub_0802411C(0x4080, 0x180);
    sub_0802411C(0x4060, 0x1A0);
    sub_08024008(0x6E);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}

void sub_0801F770(void)
{
    u8 *base;
    sub_0800F820();
    base = D_03004830;
    base[0x2C] = 0x80;
    base[0x2B]++;
}

void sub_0801F7B8(void)
{
    sub_0800518C(0xFC, 0x208, 0xFFFF9C6C);
    D_03004830[0x2B]++;
}
