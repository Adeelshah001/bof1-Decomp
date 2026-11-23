extern u8 D_03002AB0[];

void sub_08006404(s32);
void sub_08033AF4(s32);
void sub_0800518C(s32, s32, s32);
void sub_08033B88(void *, s32);

void sub_08009410(void) {
    sub_08006404(0x10);
    D_03004830[0x2B]++;
}

void sub_0800942C(void) {
    u8 *base;
    sub_08033AF4(5);
    base = D_03004830;
    base[0x2C] = 0x10;
    base[0x2B]++;
}

void sub_080093E8(void) {
    sub_0800518C(0x83, 0x17A8, 0x474C);
    D_03004830[0x2B]++;
}

typedef struct {
    u8 pad00[0x2B];
    u8 unk2B;
    s8 unk2C;
} Unk03004830;

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
    u8 pad98[0xB8 - 0x98];
    u8 unkB8;
    u8 padB9[0x124 - 0xB9];
    u8 unk124;
} Unk03002AB0;

void sub_08009450(void) {
    Unk03004830 *state = (Unk03004830 *)D_03004830;
    if (state->unk2C < 0) {
        Unk03002AB0 *p = (Unk03002AB0 *)D_03002AB0;
        sub_08033B88(p, 3);
        sub_08033B88(&p->unk124, 1);
        p->unkB8 &= ~4;
        state->unk2B++;
        p->unk94 = 0x80B5;
        D_030023D0[0] = 2;
    }
}
