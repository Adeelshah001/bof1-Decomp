extern void sub_08038128(void *, s32, s32, s32);
extern void sub_08038264(void *);
extern void sub_0803EE6C(void *);
extern void sub_0807B270(void *);

void sub_08099578(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 zero;
    p[0x61] += 2;
    sub_08038264(arg0);
    zero = 0;
    *(u16 *)(p + 0x2C) = 0x2FFF;
    sub_08038128(arg0, *(u32 *)(p + 0x78), 8, 0x10);
    if ((p[0x61] & 0xF0) == (*(u16 *)(p + 0x44) >> 8)) {
        sub_0807B270(arg0);
        (void)zero;
    } else {
        sub_0803EE6C(arg0);
        p[0x54] = zero;
        p[0x55] = zero;
    }
}
