typedef u8 *va_list;

void sub_080A0B1C(u8 *dst, u8 *fmt, va_list ap);
void sub_080A0400(u8 *p);

void sub_080A045C(u8 *arg0, ...) {
    u8 buf[0x100];
    va_list ap;

    ap = (va_list)((u8 *)&arg0 + 4);
    sub_080A0B1C(buf, arg0, ap);
    sub_080A0400(buf);
}

void sub_0809E970(u8 *, u8 *);

void sub_0809F5B4(u8 *arg0) {
    s32 magic = *(u32 *)(arg0 + 0x34);
    if (magic == 0x68736D53) {
        s32 count;
        u8 *track;
        *(u32 *)(arg0 + 0x34) = magic + 1;
        *(u32 *)(arg0 + 4) |= 0x80000000;
        count = arg0[8];
        track = *(u8 **)(arg0 + 0x2C);
        while (count > 0) {
            sub_0809E970(arg0, track);
            count--;
            track += 0x50;
        }
        *(u32 *)(arg0 + 0x34) = 0x68736D53;
    }
}

void sub_0809F41C(void) {
    u32 *sound = *(u32 **)0x03007FF0;
    u32 magic = *sound;
    if (magic != 0x68736D53) {
        ((vu16 *)0x040000C6)[0] = 0xB600;
        ((vu16 *)0x040000C6)[6] = 0xB600;
        *(u8 *)((u8 *)sound + 4) = 0;
        *sound = magic - 0xA;
    }
}

void sub_0809ECDC(u8 *arg0) {
    if (*(u32 *)(arg0 + 0x34) == 0x68736D53) {
        *(u32 *)(arg0 + 4) &= 0x7FFFFFFF;
    }
}
