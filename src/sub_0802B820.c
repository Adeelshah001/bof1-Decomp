typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} UnkObj2B8;

extern s32 (*const D_080F985C[])(s32, s32);
extern u8 D_0202B1C0[];

void sub_0802B804(u16 arg0, s32 arg1, s32 arg2) {
    D_080F985C[arg0](arg1, arg2);
}

s32 sub_0802B820(UnkObj2B8 *arg0, UnkObj2B8 *arg1) {
    D_0202B1C0[0x5CE] = 0x13;
    D_0202B1C0[0x5CF] = 0x13;
    D_0202B1C0[0x5EE] = 0x13;
    D_0202B1C0[0x5EF] = 0x13;
    arg1->unk2 = 0xE08;
    arg1->unk6 = 0x2E04;
    return 0;
}

s32 sub_0802B87C(UnkObj2B8 *arg0, UnkObj2B8 *arg1) {
    if (arg0->unk2 > 0x9FF) {
        arg1->unk2 = 0x19F8;
        arg1->unk6 = arg0->unk6;
    } else {
        arg1->unk2 = arg0->unk2 + 0x1000;
        arg1->unk6 = arg0->unk6;
    }
    return 0;
}

s32 sub_0802B8B0(UnkObj2B8 *arg0, UnkObj2B8 *arg1) {
    if (arg0->unk2 <= 0x9FF) {
        arg1->unk2 = 0x1A58;
        arg1->unk6 = arg0->unk6;
    } else {
        arg1->unk2 = arg0->unk2 + 0x1000;
        arg1->unk6 = arg0->unk6;
    }
    return 0;
}
