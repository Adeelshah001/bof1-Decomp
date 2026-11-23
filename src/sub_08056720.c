typedef struct {
    u8 pad00[0xF1];
    u8 unkF1;
    u8 padF2[2];
    u16 unkF4;
    u16 unkF6;
    u16 unkF8;
    u16 unkFA;
    u8 padFC[0x124 - 0xFC];
} Unk2AB0;

typedef struct {
    u8 pad00[0x204];
    u16 unk204[1];
} Unk202DBD0;

extern Unk2AB0 D_03002AB0[];
extern Unk202DBD0 D_0202DBD0;

u8 sub_08055F70(void);
void sub_08056B9C(Unk2AB0 *);
void sub_0805DA14(Unk2AB0 *);

u32 sub_08056720(s32 arg0) {
    s32 i;

    if (sub_08055F70() != 0) {
        for (i = 0; i < 8; i++) {
            Unk2AB0 *entry = &D_03002AB0[i];
            entry->unkF6 = entry->unkF4;
            sub_08056B9C(entry);
            entry->unkF1 &= 3;
            sub_0805DA14(entry);
            entry->unkFA = entry->unkF8;
        }
        D_0202DBD0.unk204[arg0] = 0x139;
        return 0xFF;
    }
    return 0x8000000D;
}
