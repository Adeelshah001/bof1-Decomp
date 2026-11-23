void sub_08021958(void);
void sub_0802198C(void);

typedef struct {
    u8 pad0[0x2B];
    s8 unk2B;
    u8 unk2C;
    u8 unk2D;
} State4830;

void sub_08020C90(void) {
    State4830 *state = (State4830 *)D_03004830;
    u8 tmp = state->unk2B;
    if (state->unk2B != 0) {
        sub_08021958();
    } else {
        state->unk2C = 0;
        state->unk2D = 0;
        state->unk2B = tmp + 1;
        sub_0802198C();
    }
}
