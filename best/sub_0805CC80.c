struct Unk45B0 {
    u8 pad00[0x34];
    u16 unk34;
};

struct Unk2DBD0 {
    u8 pad00[0x20];
    s32 unk20;
};

extern struct Unk45B0 D_030045B0;
extern struct Unk2DBD0 D_0202DBD0;

s32 sub_0805CC80(u16 arg0) {
    u16 amount = D_030045B0.unk34;
    if (amount == 0) {
        return 0;
    }
    if (arg0 ? ((u32)(D_0202DBD0.unk20 + amount) <= 999999) : ((D_0202DBD0.unk20 - amount) >= 0)) {
        D_0202DBD0.unk20 = arg0 ? (D_0202DBD0.unk20 + amount) : (D_0202DBD0.unk20 - amount);
        return 0;
    }
    return 1;
}
