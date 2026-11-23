u8 sub_0805CF40(s32, u32 *);

void sub_0805BAA0(u8 arg0, u16 *arg1, u16 *arg2)
{
    u32 sp0;
    if (sub_0805CF40(0x154, &sp0) != 0) {
        *arg1 = 0x12E;
    } else {
        *arg1 = 0x12D;
    }
    *arg2 = 0x12F;
}
