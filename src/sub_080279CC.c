extern u8 D_03002AB0[];
extern u8 D_030023D0[];

s32 sub_08001770(s32);
void sub_08004EA0(s32);

u8 sub_080279EC(s32 arg0)
{
    u8 *p;
    u8 *q;
    u8 zero;

    p = (u8 *)arg0;
    q = p + 0x4D;
    zero = 0;
    *q = 0x0C;
    p[0x50] = zero;
    return 1;
}

s32 sub_08027A00(u8 *arg0)
{
    if (arg0[0x61] != 0) {
        s32 v;
        if ((sub_08001770(0xDD) << 24) != 0) {
            v = 0x81BC;
        } else {
            v = 0x80D2;
        }
        sub_08004EA0(v);
    }
    return 0;
}

s32 sub_080279CC(s32 arg0)
{
    u8 *p;
    u8 *q;

    p = D_03002AB0;
    q = p + 0x94;
    *(s32 *)q = arg0;
    *(s32 *)(p + 0x90) = arg0;
    D_030023D0[0] = 2;
    return 1;
}

u8 sub_08027A30(u16 arg0, s32 arg1, u16 arg2, s32 arg3)
{
    u16 x;
    u8 i;

    x = arg0;
    if ((arg1 << 16) == (arg3 << 16)) {
        i = 0;
        do {
            if (arg2 == x) {
                return sub_080279EC(0x03002AB0);
            }
            x += 0x10;
            i++;
        } while (i <= 2);
    }
    return 0;
}
