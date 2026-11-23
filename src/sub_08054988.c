struct Actor548 {
    u8 pad00[0x6];
    u16 unk6;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x2C - 0x10];
    u16 unk2C;
    u8 pad2E[0x44 - 0x2E];
    s32 unk44;
    s32 unk48;
    u8 pad4C[0x68 - 0x4C];
    u8 *unk68;
    u8 pad6C[0x6D - 0x6C];
    u8 unk6D;
    u8 pad6E[0x6F - 0x6E];
    u8 unk6F;
    u8 pad70[0x72 - 0x70];
    u8 unk72;
    u8 pad73[0x78 - 0x73];
    void (*unk78)(struct Actor548 *);
};

void sub_08037FC4(struct Actor548 *, s32);
u8 sub_080549CC(struct Actor548 *);
void sub_080543C4(struct Actor548 *);
void sub_0803A8EC(struct Actor548 *);
void sub_08037C98(struct Actor548 *, s32);
void sub_08054460(struct Actor548 *);
u8 sub_080545E0(struct Actor548 *, u8);

s32 sub_080548F8(struct Actor548 *arg0) {
    u8 *p = arg0->unk68;
    arg0->unk68 = p + 2;
    sub_08037FC4(arg0, p[1] * 2);
    return 1;
}

void sub_08054958(struct Actor548 *arg0) {
    if (sub_080549CC(arg0) != 0) {
        arg0->unk78 = sub_080543C4;
        arg0->unk78(arg0);
        return;
    }
    arg0->unk2C = arg0->unk6;
    sub_0803A8EC(arg0);
}

void sub_08054988(struct Actor548 *arg0) {
    struct Actor548 *ptr = arg0;
    if (arg0->unk6D & 0x10) {
        sub_08037C98(arg0, 0);
    }
    if (--arg0->unk72 == 0) {
        arg0->unk78 = sub_08054460;
    }
    ptr->unk2C = ptr->unk6;
    sub_0803A8EC(ptr);
}

s32 sub_080549E8(struct Actor548 *arg0, u8 arg1, u8 arg2) {
    s32 ret = 0;
    if (arg2 == 0) {
        arg1 = arg0->unk6F;
    }
    if (sub_080545E0(arg0, arg1) != 0) {
        ret = 1;
        arg0->unk44 = arg0->unk8;
        arg0->unk48 = arg0->unkC;
    }
    return ret;
}
