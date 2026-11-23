typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0xF0 - 0x3B];
    u8 unkF0;
    u8 unkF1;
    u8 padF2[0xF6 - 0xF2];
    u16 unkF6;
} Entity568;

static inline u8 has_flag20(Entity568 *arg0) {
    if (arg0->unk3A != 0 && (arg0->unkF1 & 0x20)) {
        return 1;
    } else {
        return 0;
    }
}

s32 sub_0805684C(Entity568 *arg0) {
    if (has_flag20(arg0) && !(arg0->unkF0 & 0x40)) {
        if (arg0->unkF6 != 0) {
            s32 val = arg0->unkF6 - 1;
            if (val <= 0) {
                val = 1;
            }
            arg0->unkF6 = val;
        }
        return 1;
    }
    return 0;
}
