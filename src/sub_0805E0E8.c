typedef struct {
    u8 pad00[0x08];
    u8 unk08;
    u8 pad09[0x0D - 0x09];
    u8 unk0D;
} Unk5C574;

extern u8 D_0300169C;

Unk5C574 *sub_0805C574(u16);

s32 sub_0805E12C(s32 arg0) {
    u16 x = arg0;
    if (D_0300169C == 0 && ((x & 0xF000) || (sub_0805C574(x)->unk08 & 0x20))) {
        return 1;
    }
    return 0;
}

s32 sub_0805E0E8(u16 arg0) {
    if (D_0300169C != 0) {
        return 0;
    }
    if (arg0 & 0xF000) {
        return 0;
    }
    if (sub_0805C574(arg0)->unk0D & 0x80) {
        return 1;
    }
    return 0;
}

s32 sub_0805E080(u16 arg0) {
    if (D_0300169C != 0) {
        return 0;
    }
    if (arg0 & 0xFF00) {
        if (sub_0805C574(arg0)->unk08 & 0x40) {
            return 1;
        }
        return 0;
    }
    return 1;
}
