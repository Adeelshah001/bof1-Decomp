typedef struct {
    u8 pad00[0x204];
    u16 unk204[0x13D];
    u8 unk47E[0x100];
} StructDBD0;

extern StructDBD0 D_0202DBD0;
extern const u8 D_080A6774[8];

void sub_080A0A68(void *, const void *, s32);

u32 sub_08055660(u16 arg0) {
    u8 masks[8];
    u8 bit;
    u32 idx;
    sub_080A0A68(masks, D_080A6774, 8);
    bit = arg0 & 7;
    idx = arg0 >> 3;
    return (D_0202DBD0.unk47E[idx] & masks[bit]) != 0;
}
