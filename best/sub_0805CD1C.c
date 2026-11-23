extern s32 D_0202DBD0[];
extern u8 D_030045B0[];

struct Unk5CCEC {
    u8 pad00[0x20];
    u32 unk20;
};

s32 sub_0805CD08(s32 arg0, u32 arg1) {
    if ((u32)D_0202DBD0[8] >= arg1) {
        return 1;
    }
    return 0;
}

s32 sub_0805CD1C(void) {
    if (D_030045B0[0x3B] == 3) {
        return 1;
    }
    return 0;
}

u32 sub_0805CCEC(struct Unk5CCEC *arg0, u16 arg1, u16 arg2) {
    u32 res = arg0->unk20 + (arg1 | (arg2 << 16));
    if (res > 999999) {
        res = 999999;
    }
    return res;
}

s32 sub_0805CD34(u16 arg0, u16 arg1) {
    if (arg0 != 0) {
        if ((u32)(D_0202DBD0[8] + arg1) > 999999) {
            return 0;
        }
        return 1;
    }
    if (D_0202DBD0[8] - arg1 < 0) {
        return 0;
    }
    return 1;
}
