extern u8 D_0202DBD0[];
extern u8 D_03002AB0[];

void sub_0803324C(void *);
Entity *sub_0803ED98(void);
void sub_0804A348(void);
void sub_0803AF58(s32, s32);
void sub_080331A0(void *);

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x0A - 0x08];
    u16 unkA;
    u8 pad0C[0x2AC - 0x0C];
    u8 unk2AC;
    u8 pad2AD[0x2B8 - 0x2AD];
    u8 unk2B8;
} Unk0202DBD0;

typedef struct {
    u8 pad00[0xEC];
    u16 unkEC;
    u16 unkEE;
} Unk03002AB0;

void sub_08033C78(Entity *arg0, s32 arg1, s32 arg2, u8 arg3) {
    arg0->unk3B = arg3;
    if (arg0->unk3A != 0) {
        sub_0803324C(arg0);
    }
}

void sub_08033C94(void) {
    if (((Unk0202DBD0 *)D_0202DBD0)->unk2B8 & 1) {
        Entity *slot = sub_0803ED98();
        if (slot != NULL) {
            slot->unk3A = 1;
            slot->unk64 = (u32)sub_0804A348;
        }
    }
}

void sub_08033CCC(u16 arg0) {
    u8 *p = &((Unk0202DBD0 *)D_0202DBD0)->unk2B8;
    if (arg0 == 0 && (((Unk03002AB0 *)D_03002AB0)->unkEC == 0x130 || ((Unk03002AB0 *)D_03002AB0)->unkEE == 0x130)) {
        *p = 1;
        sub_0803AF58(0x150, 0xFFFF);
    }
}

void sub_08033C1C(Entity *arg0) {
    if (arg0->unk3A != 0) {
        u16 *p = (u16 *)((u8 *)arg0 + 0x4C);
        Unk0202DBD0 *s;
        *p = 0;
        p += 2;
        *p = 0;
        sub_080331A0(arg0);
        sub_0803324C(arg0);
        sub_08033B18((s32)arg0);
        *(u16 *)((u8 *)arg0 + 0) = 0;
        *(u16 *)((u8 *)arg0 + 4) = 0;
        s = (Unk0202DBD0 *)D_0202DBD0;
        *(u16 *)((u8 *)arg0 + 2) = s->unk6;
        arg0->unk6 = s->unkA;
        *((u8 *)arg0 + 0x62) = 0;
        *((u8 *)arg0 + 0x3D) = 0;
        *((u8 *)arg0 + 0x61) = s->unk2AC;
    }
}
