void sub_0809A0B0(u8 *);
void sub_08099648(u8 *);
void sub_0803EE6C(u8 *);

void sub_0809A910(u8 *arg0)
{
    *(u16 *)(arg0 + 0x38) = 0x160;
    *(u16 *)(arg0 + 0x02) += 8;
    *(u16 *)(arg0 + 0x06) -= 0x10;
    sub_0809A0B0(arg0);
}

void sub_0809A8B8(u8 *arg0)
{
    s32 v = arg0[0x54] - 1;
    arg0[0x54] = (u8)v;
    if ((v << 24) == 0) {
        u8 v55 = arg0[0x55];
        u8 val = 4;
        if (v55 != 0) {
            val = 3;
        }
        arg0[0x55] = val;
        arg0[0x54] = 10;
        arg0[0x4C] = 4;
        sub_08099648(arg0);
    }
}

void sub_0809A9B8(Entity *arg0)
{
    u8 *child = (u8 *)arg0->unk6C;
    *(u16 *)((u8 *)arg0 + 2) = *(u16 *)(child + 2);
    if (child[0x3A] == 0) {
        sub_0803EE6C((u8 *)arg0);
        arg0->unk54 = 0;
        ((u8 *)arg0)[0x55] = 0;
    }
}
