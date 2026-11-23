typedef struct {
    u8 pad00[0x08];
    u8 unk08;
    u8 pad09[0x0C - 0x09];
    u8 unk0C;
} ItemData;

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
} Actor5D50C;

extern const u8 D_081006B8[];
ItemData *sub_0805C574(s32 arg0);

s32 sub_0805D50C(s32 arg0, Actor5D50C *arg1) {
    s32 id = (u16)arg0;
    ItemData *item = sub_0805C574(id);

    if ((item->unk0C & D_081006B8[arg1->unk3C]) || (arg1->unk3C > 7 && id == 0x2129)) {
        return 0x80000000;
    }
    if (item->unk08 & 1) {
        return 5;
    }
    if (item->unk08 & 2) {
        return 4;
    }
    if (item->unk08 & 4) {
        return 3;
    }
    if (item->unk08 & 8) {
        return 2;
    }
    return 0;
}
