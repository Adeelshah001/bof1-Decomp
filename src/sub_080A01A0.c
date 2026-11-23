typedef struct {
    u8 pad00[0x2C];
    u8 value2C;
    u8 value2D;
    u8 value2E;
    u8 pad2F[0x40 - 0x2F];
    const u8 *cursor;
} ScriptByteState;

s32 sub_080A491C(s32 *times)
{
    s32 ticks = 0x10;
    if (times != NULL) {
        times[0] = ticks;
        times[1] = 0;
        times[2] = 0;
        times[3] = 0;
    }
    return ticks;
}

void sub_080A01A0(s32 unused, ScriptByteState *state)
{
    state->value2E = *state->cursor;
    state->cursor = state->cursor + 1;
}

void sub_080A018C(s32 unused, ScriptByteState *state)
{
    state->value2D = *state->cursor;
    state->cursor = state->cursor + 1;
}

void sub_080A0178(s32 unused, ScriptByteState *state)
{
    state->value2C = *state->cursor;
    state->cursor = state->cursor + 1;
}
