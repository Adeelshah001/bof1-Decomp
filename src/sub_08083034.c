s32 sub_08083014(s32);
s32 sub_080A07AC(s32, s32);

s32 sub_08082FFC(u8 *arg0) {
    u8 *p = arg0 + 0x54;
    *p++ = 0;
    *p = 0;
    return sub_08083014((s32)arg0);
}

void sub_08083034(u8 *arg0) {
    s32 n = ((u16 *)arg0)[0x1C];
    u16 val;
    if (*(u32 *)0x03004FF0 != 0) {
        n = sub_080A07AC(n * 8, 0x3E) + 8;
    } else {
        n = sub_080A07AC(n * 0x10, 0x1F);
    }
    val = (n << 8) | (0x10 - n);
    *(u16 *)0x0300168C = 0x3C42;
    *(u16 *)0x030016A8 = val;
}

s32 sub_08082FD4(u8 *arg0) {
    sub_08083034(arg0);
    if (++((u16 *)arg0)[0x1C] != 0x1F) {
        return 0;
    }
    ((u16 *)arg0)[0x1C] = 0;
    return 1;
}
