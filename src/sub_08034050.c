extern u8 D_0202DBD0[];
extern u8 D_03002E1C[];
extern u8 D_03003188[];
extern u8 D_030032AC[];

void sub_08038864(void *, void *);
void sub_08040AD0(s32, void *);
void sub_080330E8(void *, void *, s32, s32);
void sub_08034120(void *, void *);

typedef struct {
    u8 pad00[0x60];
    u8 unk60;
    u8 pad61[0x114 - 0x61];
    u8 unk114;
    u8 pad115[0x1C8 - 0x115];
    u8 unk1C8;
    u8 pad1C9[0x2BD - 0x1C9];
    u8 unk2BD;
    u8 pad2BE[0x2C1 - 0x2BE];
    u8 unk2C1;
} Struct2DBD0;

typedef struct {
    u8 pad00[0xF0];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
} Struct2AB0;

void sub_0803407C(void) {
    ((Struct2AB0 *)D_03003188)->unkF0 &= ~0x40;
    sub_08038864((Struct2AB0 *)D_03003188 - 3, D_03003188);
}

void sub_08034050(void) {
    sub_08038864(D_03002E1C, (Struct2AB0 *)D_03002E1C + 3);
    ((Struct2AB0 *)D_03002E1C)[3].unkF0 |= 0x40;
}

void sub_080340A8(void) {
    ((Struct2DBD0 *)D_0202DBD0)->unk2C1 = 6;
    sub_08040AD0(6, &((Struct2DBD0 *)D_0202DBD0)->unk1C8);
    sub_080330E8(D_030032AC, &((Struct2DBD0 *)D_0202DBD0)->unk1C8, 6, 7);
}

void sub_08034008(void) {
    ((Struct2DBD0 *)D_0202DBD0)->unk2BD = 5;
    sub_08040AD0(5, &((Struct2DBD0 *)D_0202DBD0)->unk114);
    sub_080330E8(D_03002E1C, &((Struct2DBD0 *)D_0202DBD0)->unk114, 5, 3);
    sub_08034120(D_03002E1C, D_03003420);
}
