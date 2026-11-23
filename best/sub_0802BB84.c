typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
} ActorLike;

extern u8 D_0202B1C0[];

s32 sub_0802BAAC(ActorLike *arg1) {
    u8 *base = D_0202B1C0;
    u32 off = 0x5CE;
    base[off] = 0x26;
    off = 0x5CF;
    base[off] = 0x26;
    off = 0x5EE;
    base[off] = 0x26;
    D_0202B1C0[0x5EF] = 0x26;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}

s32 sub_0802BAF4(ActorLike *arg1) {
    u8 *base = D_0202B1C0;
    u32 off = 0x5CE;
    base[off] = 0x7A;
    off = 0x5CF;
    base[off] = 0x7A;
    off = 0x5EE;
    base[off] = 0x7A;
    D_0202B1C0[0x5EF] = 0x7A;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}

s32 sub_0802BB3C(ActorLike *arg1) {
    u8 *base = D_0202B1C0;
    u32 off = 0x5CE;
    base[off] = 0x57;
    off = 0x5CF;
    base[off] = 0x57;
    off = 0x5EE;
    base[off] = 0x57;
    D_0202B1C0[0x5EF] = 0x57;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}

s32 sub_0802BB84(ActorLike *arg1) {
    u8 *base = D_0202B1C0;
    u32 off = 0x5CE;
    base[off] = 0x3A;
    off = 0x5CF;
    base[off] = 0x3A;
    off = 0x5EE;
    base[off] = 0x3A;
    D_0202B1C0[0x5EF] = 0x3A;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}
