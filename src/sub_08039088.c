extern u8 D_030040E4;
extern u8 D_030040EC;
extern u8 D_030045B0[];
extern const u8 D_080A6524[];
void *sub_080A0A68(void *, const void *, s32);

typedef struct {
    u8 pad00[0x46E];
    u8 unk46E[0x10];
} StructArg1;

u8 sub_080390CC(u8 arg0, StructArg1 *arg1) {
    u8 masks[8];
    u8 byteIdx;
    u8 bitIdx;
    sub_080A0A68(masks, D_080A6524, 8);
    byteIdx = arg0 >> 3;
    bitIdx = arg0 & 7;
    return arg1->unk46E[byteIdx] & masks[bitIdx];
}

s32 sub_08039088(u16 arg0, StructArg1 *arg1) {
    u8 masks[8];
    u8 byteIdx;
    u8 bitIdx;
    sub_080A0A68(masks, D_080A6524, 8);
    byteIdx = arg0 >> 3;
    bitIdx = arg0 & 7;
    arg1->unk46E[byteIdx] |= masks[bitIdx];
    return 0;
}

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x2C - 0x04];
    u16 unk2C;
} StructA584;

u16 sub_0803A584(StructA584 *arg0) {
    u32 val = arg0->unk2C;
    if (D_030040E4 != 0 && D_030040EC == 0) {
        u8 flags = D_030045B0[0x25];
        if (flags & 0x10) {
            val = arg0->unk02;
        }
        if (flags & 0x20) {
            val = (u16)(~val + 1);
        }
    }
    return val;
}
