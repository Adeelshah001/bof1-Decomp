extern void (*D_080F8088[])(void);
extern void (*D_080F807C[])(void);
extern void (*D_080F80A0[])(void);
extern void (*D_080F8068[])(void);

typedef struct {
    u8 pad0[0x2B];
    s8 unk2B;
} State4830_2B;

void sub_0801E1DC(void) {
    State4830_2B *state = (State4830_2B *)D_03004830;
    if (state->unk2B >= 0) {
        D_080F8088[state->unk2B]();
    }
}

void sub_0801E1AC(void) {
    State4830_2B *state = (State4830_2B *)D_03004830;
    if (state->unk2B >= 0) {
        D_080F807C[state->unk2B]();
    }
}

void sub_0801E20C(void) {
    State4830_2B *state = (State4830_2B *)D_03004830;
    if (state->unk2B >= 0) {
        D_080F80A0[state->unk2B]();
    }
}

void sub_0801E17C(void) {
    State4830_2B *state = (State4830_2B *)D_03004830;
    if (state->unk2B >= 0) {
        D_080F8068[state->unk2B]();
    }
}
