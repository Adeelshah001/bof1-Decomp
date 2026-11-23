extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u8 sub_0805CF40(s32 arg0, u16 *arg1);
extern void sub_0805C9B8(void *arg0, s32 arg1);

void sub_080257C4(void) {
    u8 *ptr = D_03004830;
    ptr[0x42] |= 2;
}

void sub_08025768(void) {
    u16 sp0;
    if (sub_0805CF40(0x141, &sp0)) {
        sub_0805C9B8(D_03002AB0, 0x64);
    }
}

void sub_08025758(void) {
    u8 *ptr = D_03004830;
    ptr[0x42] = 1;
}

void sub_0802585C(void) {
    u8 *ptr = D_03004830;
    u8 *ev = D_03002AB0;
    ptr[0x3F] = 5;
    ptr[0x40] = 0;
    ev[0xB8] |= 4;
}
