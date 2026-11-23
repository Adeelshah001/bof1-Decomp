struct QueueEnt {
    u8 pad00[0x2C];
    u16 unk2C;
    u8 pad2E[0x34 - 0x2E];
    u16 unk34;
    u8 pad36[0x3A - 0x36];
    u8 unk3A;
};

extern volatile u32 D_040000D4[];
extern u8 D_030048B0[];

extern u16 D_030008AA[];
extern u16 D_030008AC[];
extern u16 D_030008AE[];
extern u16 D_030008B0[];
extern u16 D_030008B2[];
extern u16 D_030008B4[];
extern void *D_030008C0[];
extern void *D_03000900[];
extern void sub_0805B15C(void);
extern s16 sub_0803A584(void *);

s32 sub_0803A98C(void) {
    D_040000D4[0] = (u32)D_030048B0;
    D_040000D4[1] = 0x07000000;
    D_040000D4[2] = 0x80000200;
    return D_040000D4[2];
}

void sub_0803A9AC(void) {
    D_030008AE[0] = 0x16;
    D_030008AA[0] = 0x10;
    D_030008B2[0] = 8;
    D_030008B0[0] = 0;
    D_030008AC[0] = 0;
    D_030008B4[0] = 0;
    sub_0805B15C();
}

s32 sub_0803A928(struct QueueEnt *arg0) {
    s32 ret = 1;
    u16 cnt = D_030008AA[0];
    if (cnt != 0 && (arg0->unk3A & 2)) {
        arg0->unk34 = arg0->unk2C;
        D_030008C0[D_030008AC[0]] = arg0;
        D_030008AC[0] += 1;
        D_030008AA[0] = cnt - 1;
        ret = 0;
    }
    return ret;
}

s32 sub_0803A898(struct QueueEnt *arg0) {
    s32 ret = 1;
    if (D_030008AE[0] != 0 && (arg0->unk3A & 2)) {
        arg0->unk34 = sub_0803A584(arg0);
        D_03000900[D_030008B0[0]] = arg0;
        D_030008B0[0] += 1;
        D_030008AE[0] -= 1;
        ret = 0;
    }
    return ret;
}
