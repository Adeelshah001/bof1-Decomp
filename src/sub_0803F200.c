extern u8 D_0202DDD4[];

void sub_0803F764(void);
void sub_0803F7B0(void);
u8 sub_0803EC10(void *, s32);

s32 sub_0803F1C8(u8 **arg0) {
    u32 mask = 0x1100;
    u32 flags = (*arg0)[1] | mask;

    if (sub_0803EC10(D_0202DDD4, flags) != 0) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 2;
    return 0;
}

s32 sub_0803F200(u8 **arg0) {
    u32 mask = 0x1100;
    u32 flags = (*arg0)[1] | mask;

    if (sub_0803EC10(D_0202DDD4, flags) == 0) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 2;
    return 0;
}
