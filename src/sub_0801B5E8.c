extern u8 D_03002AB0[];
void sub_080197C8(s32);
void sub_08054B60(s32);

typedef struct {
    u8 pad00[0xF8];
    void (*callbackF8)(s32);
    u8 padFC[0x178 - 0xFC];
    void (*callback178)(s32);
} ScriptActorCallbacks;

void sub_0801B5A0(void)
{
    sub_080197C8(0x60);
    D_03004830[0x2B]++;
}

void sub_0801B570(void)
{
    u8 *state;
    u8 zero;

    D_03002AB0[0xB8] &= 0xFB;
    zero = 0;
    state = D_03004830;
    state[0x2D] = 0x80;
    state[0x2A] = 0x11;
    state[0x2B] = zero;
}

void sub_0801B5E8(void)
{
    ScriptActorCallbacks *actor = (ScriptActorCallbacks *)D_03003420;

    actor->callbackF8 = sub_08054B60;
    actor->callback178 = sub_08054B60;
    D_03004830[0x2B]++;
}

void sub_0801B550(void)
{
    u8 *state = D_03004830;

    state[0x2D]++;
    state[0x2C] = 16;
    state[0x2B]++;
}
