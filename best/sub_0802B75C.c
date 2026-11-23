extern void (*D_080F9840[])(void);

void sub_0802B62C(u8 arg0) {
    u8 value = arg0;
    void (**handlers)(void) = D_080F9840;
    handlers[value >> 1]();
}

void sub_0802B700(void) {
    u16 i;
    u16 *p = (u16 *)0x030048B0;
    volatile u32 *dma;
    for (i = 0; i <= 0x1FF; i += 4) {
        p[i] = 0xE0;
        p[i + 1] = 0;
        p[i + 2] = 0x3FF;
    }
    dma = (volatile u32 *)0x040000D4;
    dma[0] = (u32)p;
    dma[1] = 0x07000000;
    dma[2] = 0x80000200;
    dma[2];
}

u16 sub_0802B7FC(u16 arg0);
void sub_080A0210(void *arg0, void *arg1, u32 arg2);

void sub_0802B75C(u16 arg0, u16 arg1) {
    u8 *src;
    u8 *dst;
    src = (u8 *)(0x081A0E7C + sub_0802B7FC(arg0));
    dst = (u8 *)(0x020210C0 + arg1);
    sub_080A0210(src, dst, 8);
    sub_080A0210(dst, (u8 *)(0x020212C0 + arg1), 8);
    *(u32 *)0x03001694 |= 1;
}

extern u8 D_03004830[];

void sub_0802B7B0(void) {
    u8 *ptr = D_03004830;
    ptr[0x4D] = 0x20;
}
