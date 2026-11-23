typedef struct {
    u8 pad00[6];
    u16 field06;
    u8 pad08[0x2C - 8];
    u16 field2C;
    u8 pad2E[0x3A - 0x2E];
    u8 flags;
    u8 pad3B[0x4A - 0x3B];
    u16 field4A;
    u8 pad4C[0x68 - 0x4C];
    const u8 *script;
} ScriptActor;

void sub_08025D48(ScriptActor *actor)
{
    u32 mask = actor->script[2];

    actor->flags = mask | actor->flags;
    actor->script += 3;
}

void sub_08025D20(ScriptActor *actor)
{
    const u8 *script = actor->script;
    u8 value = script[2];
    u8 *state = D_03004830;
    u8 *mode = state + 0x3F;
    u8 zero = 0;

    *mode = value;
    state[0x40] = zero;
    actor->script = script + 3;
}

void sub_08025D04(ScriptActor *actor)
{
    const u8 *script = actor->script;
    u16 value = script[2] | (script[3] << 8);

    actor->field06 = value;
    actor->field2C = value;
    actor->field4A = value;
    actor->script += 4;
}

void sub_08025DE4(ScriptActor *actor)
{
    const u8 *next;

    if (D_03004830[0x36] != 0) {
        next = actor->script + 5;
    } else {
        actor->flags |= 0x40;
        next = actor->script + 2;
    }
    actor->script = next;
}
