extern u8 D_03002AB0[];
extern u16 D_03004114;
void sub_0801367C(void);

void sub_0801365C(u16 arg0)
{
    D_03004830[0x2A] = arg0 & 0xFF;
    D_03004830[0x2B] = arg0 >> 8;
    sub_0801367C();
}

void sub_0801369C(u16 arg0)
{
    D_03004830[0x2A] = arg0;
    D_03004830[0x2B] = (arg0 & 0xFF00) >> 8;
    D_03002AB0[0xB8] |= 4;
    D_03004114 = 1;
}
