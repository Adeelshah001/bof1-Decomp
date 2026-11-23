extern u8 D_030009B5[];
extern u8 D_03004408[];
extern u8 D_080A65E0[];
extern u8 D_03001790[];
void sub_080A0A68(void *, void *, s32);
void sub_0803FC58(void *);
void *sub_0803ED54(void);

typedef struct {
    u8 pad00[0x1E];
    u8 unk1E;
    u8 pad1F[0x0B];
    u8 unk29;
    u8 pad2A[0x02];
    u32 unk2C;
} Unk1790Entry;

void sub_080409B8(u8 *arg0) {
    u8 sp[8];
    u32 idx;
    sub_080A0A68(sp, D_080A65E0, 8);
    idx = D_030009B5[0] + 4;
    if (sp[idx] & D_03004408[0]) {
        u8 v = arg0[0x25];
        arg0[0x26] = v;
        arg0[0x27] = 1;
        sub_0803FC58(arg0);
    }
}

u8 sub_08040A34(u8 arg1, u8 *arg2) {
    u8 found = 0;
    u8 i;
    for (i = 0; i <= 3; i++) {
        if (((Unk1790Entry *)D_03001790)[i].unk29 != 0 && ((Unk1790Entry *)D_03001790)[i].unk1E == arg1) {
            found = 1;
            *arg2 = i;
        }
    }
    return found;
}

typedef struct {
    u8 pad00[8];
    u16 unk08;
    u8 pad0A[4];
    u16 unk0C;
    u8 pad0E[0x10];
    u8 unk1E;
    u8 pad1F[0x0A];
    u8 unk29;
    u8 pad2A[0x02];
    u32 unk2C;
} Entity2;

void *sub_08040A74(u8 arg0) {
    Entity2 *ent = (Entity2 *)sub_0803ED54();
    if (ent != NULL) {
        ent->unk1E = arg0;
        ent->unk29 = 0;
        ent->unk08 = 0;
        ent->unk0C = 0;
        ent->unk2C = 0;
        ent->unk29 = 1;
    }
    return (void *)ent;
}

void sub_08040AA0(void) {
    u8 i;
    for (i = 0; i <= 3; i++) {
        ((Unk1790Entry *)D_03001790)[i].unk2C = 0;
        ((Unk1790Entry *)D_03001790)[i].unk29 = 0;
    }
}
