s32 sub_080A0BF8(s32, void *, s32, s32);

void *sub_080A0AC8(void *dst, u32 c, u32 n) {
    u8 *p = (u8 *)dst;
    if (n > 3 && ((u32)dst & 3) == 0) {
        u32 *d = (u32 *)dst;
        u32 v;
        c &= 0xFF;
        v = (c << 8) | c;
        v |= v << 16;
        while (n > 0x0F) {
            *d++ = v;
            *d++ = v;
            *d++ = v;
            *d++ = v;
            n -= 0x10;
        }
        while (n > 3) {
            *d++ = v;
            n -= 4;
        }
        p = (u8 *)d;
    }
    for (;;) {
        u32 t = n;
        n = n - 1;
        if (t == 0) break;
        *p++ = (u8)c;
    }
    return dst;
}

void sub_080A0BE4(void *arg0, s32 arg1, s32 arg2) {
    sub_080A0BF8(*(s32 *)((u8 *)arg0 + 0x54), arg0, arg1, arg2);
}

void sub_080A07A4(void) {
}
