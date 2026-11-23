void sub_080379D4(s32);
void sub_08074040(void);

struct Unk6DBA4Arg {
    u8 pad0[0xC];
    u8 unkC;
};

struct Unk2AB0Entry {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
    u8 pad8[0x82 - 8];
    u16 unk82;
    u8 pad84[2];
    u16 unk86;
    u8 pad88[0xE4 - 0x88];
    u16 unkE4;
    u16 unkE6;
    u8 padE8[0xF0 - 0xE8];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
};
extern struct Unk2AB0Entry D_03002AB0[];

s32 sub_0806DBA4(struct Unk6DBA4Arg *arg0) {
    struct Unk2AB0Entry *entry = &D_03002AB0[arg0->unkC];
    u8 flags = entry->unkF0;
    s32 dx;
    u16 dy;
    u16 x;
    u16 y;

    if (flags & 0x10) {
        sub_08074040();
        return 0;
    }
    flags ^= 1;
    entry->unkF0 = flags;
    if (flags & 1) {
        dx = 0x10;
        dy = 8;
    } else {
        dx = -0x10;
        dy = -8;
    }
    x = entry->unk2 + dx;
    entry->unk2 = x;
    entry->unk82 = x;
    entry->unkE4 = x;
    y = entry->unk6 + dy;
    entry->unk6 = y;
    entry->unk86 = y;
    entry->unkE6 = y;
    sub_080379D4(2);
    return 1;
}
