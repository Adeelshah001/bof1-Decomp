extern u8 D_03004550[];
void sub_0805B920(void);
u8 sub_0805CF40(s32, u32 *);

void sub_0805BA6C(u8 arg0, u16 *arg1, u16 *arg2)
{
    *arg1 = 0xCA;
    *arg2 = 0xCB;
}

void sub_0805BA40(u8 arg0)
{
    D_03004550[0x23] = arg0;
    D_03004550[0x24] = 0xFF;
    D_03004550[0x1A] = 0xC;
    sub_0805B920();
}

void sub_0805BAA0(u8 arg0, u16 *arg1, u16 *arg2)
{
    u32 sp0;
    u16 val;
    if (sub_0805CF40(0x154, &sp0) != 0) {
        val = 0x12E;
    } else {
        val = 0x12D;
    }
    *arg1 = val;
    *arg2 = 0x12F;
}

void sub_0805BADC(u8 arg0, u16 *arg1, u16 *arg2)
{
    *arg1 = 0x15A;
    *arg2 = 0x159;
}
