s32 sub_080A44DC(s32 arg0);
s32 sub_080A44FC(s32 arg0);
s32 sub_080A45CC(s32 arg0);
s32 sub_080A45F8(s32 arg0, s32 arg1, s32 arg2);

extern s32 D_03001150[];

s32 sub_080A461C(s32 arg0, s32 arg1, s32 arg2) {
    s32 idx;
    s32 r;
    s32 diff;

    r = sub_080A44FC(arg0);
    idx = sub_080A44DC(r);
    r = sub_080A45F8(arg0, arg1, arg2);
    if (r < 0)
        return sub_080A45CC(-1);
    diff = arg2 - r;
    if (idx != 0x14) {
        u8 *base;
        s32 *p;
        u8 *q;
        s32 off;

        base = (u8 *)D_03001150;
        off = idx * 8;
        p = (s32 *)(base + 4);
        q = (u8 *)p + off;
        *(s32 *)q += diff;
    }
    return diff;
}

s32 sub_080A4498(u8 *arg0) {
    u8 *q = arg0;
    u8 *start = q;
    if (((u32)q & 3) == 0) {
        u32 *p = (u32 *)q;
        u32 v;
        while (1) {
            v = *p;
            if ((v - 0x01010101) & ~v & 0x80808080)
                break;
            p++;
        }
        q = (u8 *)p;
    }
    while (*q)
        q++;
    return q - start;
}
