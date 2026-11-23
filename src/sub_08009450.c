extern u8 D_03002AB0[];

void sub_08033B88(void *, s32);

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
        u32 val;
        sub_08033B88(p, 3);
        sub_08033B88(&p->unk124, 1);
        p->unkB8 &= ~4;
        val = 0x80B5;
        state->unk2B++;
        p->unk94 = val;
        D_030023D0[0] = 2;
    }
}
