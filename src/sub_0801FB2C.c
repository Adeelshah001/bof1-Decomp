extern u8 D_03002AB0[];
void sub_0800518C(s16, s16, s16);
void sub_0802411C(s32, s32);
void sub_08023FD8(s32);

typedef struct {
    u8 pad00[0x2B];
    s8 step;
} ScriptState1FB;

void sub_0801FAEC(void)
{
    u8 *state = D_03004830;
    u8 *script = state + 0x2A;
    u8 zero = 0;

    *script = 0x1C;
    state[0x2B] = zero;
}

void sub_0801FB04(void)
{
    sub_0800518C(0, 0xAD8, 0x88C);
    D_03004830[0x2B]++;
}

void sub_0801FAB0(void)
{
    sub_0802411C(0x5980, 0x160);
    D_03002AB0[0xB8] |= 0x80;
    sub_08023FD8(0x6C);
    ((ScriptState1FB *)D_03004830)->step |= ~0x7F;
}

void sub_0801FB2C(void)
{
    D_03002AB0[0xB8] &= 0x7F;
    sub_08023FD8(0x6E);
    ((ScriptState1FB *)D_03004830)->step |= ~0x7F;
}
