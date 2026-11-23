void sub_0809A0B0(u8 *);
void sub_0803EE6C(u8 *);

void sub_0809A910(u8 *arg0)
{
    u16 timer = 0x160;
    *(u16 *)(arg0 + 0x38) = timer;
    *(u16 *)(arg0 + 0x02) += 8;
    *(u16 *)(arg0 + 0x06) -= 0x10;
    sub_0809A0B0(arg0);
}

void sub_0809A9B8(u8 *arg0)
{
    u8 *child = *(u8 **)(arg0 + 0x6C);
    *(u16 *)(arg0 + 0x02) = *(u16 *)(child + 0x02);
    if (child[0x3A] != 0) {
        return;
    }
    sub_0803EE6C(arg0);
    arg0[0x54] = 0;
    arg0[0x55] = 0;
}
