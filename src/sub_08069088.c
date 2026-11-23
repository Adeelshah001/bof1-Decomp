typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0xE8 - 0x3C];
    u8 unkE8;
    u8 padE9[0x124 - 0xE9];
} Unk2AB0_68;

extern Unk2AB0_68 D_03002AB0[];
extern u8 D_0202DBF4[][0x3C];
void sub_08083EF0(void *, s32);
void sub_0805DA14(void *);

extern u8 D_03004620[];
extern u16 D_02024650[];
typedef struct {
    u8 unk0;
    u8 pad1[7];
    u16 *unk8;
} Unk4790;
extern Unk4790 D_03004790[];

void sub_08068FEC(void) {
    s32 i;
    u8 j;
    for (i = 0; i <= 7; i++) {
        Unk2AB0_68 *ent = &D_03002AB0[i];
        sub_08083EF0(ent, 0x63);
        sub_0805DA14(ent);
        for (j = 0; j < 0x30; j++) {
            D_0202DBF4[ent->unk3B][j] = ((u8 *)ent + j)[0xE8];
        }
    }
}

void sub_08069088(void) {
    u32 i;
    s32 j;

    for (i = 0; i <= 0xD7; i++) {
        D_03004620[i] = 0;
    }

    for (j = 0; j < 0x2400; j++) {
        D_02024650[j] = 0x8100;
    }

    for (j = 0; j < 9; j++) {
        D_03004790[j].unk0 = 0;
        D_03004790[j].unk8 = &D_02024650[j * 0x400];
    }
}
