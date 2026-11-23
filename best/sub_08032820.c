extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x06 - 0x04];
    u16 unk06;
} Struct32820;

s32 sub_08032774(u16 arg0, u8 *arg1) {
    if (arg0 & 0x3000) {
        return 0;
    }
    arg0 = (arg0 & 0xFF) - 0x14;
    if ((arg0 & 0x8000) || arg0 > 4) {
        return 0;
    }
    *arg1 = arg0;
    return 1;
}

s32 sub_08032820(Struct32820 *arg0) {
    u16 x0 = ((Struct32820 *)D_03002AB0)->unk02;
    u16 x1 = arg0->unk02;

    if (x0 == x1) {
        if (arg0->unk06 >= ((Struct32820 *)D_03002AB0)->unk06) {
            return 0;
        }
        return 2;
    }
    if (x1 >= x0) {
        return 3;
    }
    return 1;
}
