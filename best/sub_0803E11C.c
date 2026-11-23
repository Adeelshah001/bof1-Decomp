u8 sub_08033420(void);

s32 sub_0803E11C(void *arg0, s32 arg1) {
    u8 *p = arg0;
    s32 v = *(s32 *)(p + 4) + arg1;
    s32 r;

    *(s32 *)(p + 4) = v;
    if (v != *(s32 *)(p + 0xC)) {
        r = 0;
    } else {
        *(u16 *)(p + 4) = 0;
        r = 1;
    }
    return r;
}

s32 sub_0803E100(void *arg0, s32 arg1) {
    u8 *p = arg0;
    s32 r;

    *(s32 *)(p + 0) = *(s32 *)(p + 0) + arg1;
    if (*(u16 *)(p + 2) != *(u16 *)(p + 0xA)) {
        r = 0;
    } else {
        *(u16 *)(p + 0) = 0;
        r = 1;
    }
    return r;
}

void sub_0803E0D4(u8 *arg0) {
    u16 v;
    u8 *q;
    u8 zero;

    if (sub_08033420() != 0) {
        v = *(u16 *)(arg0 + 0x36);
        q = arg0 + 0x41;
        *q = v;
        *(u16 *)(q + 0x0B) = 2;
        zero = 0;
        arg0[0x50] = zero;
    }
}

s32 sub_0803EBB0(u16 arg0) {
    s32 found = 0;
    u8 i;
    u8 *e;

    for (i = 0; i <= 7; i++) {
        e = (u8 *)(i * 0x124 + 0x03002AB0);
        if (e[0x3A] != 0 && (e[0xF0] & 0x40) == 0 &&
            (*(u16 *)(e + 0xEC) == arg0 || *(u16 *)(e + 0xEE) == arg0)) {
            found = 1;
            break;
        }
    }
    return found;
}
