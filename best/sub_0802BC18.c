typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
} ActorLike;

extern u8 D_0202B1C0[];

s32 sub_0802BBCC(ActorLike *arg1) {
    u16 val16 = 0xA9A9;
    u8 val8 = 0xA9;
    u8 *base = D_0202B1C0;
    base[0x5CE] = (u8)val16;
    base[0x5CF] = val8;
    base[0x5EE] = (u8)val16;
    D_0202B1C0[0x5EF] = val8;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}

s32 sub_0802BC18(ActorLike *arg1) {
    u16 val16 = 0xFCFC;
    u8 val8 = 0xFC;
    u8 *base = D_0202B1C0;
    base[0x5CE] = (u8)val16;
    base[0x5CF] = val8;
    base[0x5EE] = (u8)val16;
    D_0202B1C0[0x5EF] = val8;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}

s32 sub_0802BC64(ActorLike *arg1) {
    u16 val16 = 0xF1F1;
    u8 val8 = 0xF1;
    u8 *base = D_0202B1C0;
    base[0x5CE] = (u8)val16;
    base[0x5CF] = val8;
    base[0x5EE] = (u8)val16;
    D_0202B1C0[0x5EF] = val8;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}
