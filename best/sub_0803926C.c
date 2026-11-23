typedef struct {
    u8 pad[0x3BE];
    u8 bits[0x400];
} SlotBits;

extern u8 D_0202DBD0[];
extern u8 D_0300478C[];
extern u8 D_03004894[];
extern u8 D_03004898[];
extern u8 D_080A6524[];

void sub_080A0A68(void *dst, const void *src, s32 len);

s32 sub_0803926C(u16 arg0)
{
    u8 sp0[8];
    u16 v = arg0;
    u8 idx;
    u8 bit;
    u8 t;

    sub_080A0A68(sp0, D_080A6524, 8);
    idx = (v & 0xFF00) >> 8;
    bit = v & 7;
    t = ((SlotBits *)D_0202DBD0)->bits[idx];
    if ((t & sp0[bit]) == 0)
        return 1;
    return 0;
}

void sub_080391F4(u8 *arg0, u8 arg1, u8 arg2, u8 arg3)
{
    u8 start = arg3 + 1;
    u8 i = 0;

    if (i < arg2) {
        while (1) {
            u8 *e;

            if (start > 7)
                break;
            e = arg0 + start * 0x124;
            if (e[0x3A] != 0)
                e[0xF0] &= ~arg1;
            i++;
            start++;
            if (i >= arg2)
                break;
        }
    }
}

void sub_080392B8(u8 *arg0)
{
    u16 *out = (u16 *)D_03004894;
    u16 v = *(u16 *)(arg0 + 6);
    u32 first = v + 0x10;
    u16 t;
    u32 w;

    *out = (u16)first;
    *(u16 *)D_03004898 = 0xFFF0;
    t = *(u16 *)D_0300478C;
    if (t != 0)
        *(u16 *)D_03004898 = (u16)(((t - 1) & 0x3E) << 3);
    w = *(u16 *)D_03004898;
    w += 0x10;
    w += *(u16 *)(arg0 + 2);
    *(u16 *)D_03004898 = (u16)w;
    if (arg0[0x4B] != 0)
        *out = v + 0x108;
}
