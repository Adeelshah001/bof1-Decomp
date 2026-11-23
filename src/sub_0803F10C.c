void sub_0803F764(void);
void sub_0803F7B0(void);

s32 sub_0803F10C(u8 **a) {
    u8 *b = D_03004830;
    if (*(s8 *)(b + 0x2D) == (*a)[1])
        sub_0803F764();
    else
        sub_0803F7B0();
    *a += 2;
    return 0;
}
