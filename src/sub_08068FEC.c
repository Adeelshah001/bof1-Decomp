typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0xE8 - 0x3C];
    u8 unkE8;
    u8 padE9[0x124 - 0xE9];
} Unk2AB0_68;

extern Unk2AB0_68 D_03002AB0[];
extern u8 D_0202DBF4[];
void sub_08083EF0(void *, s32);
void sub_0805DA14(void *);

void sub_08068FEC(void) {
    s32 i;
    u8 j;
    for (i = 0; i <= 7; i++) {
        Unk2AB0_68 *ent = &D_03002AB0[i];
        sub_08083EF0(ent, 0x63);
        sub_0805DA14(ent);
        for (j = 0; j < 0x30; j++) {
            D_0202DBF4[ent->unk3B * 0x3C + j] = ((Unk2AB0_68 *)(j + (u32)ent))->unkE8;
        }
    }
}
