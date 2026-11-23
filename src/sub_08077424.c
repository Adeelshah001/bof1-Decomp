extern u16 D_03001864;
void sub_0803800C(void *, s32, s32);
void sub_0803A8EC(void *);

void sub_08077424(void *arg0, u8 arg1)
{
    u8 val;
    u8 b;

    ((u8 *)arg0)[0x54] = arg1;
    ((u8 *)arg0)[0x50] = 2;
    if (!(((u8 *)arg0)[0xF0] & 0x28)) {
        b = ((u8 *)arg0)[0x112];
        val = 10;
        if (b <= 0x5C)
            val = 8;
        sub_0803800C(arg0, val, 2);
    }
    if (((u8 *)arg0)[0xF1] & 0x80)
        ((u8 *)arg0)[0x2C] = 0;
    else
        *(u16 *)((u8 *)arg0 + 0x2C) = *(u16 *)((u8 *)arg0 + 6) + 0x18;
    if ((u16)(D_03001864 - 0x10) > 1)
        sub_0803A8EC(arg0);
}
