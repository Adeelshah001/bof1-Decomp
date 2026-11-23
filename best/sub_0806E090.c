typedef struct {
    u8 pad00[0x3A];
    u8 active;
    u8 pad3B[0xF0 - 0x3B];
    u16 flags : 16;
    u8 padF2[0x124 - 0xF2];
} BattleActorSlot;

typedef struct {
    u8 pad00[2];
    u8 mode;
    u8 pad03[5];
    u8 remaining;
    u8 count;
    u8 pad0A[0x4A - 0x0A];
    u8 unk4A;
    u8 pad4B[0x60 - 0x4B];
    u8 total;
} BattleCheck;

extern BattleActorSlot D_03002AB0[];
void sub_08073E44(void *);

void sub_0806E090(BattleCheck *state)
{
    BattleActorSlot *slot;
    u32 mask;
    u32 remaining;

    u32 count = state->total;
    u32 zero = 0;

    state->remaining = count;
    state->count = zero;
    slot = D_03002AB0;
    mask = 0x8010;
    do {
    if (slot->active) {
        if (slot->flags & 0x8010)
            state->count++;
    }
    slot = (BattleActorSlot *)((u32)slot + sizeof(BattleActorSlot));
    remaining = state->remaining;
    remaining--;
    state->remaining = remaining;
    } while ((u8)remaining != 0);

    count = state->count;
    if (count == state->total) {
        sub_08073E44(state);
        return;
    }
    if (state->unk4A == 0)
        state->mode = 6;
}
