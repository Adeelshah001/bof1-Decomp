extern void sub_080A0774(void *);
extern void sub_08053BE8(void *);
extern void sub_08053C00(void *);
extern void sub_0803A8EC(void *);
extern void sub_0803828C(void *, void *, u16, u8);
extern void sub_08053AD4(void *);
extern void sub_08053C20(void);
extern void sub_08053C2C(void);

void sub_08053B34(void *arg0) {
    u8 *p = arg0;
    p[0x61] = 0x10;
    p[0x54] = 0x10;
    *(u32 *)(arg0 + 0x64) = (u32)sub_08053C2C;
    sub_080A0774(arg0);
}

void sub_08053B54(void *arg0) {
    u8 *p = arg0;
    p[0x61] = 0x10;
    p[0x54] = 0xFF;
    p[0x55] = 0x80;
    sub_08053BE8(arg0);
}

void sub_08053B78(void *arg0) {
    u8 *p = arg0;
    *(u16 *)(p + 0x2C) = (u16)(*(u16 *)(p + 0x2C) - 0x90);
    p[0x61] = 0;
    p[0x54] = 0xFF;
    p[0x55] = 0x80;
    *(u32 *)(arg0 + 0x64) = (u32)sub_08053AD4;
    *(u16 *)(p + 0x38) = 0;
    sub_080A0774(arg0);
}

void sub_08053AD4(void *arg0) {
    u8 *p = arg0;
    sub_0803828C(arg0, arg0 + 4, *(u16 *)(p + 0x38), p[0x61]);
    if (--p[0x54] == 0) {
        *(u16 *)(p + 0x46) = (u16)((*(u16 *)(p + 0x06) & 0xFFF0) | 0x0C);
        *(u16 *)(p + 0x2C) = (u16)(*(u16 *)(p + 0x2C) + p[0x55]);
        sub_08053C00(arg0);
        *(u32 *)(p + 0x64) = (u32)sub_08053C20;
    }
    sub_0803A8EC(arg0);
}
