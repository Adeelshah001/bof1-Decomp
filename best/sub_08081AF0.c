extern u8 sub_08003104(void);
extern const u8 D_08151F8E[];

typedef struct {
    u8 pad[0xC];
    u8 unkC, unkD;
    u16 index;
    u8 pad10[0x1A];
    u8 values[0x3E];
    u8 offsets[0x3E];
} State81AF0;

u16 sub_08081AF0(State81AF0 *state, u8 *actor)
{
    u32 random = sub_08003104() & 7;
    u8 tableIndex = state->unkC + random;
    u32 entry = (u32)(D_08151F8E + 1);
    u16 index;
    u8 value;
    u8 offset;

    entry = tableIndex + entry;
    index = state->index;
    value = *(const vu8 *)entry + actor[0x10B];
    if (!value)
        value = 0xFF;
    state->values[index] = value;
    offset = actor[0x3B] + state->unkD;
    state->offsets[index] = offset;
    index++;
    state->index = index;
    return index;
}
