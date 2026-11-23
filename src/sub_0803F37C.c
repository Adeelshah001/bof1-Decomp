extern const u8 D_08221D40[];
s32 sub_08001770(u8);
void sub_0803E774(u16 *);
void sub_0803F880(u16 *);

s32 sub_0803F304(u16 *arg0) {
    u8 val;
    (*arg0)++;
    val = D_08221D40[*arg0];
    (*arg0)++;
    if ((u8)sub_08001770(val) == 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}

s32 sub_0803F37C(u16 *arg0) {
    u8 val;
    (*arg0)++;
    val = D_08221D40[*arg0];
    (*arg0)++;
    if ((s8)D_03004830[0x31] == val) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}
