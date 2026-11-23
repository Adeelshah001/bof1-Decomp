void sub_0803E774(u16 *arg0);
void sub_0803F880(u16 *arg0);

extern u8 D_03004830[];
extern u8 D_08221D40[];

s32 sub_0803F42C(u16 *arg0) {
    u16 c;
    u32 val;
    u32 w;

    c = *arg0;
    *arg0 = c + 1;
    c = *arg0;
    val = D_08221D40[c] | (D_08221D40[c + 1] << 8);
    w = val << 16;
    *arg0 = c + 2;

    if ((s8)D_03004830[0x2A] == (val & 0xFF) &&
        (s8)D_03004830[0x2B] == (w >> 24)) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}
