extern u8 D_03002AB0[];
extern u8 D_03004448[];
extern u8 D_03004830[];

void sub_080017EC(s32);
void sub_0800518C(s32, s32, s32);
void sub_08039054(void);

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
    u8 pad2C[0x4D - 0x2C];
    u8 unk4D;
} State_0801F1E8;

void sub_0801F210(void) {
    sub_080017EC(0xC6);
    D_03004830[0x2B]++;
}

void sub_0801F22C(void) {
    u32 *p = *(u32 **)D_03004448;
    u8 *base;

    if (((*(u16 *)(D_03002AB0 + 6) & 0xFFF0) == ((p[5] & 0xFFFFFF) >> 8)) &&
        ((*(u16 *)(D_03002AB0 + 2) & 0xFFF0) == ((p[4] & 0xFFFFFF) >> 8))) {
        base = D_03004830;
        base[0x2C] = 0x1C;
        base[0x2B]++;
    }
}

void sub_0801F1E8(void) {
    State_0801F1E8 *state;

    sub_08039054();
    state = (State_0801F1E8 *)D_03004830;
    state->unk4D = 0x30;
    state->unk2B |= ~0x7F;
}

void sub_0801F284(void) {
    u8 *base = D_03004830;

    if (--base[0x2C] == 0) {
        sub_0800518C(0x1A9, 0x978, 0xFFFFE99C);
        base = D_03004830;
        base[0x2B]++;
    }
}
