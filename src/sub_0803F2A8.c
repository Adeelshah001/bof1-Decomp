extern const u8 D_08221D40[];
s32 sub_08001770(u8);
void sub_0803E774(u16 *);
void sub_0803F880(u16 *);

s32 sub_0803F304(u16 *arg0) {
    (*arg0)++;
    if ((u8)sub_08001770(D_08221D40[(*arg0)++]) == 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}

extern u8 D_030009A0;
extern u8 D_030009B2;

s32 sub_0803F2D8(s32 *arg0) {
    s32 ret = 0;
    if (D_030009A0 == 0) {
        D_030009B2 = 0;
        D_030009A0 = 0;
        ret = 1;
    }
    (*arg0)++;
    return ret;
}

extern u8 D_030009A8[];

s32 sub_0803F2A8(s32 *arg0) {
    D_030009A0 = D_030009A8[D_030009B2];
    D_030009B2--;
    (*arg0)++;
    return 0;
}

s32 sub_0803F37C(u16 *arg0) {
    u8 val;
    (*arg0)++;
    val = D_08221D40[(*arg0)++];
    if ((s8)D_03004830[0x31] == val) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}
