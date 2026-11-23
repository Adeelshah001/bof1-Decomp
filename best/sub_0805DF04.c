typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0x104 - 0x3D];
    u8 unk104;
    u8 pad105[0x10A - 0x105];
    u8 unk10A;
    u8 unk10B;
    u8 unk10C;
    u8 unk10D;
} BattleUnit;

typedef struct {
    u8 pad00[0x08];
    u8 unk8;
    u8 pad09[0x0C - 0x09];
    u8 unkC;
} ItemData;

extern const u8 D_081006B8[];
extern const u8 D_08100690[];
extern const u8 *const D_08100694[];

ItemData *sub_0805C574(u16);

void sub_0805DD78(BattleUnit *arg0) {
    u8 val = arg0->unk10A >> 1;
    arg0->unk104 = val + (val >> 1);
    arg0->unk104 += arg0->unk10B >> 2;
}

s32 sub_0805DE78(u16 arg0, BattleUnit *arg1) {
    ItemData *item = sub_0805C574(arg0);
    if (!(item->unk8 & 0x10) && !(item->unkC & D_081006B8[arg1->unk3C])) {
        return 5;
    }
    return 0x80000000;
}

s32 sub_0805DEB8(u16 arg0, BattleUnit *arg1) {
    ItemData *item = sub_0805C574(arg0);
    if (item->unkC & D_081006B8[arg1->unk3C]) {
        return 0x80000000;
    }
    if (item->unk8 & 0x20) {
        return 1;
    }
    return 0;
}

void sub_0805DF04(BattleUnit *arg0, u16 arg1) {
    if (arg1 != 0) {
        u32 type = (arg1 & 0x3000) >> 12;
        u32 offset = D_08100690[type] * (u8)arg1;
        s32 val = D_08100694[type][offset + 0xE] + arg0->unk10D;
        if (val > 0xFF) {
            val = 0xFF;
        }
        arg0->unk10D = val;
    }
}
