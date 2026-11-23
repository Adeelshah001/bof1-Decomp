typedef struct {
    u8 pad00[0x68];
    const u8 *script;
    u8 pad6C[3];
    u8 value;
} ScriptCursorActor;

typedef struct {
    u8 pad00[0x2D];
    s8 flags;
} ScriptFlags;

void sub_08004EA0(s32);
void sub_080106E8(Entity *);
void sub_0800F8A4(Entity *);

void sub_08011E58(ScriptCursorActor *actor)
{
    const u8 *script = actor->script;
    const u8 *next;
    if (script[2] == actor->value)
        next = script + 4;
    else
        next = script + script[3];
    actor->script = next;
}

void sub_08011E88(ScriptCursorActor *actor)
{
    u8 *state = D_03004830;
    const u8 *script = actor->script;
    u8 value = script[2];
    u8 *mode = state + 0x2A;
    u8 zero = 0;
    *mode = value;
    state[0x2B] = zero;
    actor->script = script + 3;
}

void sub_08011EB0(ScriptCursorActor *actor)
{
    ScriptFlags *state = (ScriptFlags *)D_03004830;
    state->flags &= ~1;
    sub_08004EA0(0x823A);
    actor->script += 2;
}

void sub_080120AC(Entity *actor)
{
    u8 *state = D_03004830;
    if ((s8)state[0x2D] & 0x80)
        sub_080106E8(actor);
    else
        sub_0800F8A4(actor);
}
