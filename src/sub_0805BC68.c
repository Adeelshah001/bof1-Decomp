extern u16 D_030045B0[];
extern u8 D_03002AB0[];

void sub_0805BC68(u8 arg0, u16 *arg1, u16 *arg2)
{
    *arg1 = 0;
    *arg2 = 0;
}

void sub_0805BC48(u8 arg0, u16 *arg1, u16 *arg2)
{
    D_030045B0[0x38 / 2] = 0x803F;
    *arg1 = 0xFFFF;
    *arg2 = 0x40;
}

void sub_0805BC9C(u8 arg0, u16 *arg1, u16 *arg2)
{
    if (!(arg0 & 0x80)) {
        D_03002AB0[0xB8] |= 4;
    }
    *arg1 = 0xFFFF;
    *arg2 = 0x231;
}

void sub_0805BCD8(u8 arg0, u16 *arg1, u16 *arg2)
{
    *arg1 = 0xFFFF;
    *arg2 = 0x245;
}
