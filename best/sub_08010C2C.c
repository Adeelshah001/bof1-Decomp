void sub_08010C2C(void)
{
    u8 *timer = D_03004830 + 0x2C;
    if (--*timer == 0) {
        u8 *step = timer - 1;
        ++*step;
    }
}
