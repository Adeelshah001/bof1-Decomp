extern u8 D_030050A0[];

void sub_0809E058(void)
{
}

void sub_0809E05C(void)
{
}

void sub_0809E008(void)
{
    *(vu16 *)0x04000208 = 0;
    *(vu16 *)0x04000200 &= 0xFF3F;
    *(vu16 *)0x04000208 = 1;
    *(vu16 *)0x04000128 = 0x2003;
    *(vu32 *)0x0400010C = 0xB1FC;
    *(vu16 *)0x04000202 = 0xC0;
    D_030050A0[8] = 0;
}

void sub_0809DFF4(void)
{
    if (D_030050A0[0] != 0) {
        D_030050A0[8] = 1;
    }
}
