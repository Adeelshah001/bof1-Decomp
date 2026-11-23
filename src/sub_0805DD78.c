typedef struct {
    u8 pad00[0x104];
    u8 unk104;
    u8 pad105[0x10A - 0x105];
    u8 unk10A;
    u8 unk10B;
    u8 unk10C;
    u8 unk10D;
} BattleUnit;

extern const u8 D_08100690[];
extern const u8 *const D_08100694[];

void sub_0805DD78(BattleUnit *arg0) {
    u32 val = (u8)(arg0->unk10A >> 1);
    u32 sum = (val >> 1) + val;
    arg0->unk104 = sum;
    arg0->unk104 = sum + (arg0->unk10B >> 2);
}

void sub_0805DF04(BattleUnit *arg0, u16 arg1) {
    if (arg1 != 0) {
        u32 type = (arg1 & 0x3000) >> 12;
        u32 offset = D_08100690[type] * (u8)arg1;
        const u8 *entry = D_08100694[type];
        s32 val;
        entry += offset;
        val = entry[0xE] + arg0->unk10D;
        if (val > 0xFF) {
            val = 0xFF;
        }
        arg0->unk10D = val;
    }
}
