extern u8 D_0202DBD0[];
extern u8 D_0202DF8E[];
extern u8 D_030008A0[];
extern u8 D_030008A4[];
extern u8 D_0300478C[];
extern u8 D_03004894[];
extern u8 D_03004898[];
extern u8 D_080A6524[];
extern u8 D_0821E97C[];

void sub_080A0A68(void *dst, const void *src, s32 len);

s32 sub_0803924C(void)
{
    *(u32 *)D_030008A0 = (u32)D_0821E97C;
    *(u32 *)D_030008A4 = (u32)D_0202DF8E;
    return 0;
}

s32 sub_0803926C(u16 arg0)
{
    u8 sp0[8];

    sub_080A0A68(sp0, D_080A6524, 8);
    if (!(*(u8 *)(D_0202DBD0 + 0x3BE + (arg0 >> 8)) & sp0[arg0 & 7]))
        return 1;
    return 0;
}

void sub_080391F4(u8 *arg0, u8 arg1, u8 arg2, u8 arg3)
{
    u8 i = 0;
    u8 start = arg3 + 1;

    while (i < arg2) {
        u8 *e;

        if (start > 7)
            break;
        e = arg0 + start * 0x124;
        if (e[0x3A] != 0)
            e[0xF0] &= ~arg1;
        i++;
        start++;
    }
}

void sub_080392B8(u8 *arg0)
{
    u16 v = *(u16 *)(arg0 + 6);
    u16 t;

    *(u16 *)D_03004894 = v + 0x10;
    *(u16 *)D_03004898 = 0xFFF0;
    t = *(u16 *)D_0300478C;
    if (t != 0)
        *(u16 *)D_03004898 = (u16)(((t - 1) & 0x3E) << 3);
    *(u16 *)D_03004898 = *(u16 *)D_03004898 + 0x10 + *(u16 *)(arg0 + 2);
    if (arg0[0x4B] != 0)
        *(u16 *)D_03004894 = v + 0x108;
}
