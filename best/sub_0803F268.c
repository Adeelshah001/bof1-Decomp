s32 sub_0805CF40(s32, s32 *);
s32 sub_0803EBB0(s32);
void sub_0803F764(void);
void sub_0803F7B0(void);

s32 sub_0803F268(s32 *arg0) {
    if (((u8 *)0x030009A8)[*(u8 *)0x030009B2] & 0x80) {
        *(u8 *)0x030009A0 = 0xFF;
    } else {
        *(u8 *)0x030009A0 = ~*(u8 *)0x030009A0;
    }
    (*arg0)++;
    return 0;
}

s32 sub_0803F0C4(void **arg0) {
    u8 *cmd = (u8 *)*arg0;
    s32 item = cmd[1] | 0x100;
    s32 sp0;

    if (sub_0805CF40(item, &sp0) != 0 && sub_0803EBB0(item) == 0) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 2;
    return 0;
}

s32 sub_0803F07C(void **arg0) {
    u8 *cmd = (u8 *)*arg0;
    s32 item = cmd[1] | 0x100;
    s32 sp0;

    if (sub_0805CF40(item, &sp0) != 0 && sub_0803EBB0(item) == 0) {
        sub_0803F7B0();
    } else {
        sub_0803F764();
    }
    *arg0 += 2;
    return 0;
}

s32 sub_0803F02C(void **arg0) {
    u8 *cmd = (u8 *)*arg0;
    u32 item = cmd[1] | (cmd[2] << 8);
    u32 item_hi = item << 16;

    if ((s8)*(u8 *)0x0300485A == (u8)item && (s8)*(u8 *)0x0300485B == (u8)(item_hi >> 24)) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 3;
    return 0;
}
