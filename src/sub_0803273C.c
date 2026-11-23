extern u8 D_03002AB0[];

void sub_0802BF68(void *, s32);

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x06 - 0x04];
    u16 unk06;
    u8 pad08[0x0A - 0x08];
    u16 unk0A;
    u8 pad0C[0x0E - 0x0C];
    u16 unk0E;
    u8 pad10[0x46 - 0x10];
    u16 unk46;
    u8 pad48[0x4A - 0x48];
    u16 unk4A;
    u8 pad4C[0x82 - 0x4C];
    u16 unk82;
    u8 pad84[0x86 - 0x84];
    u16 unk86;
} Struct3273C;

u32 sub_08032714(u16 arg0, u16 arg1, u16 arg2, u16 arg3) {
    u32 ret = 1;

    if (arg0 == arg2) {
        ret = (arg1 != arg3);
    }
    return ret;
}

void sub_0803273C(Struct3273C *arg0, u16 *arg1, u16 *arg2) {
    sub_0802BF68(arg0, 0);
    *arg1 = arg0->unk0A;
    *arg2 = arg0->unk0E;
    arg0->unk82 = arg0->unk02;
    arg0->unk86 = arg0->unk06;
    arg0->unk46 = arg0->unk0A;
    arg0->unk4A = arg0->unk0E;
}

s32 sub_08032774(u16 arg0, u8 *arg1) {
    s32 ret = 0;

    if (!(arg0 & 0x3000)) {
        arg0 = (arg0 & 0xFF) - 0x14;
        if (!(arg0 & 0x8000) && arg0 <= 4) {
            ret = 1;
            *arg1 = arg0;
        }
    }
    return ret;
}

s32 sub_08032820(Struct3273C *arg0) {
    u16 x0 = ((Struct3273C *)D_03002AB0)->unk02;
    u16 x1 = arg0->unk02;

    if (x0 == x1) {
        if (arg0->unk06 >= ((Struct3273C *)D_03002AB0)->unk06) {
            return 0;
        }
        return 2;
    }
    if (x1 < x0) {
        return 1;
    }
    return 3;
}
