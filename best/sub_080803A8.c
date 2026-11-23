extern u8 D_03004830[];
void sub_080379D4(s32);
void sub_0807FAC0(u8 *);
void sub_0807FF88(u8 *, u8 *, u8);

s32 sub_080803A8(void) {
    u32 temp = D_03004830[0x3B] & D_03004830[0x3D];
    if (temp & 4) {
        sub_080379D4(2);
        return 1;
    }
    if (!(temp & 8)) {
        temp <<= 8;
    } else {
        sub_080379D4(3);
        temp = 2;
    }
    return temp;
}

void sub_080804B8(u8 *arg0, u8 *arg1) {
    u8 temp = arg1[0x3C];
    if (temp == 0x11 || temp == 0x22) {
        arg0[8] = 2;
        sub_0807FF88(arg0, arg1, (u8)((arg1[0x110] << 2) + 2));
    } else {
        sub_0807FAC0(arg0);
    }
}
