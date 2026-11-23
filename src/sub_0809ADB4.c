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

void sub_08038178(u8 *, u8 *);
void sub_08038264(u8 *);
void sub_0809AE78(u8 *);

void sub_0809AE3C(u8 *arg0) {
    sub_08038178(arg0, *(u8 **)(arg0 + 0x78));
    sub_08038264(arg0);
    if ((u8)((*(u8 **)(arg0 + 0x78))[2] - 0x10) < arg0[2]) {
        arg0[0x4C] = 4;
        arg0[0x70] = 0;
        sub_0809AE78(arg0);
    }
}

s32 sub_08083AF8(u8 *, s32);

void sub_0809AE08(u8 *arg0, u8 arg1) {
    if (sub_08083AF8(arg0, 0x42) == 0) {
        u8 *ptr = *(u8 **)(arg0 + 0x74);
        *(u16 *)(ptr + 2) = *(u32 *)(arg0 + 0x44) >> 8;
        *(u16 *)(ptr + 6) = *(u32 *)(arg0 + 0x48) >> 8;
        *(u8 **)(ptr + 0x6C) = arg0;
        *(u32 *)(ptr + 0x78) = *(u32 *)(arg0 + 0x78);
        ptr[0x54] = (arg1 + 1) * 4;
    }
}

extern const char D_080A7FD4[];
extern const char D_080A7C18[];

void sub_080352D0(const char *, const char *, s32, ...);
void sub_08099858(u8 *);

void sub_0809ADB4(u8 *arg0) {
    switch (arg0[0x4C]) {
    case 0:
        sub_08099858(arg0);
        break;
    case 2:
        sub_0809AE3C(arg0);
        break;
    case 4:
        sub_0809AE78(arg0);
        break;
    default:
        sub_080352D0(D_080A7FD4, D_080A7C18, 0xA98, arg0[0x4C]);
        break;
    }
}
