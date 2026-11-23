extern const u8 D_08221D40[];
extern u8 D_0202DDD4[];

void sub_0803E774(u16 *);
void sub_0803F880(u16 *);
s32 sub_0803EC10(void *, s32);

s32 sub_0803F668(u16 *arg0) {
    u32 mask = 0x2100;
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

s32 sub_0803F620(u16 *arg0) {
    u32 mask = 0x1100;
    u16 val;
    (*arg0)++;
    val = D_08221D40[*arg0];
    (*arg0)++;
    val |= mask;
    if ((u8)sub_0803EC10(D_0202DDD4, val) == 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}
