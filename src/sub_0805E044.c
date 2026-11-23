typedef struct {
    u8 pad00[0x08];
    u8 unk08;
    u8 pad09[0x0D - 0x09];
    u8 unk0D;
} Unk5C574;

extern u8 D_0300169C;

Unk5C574 *sub_0805C574(u16);

s32 sub_0805E044(u16 arg0) {
    if (D_0300169C != 0) {
        return 0;
    }
    if (arg0 & 0xF000) {
        return 1;
    }
    if (sub_0805C574(arg0)->unk08 & 0x20) {
        return 1;
    }
    return 0;
}
