extern void (*D_080F4AC0[])(void);
extern void (*D_080F4ADC[])(s32);
extern u8 D_03002AB0[];

typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
} Unk458C;

extern Unk458C *D_0300458C;

typedef struct {
    u8 pad0[0x31];
    s8 unk31;
} State4830_31;

void sub_08004FF4(void) {
    State4830_31 *state = (State4830_31 *)D_03004830;
    if (state->unk31 >= 0) {
        D_080F4AC0[state->unk31]();
    }
}

void sub_08004FB8(u8 *arg0) {
    State4830_31 *state = (State4830_31 *)D_03004830;
    if (state->unk31 >= 0 && arg0[2] == 0xFF) {
        D_080F4ADC[state->unk31](arg0[3] * 2);
    }
}

s32 sub_0800504C(u8 arg0, u16 arg1, u16 arg2) {
    s32 ret = 1;
    u8 *base = D_03002AB0;
    if (base[0x61] == arg0) {
        Unk458C *s = D_0300458C;
        ret = (arg1 == s->unk2 && arg2 == s->unk6) ? 0 : 1;
    }
    return ret;
}
