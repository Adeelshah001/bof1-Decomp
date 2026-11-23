extern u8 D_0202DBD0[];
extern u8 D_03002AB0[];
extern u8 D_03002BD4[];
extern u8 D_03002CF8[];

void sub_080330E8(void *, void *, s32, s32);
void sub_0803414C(void *);
void sub_08038864(void *, void *);
void sub_08040AD0(s32, void *);

typedef struct {
    u8 pad00[0x60];
    u8 unk60;
    u8 pad61[0x9C - 0x61];
    u8 unk9C;
    u8 pad9D[0x2BC - 0x9D];
    u8 unk2BC;
    u8 pad2BD;
    u8 unk2BE;
} Struct2DBD0;

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0x61 - 0x3B];
    u8 unk61;
    u8 pad62[0xF0 - 0x62];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
} Struct2AB0;

void sub_08033E04(void) {
    ((Struct2DBD0 *)D_0202DBD0)->unk2BC = 1;
    sub_08040AD0(1, &((Struct2DBD0 *)D_0202DBD0)->unk9C);
    sub_080330E8(D_03002CF8, &((Struct2DBD0 *)D_0202DBD0)->unk9C, 1, 2);
}

void sub_08033E34(void) {
    sub_08038864(D_03002AB0, (Struct2AB0 *)D_03002AB0 + 2);
    ((Struct2AB0 *)D_03002AB0)[0].unkF0 &= ~0x40;
    ((Struct2AB0 *)D_03002AB0)[1].unkF0 |= 0x40;
    ((Struct2AB0 *)D_03002AB0)[2].unkF0 |= 0x40;
}

void sub_08033E74(void) {
    sub_08038864(D_03002AB0, (Struct2AB0 *)D_03002AB0 + 3);
    ((Struct2AB0 *)D_03002AB0)[0].unkF0 &= ~0x40;
    ((Struct2AB0 *)D_03002AB0)[3].unk3A = 0;
    sub_0803414C(D_03002AB0);
}

void sub_08033EAC(void) {
    sub_08038864(D_03002BD4, (Struct2AB0 *)D_03002BD4 + 2);
    ((Struct2DBD0 *)D_0202DBD0)->unk2BE = 0xA;
    ((Struct2AB0 *)D_03002BD4)[2].unk3A = 0;
    sub_08040AD0(0xA, &((Struct2DBD0 *)D_0202DBD0)->unk60);
    sub_080330E8(D_03002BD4, &((Struct2DBD0 *)D_0202DBD0)->unk60, 0xA, 1);
    ((Struct2AB0 *)D_03002BD4)->unk61 = 3;
}
