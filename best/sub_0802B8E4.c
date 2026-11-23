extern u8 D_030023E0[];

s32 sub_0802B8E4(u16 *arg0, u16 *arg1) {
    if (*(u16 *)(D_030023E0 + 0xA8) != 0) {
        arg1[3] = 0x7028;
        arg1[1] = arg0[1] + (0x80 << 5);
    } else {
        arg1[1] = arg0[1] + (0x80 << 5);
        arg1[3] = arg0[3];
    }
    return 0;
}
