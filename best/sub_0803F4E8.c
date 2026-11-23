extern const u8 D_08221D40[];

void sub_0803E774(u16 *);
void sub_0803F880(u16 *);
u8 sub_0805CF40(u16, u32 *);
u8 sub_0803EBB0(u16);

s32 sub_0803F4E8(u16 *arg0) {
    u32 sp0;
    u16 val;

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
