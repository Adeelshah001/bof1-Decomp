u32 sub_08033420(void);
u32 sub_0802B6D4(u32, u32);
u32 sub_0802B75C(u32, u32);

void sub_0802D7A0(void *arg0)
{
    u16 v0, v1;
    if (((u8 *)(arg0))[0x51] & 0x80)
        goto tail;
    v0 = *(u16 *)((u8 *)arg0 + 0x02);
    *(u16 *)((u8 *)arg0 + 0x82) = v0;
    v1 = *(u16 *)((u8 *)arg0 + 0x06);
    *(u16 *)((u8 *)arg0 + 0x86) = v1;
    if ((sub_08033420() << 0x18) == 0)
        return;
tail:
    ((u8 *)(arg0))[0x41] &= 0x7F;
    sub_0802B6D4(0xBC, 0x6000);
    ((u8 *)(arg0))[0xB8] |= 0x08;
    sub_0802B75C(0x238, 0);
    ((u8 *)(arg0))[0x50] = 2;
}
