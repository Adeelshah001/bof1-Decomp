struct Unk4F50 {
    u8 pad00[0x40];
    u16 unk40;
    u8 pad42[0x5D - 0x42];
    u8 unk5D;
    u8 pad5E[0x74 - 0x5E];
    u16 unk74;
};
extern struct Unk4F50 D_03004F50;

struct UnkStruct965 {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 pad3C[0x44 - 0x3C];
    u16 unk44;
    u16 unk46;
    u16 unk48;
    u16 unk4A;
    u8 unk4C;
    u8 pad4D[0x74 - 0x4D];
    struct UnkStruct965 *unk74;
    u32 unk78;
};

void sub_080379D4(s32);
void sub_08097040(struct UnkStruct965 *, s32);
void sub_08095C70(struct UnkStruct965 *);
void sub_08095ED8(struct UnkStruct965 *);
void sub_08095E78(struct UnkStruct965 *);
s32 sub_080936A0(struct UnkStruct965 *);
void sub_08095618(struct UnkStruct965 *);
void sub_08096CD4(struct UnkStruct965 *);
void sub_08098294(struct UnkStruct965 *, u32);

void sub_080965F4(struct UnkStruct965 *arg0) {
    sub_080379D4(0x1C);
    arg0->unk44 = 0x300;
    arg0->unk48 = 0;
    sub_08097040(arg0, 0x48);
    arg0->unk4C++;
    sub_08095C70(arg0);
}

void sub_080965B8(struct UnkStruct965 *arg0) {
    sub_080379D4(0x1B);
    switch (arg0->unk3B) {
    case 0x20:
        sub_08097040(arg0, 0x48);
        sub_08095ED8(arg0);
        break;
    case 0x16:
    default:
        sub_08097040(arg0, 0x48);
        sub_08095E78(arg0);
        break;
    }
}

void sub_08096578(struct UnkStruct965 *arg0) {
    if (arg0->unk74->unk3A == 0) {
        s32 res;
        arg0->unk4C = 6;
        res = sub_080936A0(arg0);
        if (res == 0) {
            D_03004F50.unk5D = res;
            sub_08095618(arg0);
        } else {
            sub_08096CD4(arg0);
        }
    }
}

void sub_0809680C(struct UnkStruct965 *arg0) {
    sub_08098294(arg0, arg0->unk78);
    arg0->unk4C++;
    D_03004F50.unk40 = D_03004F50.unk74;
    if (sub_080936A0(arg0) != 0) {
        sub_08096CD4(arg0);
    } else {
        D_03004F50.unk5D = 0;
        sub_08095618(arg0);
    }
}
