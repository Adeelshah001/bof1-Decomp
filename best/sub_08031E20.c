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
    union {
        s32 raw;
        struct {
            u16 lo;
            u16 hi;
        } parts;
    } unk10;
    u8 pad14[0x16 - 0x14];
    u16 unk16;
    u8 pad18[0x50 - 0x18];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
} Struct_08031;

extern const u8 D_080FA6A0[];
void sub_08037FC4(Struct_08031 *, u8);
void sub_08037C98(Struct_08031 *, s32);

static inline s32 step_unk4(Struct_08031 *arg0) {
    u16 target = arg0->unk16;
    if (arg0->unk4.parts.val != target) {
        arg0->unk4.raw += arg0->unk10.raw;
        if (arg0->unk4.parts.val != target) {
            return 1;
        }
    }
    return 0;
}

void sub_08031BCC(Struct_08031 *arg0) {
    sub_08037FC4(arg0, D_080FA6A0[arg0->unk61]);
    arg0->unk50 = 2;
    arg0->unk54 = 0x14;
}

void sub_08031E20(Struct_08031 *arg0) {
    if (--arg0->unk54 == 0) {
        arg0->unk50 = 0xA;
        arg0->unk10.parts.lo = 0x8000;
        arg0->unk10.parts.hi = 0xFFFF;
        arg0->unk16 = arg0->unk4.parts.val - 0x10;
    }
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
