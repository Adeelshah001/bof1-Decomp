extern const u8 D_080BB0CC[];
extern const u32 D_080BB180[];

u32 sub_0809E058(u32, u32);

typedef struct {
    u32 unk0;
    u32 unk4;
} Unk9EC74;

u32 sub_0809EC74(Unk9EC74 *arg0, u8 arg1, u8 arg2) {
    s32 tmp;
    u32 unk4;
    u32 freq1;
    u32 freq2;
    u8 key;
    u32 tmp2;

    tmp = arg2 << 24;
    if (arg1 > 0xB2) {
        arg1 = 0xB2;
        tmp = (u8)-1 << 24;
    }
    freq1 = D_080BB0CC[arg1];
    freq1 = D_080BB180[freq1 & 0xF] >> (freq1 >> 4);
    key = D_080BB0CC[arg1 + 1];
    freq2 = D_080BB180[key & 0xF] >> (key >> 4);
    unk4 = arg0->unk4;
    tmp2 = sub_0809E058(freq2 - freq1, tmp);
    return sub_0809E058(unk4, freq1 + tmp2);
}
