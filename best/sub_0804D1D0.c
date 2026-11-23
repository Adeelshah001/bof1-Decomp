extern u8 D_030023E0[];

s32 sub_0803A508(u8 *arg0);

void sub_0804D1D0(u8 *arg0, u16 arg1, u16 arg2) {
    u8 *cam = D_030023E0;
    s32 y;
    *(u16 *)(arg0 + 2) = arg1 + *(u16 *)(cam + 2);
    y = arg2 + *(u16 *)(cam + 6);
    *(u16 *)(arg0 + 6) = y;
    *(u16 *)(arg0 + 0x2C) = y;
    sub_0803A508(arg0);
}
