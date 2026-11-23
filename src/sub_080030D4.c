extern u8 D_030023E0[];

typedef struct {
    u8 pad00[0x1E];
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u8 pad26[0x44 - 0x26];
    u8 unk44;
    u8 pad45[0x4E - 0x45];
    u8 unk4E;
    u8 unk4F;
} Struct4830;

typedef struct {
    u8 pad00[0x4C];
    u8 unk4C;
} Struct23E0;

void sub_080030D4(void) {
    Struct4830 *s = (Struct4830 *)D_03004830;

    s->unk1E = 0;
    s->unk20 = 0;
    s->unk4E = 0;
    s->unk4F = 0;
    s->unk22 = 0;
    s->unk24 = 0;
    s->unk44 = 0;
    ((Struct23E0 *)D_030023E0)->unk4C = 0;
}
