void sub_080157B8(void)
{
    if (*(u8 *)0x030023DC != 1) {
        u8 *state = (u8 *)0x03004830;
        state[0x2C] = 32;
        state[0x2B]++;
    }
}
void sub_080138A8(void);
void sub_080017EC(s32);
void sub_08015700(void)
{
    sub_080017EC(0x95);
    sub_080138A8();
    D_03004830[0x2B]++;
}
