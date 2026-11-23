typedef u8 *va_list;

void sub_080A0B1C(u8 *dst, u8 *fmt, va_list ap);
void sub_080A0400(u8 *p);

void sub_080A045C(u8 *fmt, ...) {
    u8 buf[0x100];
    va_list ap;

    ap = __builtin_next_arg(fmt);
    sub_080A0B1C(buf, fmt, ap);
    sub_080A0400(buf);
}

void sub_0809F41C(void) {
    u32 *sound = *(u32 **)0x03007FF0;
    u32 magic = *sound;
    if (magic != 0x68736D53) {
        ((vu16 *)0x040000C6)[0] = 0xB600;
        ((vu16 *)0x040000C6)[6] = 0xB600;
        *(vu8 *)((u8 *)sound + 4) &= 0;
        *sound = magic - 0xA;
    }
}
