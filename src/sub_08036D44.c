extern u8 D_0202DBD0[];
extern u8 D_030023E0[];
extern u8 D_03002AB0[];

u8 sub_08001770(s32);
u8 sub_080367A0(void *);
void sub_0805561C(u8);
u8 sub_0803601C(s32, u16, u16);
u8 sub_08036590(s32, u16, u16, s32 *);
u8 sub_08037010(u8, u8, s32);

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x06 - 0x04];
    u16 unk06;
    u8 pad08[0x3E - 0x08];
    u8 unk3E;
    u8 pad3F[0x5C - 0x3F];
    u8 unk5C;
} Struct36D44;

typedef struct {
    u8 pad00[0xA0];
    u16 unkA0;
    u8 padA2[0xA4 - 0xA2];
    u16 unkA4;
} Struct23E0;

typedef struct {
    u8 pad00[0x2B8];
    u8 unk2B8;
} Struct2DBD0;

typedef struct {
    u8 pad00[0x3E];
    u8 unk3E;
} Struct2AB0;

u8 sub_08036D44(Struct36D44 *arg0) {
    u8 val = arg0->unk5C;
    if (val == 0) {
        return sub_08001770(0x23);
    } else if (val == 1) {
        return sub_08001770(0x26);
    }
    return 0;
}

u8 sub_08036E34(Struct36D44 *arg0) {
    u8 ret = sub_080367A0(arg0);

    if (ret != 0) {
        if (((Struct23E0 *)D_030023E0)->unkA0 != 0) {
            sub_0805561C(arg0->unk5C);
        }
        ret = 1;
    }
    return ret;
}

s32 sub_08036E64(void) {
    s32 ret = 0;

    if (((Struct23E0 *)D_030023E0)->unkA4 == 0x11F) {
        if (!(((Struct2DBD0 *)D_0202DBD0)->unk2B8 & 4)) {
            ret = 1;
        }
    } else {
        if (!(((Struct2DBD0 *)D_0202DBD0)->unk2B8 & 2) && ((Struct2AB0 *)D_03002AB0)->unk3E == 6) {
            ret = 1;
        }
    }
    return ret;
}

u8 sub_08036B2C(s32 arg0, Struct36D44 *arg1) {
    s32 sp0;

    arg1->unk3E = 0;
    if (sub_08036590(arg0, arg1->unk02, arg1->unk06, &sp0)) {
        arg1->unk3E = sub_0803601C(arg0, arg1->unk02, arg1->unk06);
    }
    return sub_08037010(arg1->unk3E, ((Struct23E0 *)D_030023E0)->unkA0, 1);
}
