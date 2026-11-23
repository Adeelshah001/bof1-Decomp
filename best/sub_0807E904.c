typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State03002AB0;

typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;

extern State03002AB0 D_03002AB0;
extern State03004F50 D_03004F50;
extern u8 D_03004584;

void sub_0807E904(s32 arg0) {
    if (arg0 << 0x18 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    }
}

extern const u8 D_08221D40[];
extern u8 D_0202DDD4[];

void sub_0803E774(u16 *);
void sub_0803F880(u16 *);
s32 sub_0803EC10(void *, s32);
u8 sub_0805CF40(u16, u32 *);
u8 sub_0803EBB0(u16);

s32 sub_0803F5D8(u16 *arg0) {
    u32 mask = 0x1100;
    u16 val;
    (*arg0)++;
    val = D_08221D40[*arg0];
    (*arg0)++;
    val |= mask;
    if ((u8)sub_0803EC10(D_0202DDD4, val) != 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}

s32 sub_0803F4E8(u16 *arg0) {
    u32 sp0;
    u32 val;

    (*arg0)++;
    val = D_08221D40[*arg0];
    (*arg0)++;
    val |= 0x100;
    if (sub_0805CF40(val, &sp0) != 0 && sub_0803EBB0(val) == 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}

s32 sub_0803F490(u16 *arg0) {
    u32 sp0;
    u32 val;

    (*arg0)++;
    val = D_08221D40[*arg0];
    (*arg0)++;
    val |= 0x100;
    if (sub_0805CF40(val, &sp0) == 0 || sub_0803EBB0(val) != 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}
