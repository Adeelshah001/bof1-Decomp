typedef struct {
    u8 pad00[0x94];
    u8 *target;
} ScriptGlobals985C;

extern u8 D_03002AB0[];
void sub_08033AF4(s32);

void sub_08009824(void)
{
}

void sub_0800985C(void)
{
    u8 *target = ((ScriptGlobals985C *)D_03002AB0)->target;
    u8 flags = target[0x40];
    flags ^= 1;
    target[0x40] = flags;
}

void sub_080097D8(void)
{
    sub_08033AF4(10);
    D_03004830[0x2B]++;
}

void sub_08009874(void)
{
    u8 state = 10;
    u8 *statePtr = &D_03004830[0x2A];
    u8 zero = 0;

    *statePtr = state;
    D_03004830[0x2B] = zero;
    D_03002AB0[0xB8] |= 4;
}
