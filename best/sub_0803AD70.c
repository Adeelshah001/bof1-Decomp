extern u8 D_0202DBD0[];
extern const u8 D_080FAFFC[];
extern u16 D_030008AA;
extern u16 D_030008AC;
extern u16 D_030008AE;
extern u16 D_030008B0;
extern u16 D_030008B2;
extern u16 D_030008B4;
extern void *D_03000958[];
extern u8 D_030040E4;
extern u8 D_030040EC;
extern u8 D_030045B0[];

typedef struct {
    u8 pad00[0x45E];
    u8 unk45E[1];
} Unk0202DBD0_AD70;

typedef struct {
    u8 pad00[0x2];
    u16 unk2;
    u8 pad04[0x2C - 0x4];
    u16 unk2C;
    u8 pad2E[0x34 - 0x2E];
    u16 unk34;
    u8 pad36[0x3A - 0x36];
    u8 unk3A;
} Unk0803A848;

typedef struct {
    u8 pad00[0x25];
    u8 unk25;
} Unk030045B0;

s32 sub_0803AD70(u16 arg0) {
    if (((Unk0202DBD0_AD70 *)D_0202DBD0)->unk45E[(u8)(arg0 >> 3)] & D_080FAFFC[arg0 & 7]) {
        return 1;
    }
    return 0;
}

s32 sub_0803A848(Unk0803A848 *arg0) {
    s32 ret = 1;
    u16 cnt = D_030008B2;
    if (cnt != 0 && (arg0->unk3A & 2)) {
        arg0->unk34 = (arg0->unk2C ^ 0xFF) + 1;
        D_03000958[D_030008B4] = arg0;
        D_030008B4++;
        D_030008B2 = cnt - 1;
        ret = 0;
    }
    return ret;
}

void sub_0803A80C(void) {
    D_030008AA = 0x10;
    D_030008AE = 0x16;
    D_030008B2 = 8;
    D_030008AC = 0;
    D_030008B0 = 0;
    D_030008B4 = 0;
}

u16 sub_0803A584(Unk0803A848 *arg0) {
    u16 ret = arg0->unk2C;
    if (D_030040E4 != 0 && D_030040EC == 0) {
        u8 flags = ((Unk030045B0 *)D_030045B0)->unk25;
        if (flags & 0x10) {
            ret = arg0->unk2;
        }
        if (flags & 0x20) {
            ret = -ret;
        }
    }
    return ret;
}
