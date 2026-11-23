u8 sub_08056B60(s32);
void sub_08056A64(s32, s32);

struct Unk2AB0 {
    u8 pad00[0xFA];
    u16 unkFA;
    u8 padFC[0x124 - 0xFC];
};

extern struct Unk2AB0 D_03002AB0[];
extern u8 D_03004620[];
extern u8 D_082D2708[];

s32 sub_08056D7C(s32 arg0, s32 arg1, u8 *arg2, u16 arg3) {
    if (sub_08056B60(arg1) != 0) {
        struct Unk2AB0 *entry;
        u16 *ptr;
        u8 cost;
        u32 val;

        sub_08056A64(arg1, 1);
        entry = &D_03002AB0[D_03004620[0xC4]];
        cost = D_082D2708[arg3 + 9];
        ptr = &entry->unkFA;
        val = *ptr;
        if (cost > val) {
            val = 0;
        } else {
            val -= cost;
        }
        *ptr = val;
        *arg2 = 0xFF;
        return 0;
    }
    *arg2 = 0x0D;
    return 1;
}
