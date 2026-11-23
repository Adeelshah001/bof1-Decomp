extern u8 D_082D39EC[];
s32 sub_08037980(u16, u16);

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0xF2 - 0x3D];
    u8 unkF2;
    u8 padF3[0xFC - 0xF3];
    u32 unkFC;
} Unk8292C;

s32 sub_0808292C(Unk8292C *arg0) {
    s32 offset;
    u8 level;
    u16 idx;
    u32 curExp;
    u32 nextExp;

    offset = sub_08037980(arg0->unk3C, 0x126);
    level = arg0->unkF2;
    if (level > 0x62) {
        return 1;
    }
    idx = (level * 3 - 3) + offset;
    curExp = arg0->unkFC;
    nextExp = D_082D39EC[idx]
            | (D_082D39EC[idx + 1] << 8)
            | (D_082D39EC[idx + 2] << 16);
    if (nextExp > curExp) {
        return 1;
    }
    if (nextExp < curExp) {
        return 0;
    }
    return 2;
}
