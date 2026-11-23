typedef struct {
    u8 pad00[0x08];
    u8 unk08;
    u8 pad09[0x0D - 0x09];
    u8 unk0D;
} Unk5C574;

extern const u32 D_081006D4[];
extern u8 D_03004620[];
extern u8 D_0300169C;

Unk5C574 *sub_0805C574(u16);

s32 sub_0805E218(u16 arg0) {
    return ((s32 (*)(u16))D_081006D4[D_03004620[0xB0] >> 1])(arg0);
}

s32 sub_0805E12C(u16 arg0) {
    u16 x = arg0;
    if (D_0300169C == 0 && ((x & 0xF000) || (sub_0805C574(x)->unk08 & 0x20))) {
        return 1;
    }
    return 0;
}

s32 sub_0805E0E8(u16 arg0) {
    u16 x = arg0;
    if (D_0300169C != 0 || (x & 0xF000) || !(sub_0805C574(x)->unk0D & 0x80)) {
        return 0;
    }
    return 1;
}

s32 sub_0805E080(u16 arg0) {
    if (D_0300169C == 0 && (!(arg0 & 0xFF00) || (sub_0805C574(arg0)->unk08 & 0x40))) {
        return 1;
    }
    return 0;
}
