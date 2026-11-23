typedef struct {
    u8 pad00[2];
    u8 unk02;
    u8 pad03[3];
    u8 unk06;
    u8 pad07[0x38 - 7];
    u16 unk38;
    u8 pad3A[0x54 - 0x3A];
    u8 timer : 8;
} State98F88;

void sub_080379D4(s32);
void sub_08099C44(State98F88 *);
void sub_08099C50(State98F88 *, s32);
void sub_08099DA4(State98F88 *);

void sub_08098F88(State98F88 *state)
{
    s32 height;

    if (!(--state->timer & 0x80)) {
        sub_08099DA4(state);
    } else if (state->unk06 > 7 && state->unk02 > 7 && state->unk02 <= 0xEF
               && !((height = state->unk38 - 0x60, state->unk38 = height, height) & 0x8000)) {
        state->timer = 3;
        sub_080379D4(0x15);
        sub_08099C44(state);
    } else {
        state->unk38 = 0;
        sub_08099C50(state, 6);
    }
}
