typedef struct {
    u8 pad00[0x04];
    union {
        s32 raw;
        struct {
            u16 frac;
            u16 val;
        } parts;
    } unk4;
    u8 pad08[0x10 - 0x08];
    s32 unk10;
    u8 pad14[0x16 - 0x14];
    u16 unk16;
    u8 pad18[0x50 - 0x18];
    u8 unk50;
} Struct_08031;

void sub_08037C98(Struct_08031 *, s32);

static inline s32 step_unk4(Struct_08031 *arg0) {
    if (arg0->unk4.parts.val == arg0->unk16) {
        return 0;
    }
    arg0->unk4.raw = arg0->unk10 + arg0->unk4.raw;
    if (arg0->unk4.parts.val == arg0->unk16) {
        return 0;
    }
    return 1;
}

void sub_08031E50(Struct_08031 *arg0) {
    sub_08037C98(arg0, 0);
    sub_08037C98(arg0, 0);
    if (!step_unk4(arg0)) {
        arg0->unk50 = 0xC;
    }
}

void sub_08031EF4(Struct_08031 *arg0) {
    sub_08037C98(arg0, 0);
    if (!step_unk4(arg0)) {
        arg0->unk50 = 0x12;
    }
}
