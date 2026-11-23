extern void (* const D_080FA798[])(void);
void sub_08038808(void);
void sub_08038530(void);
void sub_080386AC(void);

void sub_08033CCC(u16);
Entity *Entity_FindFreeSlot(void);
void sub_0804A348(void);

extern u8 D_0202DBD0[];
extern u8 D_030023E0[];
extern u8 D_03002AB0[];
extern u8 D_03002BD4[];

void sub_08040AD0(s32, void *);
void sub_080330E8(void *, void *, s32, s32);
void sub_08038864(void *, void *);

typedef struct {
    u8 pad00[0xA0];
    u16 unkA0;
} Struct23E0;

typedef struct {
    u8 pad00[0x60];
    u8 unk60;
    u8 pad61[0x2B8 - 0x61];
    u8 unk2B8;
    u8 pad2B9[0x2BB - 0x2B9];
    u8 unk2BB;
} Struct2DBD0;

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B;
    u8 unk3C;
    u8 pad3D[0xF0 - 0x3D];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
} Struct2AB0;

void sub_08033AF4(u8 arg0) {
    D_080FA798[arg0]();
    sub_08038808();
    sub_08038530();
    sub_080386AC();
}

void sub_08033D34(void) {
    Entity *e;

    sub_08033CCC(((Struct23E0 *)D_030023E0)->unkA0);
    if (((Struct2DBD0 *)D_0202DBD0)->unk2B8 & 1) {
        e = Entity_FindFreeSlot();
        if (e != NULL) {
            e->unk3A = 1;
            e->unk64 = (u32)sub_0804A348;
        }
    }
}

void sub_08033D78(u8 arg0) {
    u8 i;
    Struct2AB0 *base = (Struct2AB0 *)D_03002AB0;

    for (i = 0; i <= 7; i++) {
        Struct2AB0 *obj = &base[i];
        if (obj->unk3C == arg0) {
            u8 *p = &obj->unk3A;
            *p = 0;
            p += 0xB6;
            *p = 0;
        }
    }
}

void sub_08033DB8(void) {
    ((Struct2DBD0 *)D_0202DBD0)->unk2BB = 2;
    sub_08040AD0(2, &((Struct2DBD0 *)D_0202DBD0)->unk60);
    sub_080330E8(D_03002BD4, &((Struct2DBD0 *)D_0202DBD0)->unk60, 2, 1);
    sub_08038864((Struct2AB0 *)D_03002BD4 - 1, D_03002BD4);
    ((Struct2AB0 *)D_03002BD4)->unkF0 |= 0x40;
}
