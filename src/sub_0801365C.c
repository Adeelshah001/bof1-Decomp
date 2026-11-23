void sub_0801367C(void);

void sub_0801365C(u16 arg0)
{
    D_03004830[0x2A] = arg0;
    D_03004830[0x2B] = (arg0 & 0xFF00) >> 8;
    sub_0801367C();
}
