extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u16 D_03001864;
extern u32 D_03001694;

void sub_0800312C(s32 arg0, s32 arg1);
void sub_08001F80(s32 arg0, s32 arg1, s32 arg2);

void sub_0800E680(void)
{
    u8 *p;
    u8 *q;
    u8 zero;

    p = D_03004830;
    q = p + 0x2A;
    zero = 0;
    *q = 1;
    p[0x2B] = zero;
}

void sub_0800E698(void)
{
    u8 *p;
    u8 *q;

    p = D_03004830;
    q = p + 0x2A;
    *q = 1;
    p[0x2B] = 2;
}

void sub_0800E6D8(void)
{
    D_03004830[0x2D] = 1;
    D_03002AB0[0xB8] |= 4;
}

void sub_0800E61C(void)
{
    u8 *p;

    sub_0800312C(0x10, 0);
    sub_08001F80(0, 0, 0);
    D_03001864 = 0x10;
    D_03001694 |= 0x80;
    p = D_03004830;
    p[0x2D] = 0x10;
    p[0x2C] = 0xB4;
    p[0x2B] += 1;
}
