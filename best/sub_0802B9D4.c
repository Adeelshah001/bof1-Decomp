typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
} ActorLike;

typedef struct {
    u8 pad0[6];
    u16 unk6;
} Global03002AB0;

extern u8 D_03002AB0[];
extern u8 D_0202B1C0[];

s32 sub_0802B954(ActorLike *arg0, ActorLike *arg1) {
    u16 limit = 0xC1FF;
    if (((Global03002AB0 *)D_03002AB0)->unk6 <= limit) {
        arg1->unk6 = limit - 0x21;
        arg1->unk2 = arg0->unk2 + (0x80 << 5);
    } else {
        arg1->unk2 = arg0->unk2 + (0x80 << 5);
        arg1->unk6 = arg0->unk6;
    }
    return 0;
}

s32 sub_0802B990(ActorLike *arg1) {
    u32 off = 0x5CE;
    D_0202B1C0[off] = 0;
    off += 1;
    D_0202B1C0[off] = 0;
    off += 0x1F;
    D_0202B1C0[off] = 0;
    D_0202B1C0[0x5EF] = 0;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}

s32 sub_0802B9D4(ActorLike *arg1) {
    u32 off = 0x5CE;
    D_0202B1C0[off] = 0x4D;
    off += 1;
    D_0202B1C0[off] = 0x4D;
    off += 0x1F;
    D_0202B1C0[off] = 0x4D;
    D_0202B1C0[0x5EF] = 0x4D;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}

s32 sub_0802BA1C(ActorLike *arg1) {
    u32 off = 0x5CE;
    D_0202B1C0[off] = 1;
    off += 1;
    D_0202B1C0[off] = 1;
    off += 0x1F;
    D_0202B1C0[off] = 1;
    D_0202B1C0[0x5EF] = 1;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}
