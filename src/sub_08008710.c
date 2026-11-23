/* identical to sub_080086E4 (matched), with its names changed by decompdecomp */
extern void sub_080076DC(void);
extern void sub_08037A74(s32);
extern u8 D_03003820[];
extern u8 D_030037A0[];
void sub_08008710(void)
{
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);
    if (*timer == 0) {
        sub_080076DC();
        *timer = 16;
        ++base[0x2B];
    }
}
void sub_080086AC(void)
{
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);
    if (*timer == 0) {
        sub_080547DC(D_03003820, 0);
        sub_080076DC();
        *timer = 16;
        ++base[0x2B];
    }
}
void sub_0800873C(void)
{
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);
    if (*timer == 0) {
        sub_080547DC(D_030037A0, 2);
        *timer = 80;
        ++base[0x2B];
    }
}
void sub_08008684(void)
{
    u8 *base;
    sub_08037A74(0x100);
    sub_080076DC();
    base = D_03004830;
    base[0x2C] = 16;
    ++base[0x2B];
}
