u8 sub_08033420(void);

s32 sub_0803E11C(void *arg0, s32 arg1) {
    u8 *p = arg0;
    s32 v = *(s32 *)(p + 4) + arg1;
    s32 r = 0;

    *(s32 *)(p + 4) = v;
    if (v == *(s32 *)(p + 0xC)) {
        *(u16 *)(p + 4) = 0;
        r = 1;
    }
    return r;
}

s32 sub_0803E100(void *arg0, s32 arg1) {
    u8 *p = arg0;
    s32 r = 0;

    *(s32 *)(p + 0) = *(s32 *)(p + 0) + arg1;
    if (*(u16 *)(p + 2) == *(u16 *)(p + 0xA)) {
        *(u16 *)(p + 0) = 0;
        r = 1;
    }
    return r;
}

void sub_0803E0D4(u8 *arg0) {
    u8 zero;
    u8 *q;
    u8 *w;
    u16 v;

    if (sub_08033420() != 0) {
        v = *(u16 *)(arg0 + 0x36);
        q = arg0 + 0x41;
        *q = v;
        w = q + 0x0B;
        zero = 0;
        *(u16 *)w = 2;
        arg0[0x50] = zero;
    }
}

s32 sub_0803EBB0(u16 arg0) {
    s32 found = 0;
    u8 i;
    u8 *base = (u8 *)0x03002AB0;
    u8 *e;

    for (i = 0; i <= 7; i++) {
        e = (u8 *)((u32)(i * 0x124) + (u32)base);
        if (e[0x3A] != 0 && (e[0xF0] & 0x40) == 0 &&
            (*(u16 *)(e + 0xEC) == arg0 || *(u16 *)(e + 0xEE) == arg0)) {
            found = 1;
            break;
        }
    }
    return found;
}
