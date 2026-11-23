typedef struct {
    u8 pad00[0x108];
    u16 unk108;
} BattleUnit;

extern s32 (*const D_081006C4[])(u16, void *);
extern const u8 D_082D2708[];
extern const u8 D_08152CC4[];
extern const u32 D_0814F530[];
extern const u32 D_0814F9D0[];
extern const u32 D_0814FF50[];
extern const u8 D_08100690[];
extern const u8 *const D_08100694[];

void sub_0807385C(s32, s32, s32, s32, const u8 *);

s32 sub_0805DADC(u16 arg0, void *arg1) {
    if ((arg0 & 0xF00) == 0) {
        return 5;
    }
    return D_081006C4[arg0 >> 12](arg0, arg1);
}

void sub_0805DAA0(u16 arg0) {
    u16 idx = arg0 * 0x11;
    sub_0807385C(1, 1, 9, 1, &D_08152CC4[D_082D2708[idx + 0x1C] * 9]);
}

u32 sub_0805DA60(u16 arg0) {
    u32 ret = 0;
    u8 idx = arg0;
    switch (arg0 >> 12) {
        case 0:
            ret = D_0814F530[idx];
            break;
        case 1:
            ret = D_0814F9D0[idx];
            break;
        case 2:
            ret = D_0814FF50[idx];
            break;
    }
    return ret;
}

void sub_0805DBD8(BattleUnit *arg0, u16 arg1) {
    if (arg1 != 0) {
        u32 type = (arg1 & 0x3000) >> 12;
        u32 offset = D_08100690[type] * (u8)arg1;
        const u8 *entry = D_08100694[type];
        s32 val;
        entry += offset;
        val = entry[0xF];
        val = arg0->unk108 + val;
        if (val > 0x1FF) {
            val = 0x1FF;
        }
        arg0->unk108 = val;
    }
}
