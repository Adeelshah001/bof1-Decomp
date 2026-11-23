s32 sub_080A44DC(s32 arg0);
s32 sub_080A44FC(s32 arg0);
s32 sub_080A45CC(s32 arg0);
s32 sub_080A45F8(s32 arg0, s32 arg1, s32 arg2);

extern s32 D_03001150[];

s32 sub_080A461C(s32 arg0, s32 arg1, s32 arg2) {
    s32 idx;
    s32 r;
    s32 diff;
    u8 *base;

    r = sub_080A44FC(arg0);
    idx = sub_080A44DC(r);
    r = sub_080A45F8(arg0, arg1, arg2);
    if (r < 0)
        return sub_080A45CC(-1);
    diff = arg2 - r;
    if (idx != 0x14) {
        base = (u8 *)D_03001150;
        *(s32 *)(base + 4 + idx * 8) += diff;
    }
    return diff;
}

s32 sub_080A44DC(s32 arg0) {
    s32 i;
    for (i = 0; i <= 0x13; i++) {
        if (D_03001150[i * 2] == arg0)
            break;
    }
    return i;
}

s32 sub_080A4498(u8 *s) {
    u8 *q = s;
    if (((u32)s & 3) == 0) {
        u32 *p = (u32 *)s;
        for (;;) {
            u32 v = *p;
            if ((v + 0xFEFEFEFF) & ~v & 0x80808080)
                break;
            p++;
        }
        q = (u8 *)p;
    }
    while (*q)
        q++;
    return q - s;
}

u64 sub_080A4088(u32 arg0) {
    u64 r;
    s32 x;

    x = (arg0 & 0x7FF00000) + 0xFCC00000;
    if (x > 0) {
        r = x;
    } else {
        s32 sh = (-x) >> 20;
        if (sh <= 0x13) {
            r = 0x80000 >> sh;
        } else {
            sh -= 0x14;
            if (sh <= 0x1E)
                r = ((u64)(1 << (0x1F - sh))) << 32;
            else
                r = ((u64)1) << 32;
        }
    }
    return r;
}
