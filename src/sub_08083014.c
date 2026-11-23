s32 sub_08083084();
s32 sub_080A07AC(s32, s32);

s32 sub_08083014(s32 arg0) {
    sub_08083084();
    return sub_08083084(arg0);
}

s32 sub_08082FFC(u8 *arg0) {
    u8 *p = arg0 + 0x54;
    p[0] = 0;
    p[1] = 0;
    return sub_08083014((s32)arg0);
}

void sub_08083034(u8 *arg0) {
    u16 v = ((u16 *)arg0)[0x1C];
    s32 r;
    if (*(u32 *)0x03004FF0 != 0) {
        r = sub_080A07AC(v * 8, 0x3E) + 8;
    } else {
        r = sub_080A07AC(v * 0x10, 0x1F);
    }
    *(u16 *)0x0300168C = 0x3C42;
    *(u16 *)0x030016A8 = (r << 8) | (0x10 - r);
}

s32 sub_08082FD4(u8 *arg0) {
    s32 ret;
    u16 val;
    sub_08083034(arg0);
    val = ((u16 *)arg0)[0x1C] + 1;
    ((u16 *)arg0)[0x1C] = val;
    if (val == 0x1F) {
        ((u16 *)arg0)[0x1C] = 0;
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}
