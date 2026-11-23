void sub_08053AD4(u8 *arg0);

void sub_08053BB0(u8 *arg0) {
    u16 y = *(u16 *)(arg0 + 6) + 0x60;
    u8 z1 = 0;
    u16 z2 = 0;
    void (*fn)(u8 *);

    *(u16 *)(arg0 + 6) = y;
    arg0[0x61] = z1;
    arg0[0x54] = 0xC0;
    arg0[0x55] = z1;
    fn = sub_08053AD4;
    *(u32 *)(arg0 + 0x64) = (u32)fn;
    *(u16 *)(arg0 + 0x38) = z2;
    fn(arg0);
}
