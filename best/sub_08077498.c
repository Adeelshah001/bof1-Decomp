void sub_08077498(void *arg0) {
    u32 r7 = 0;
    u32 b;
    u16 r4;
    void *r1;
    u16 v;
    u8 *ptr = (u8 *)arg0;

    b = (u32)ptr[0x54] - 1;
    ptr[0x54] = (u8)b;
    if (b & 0x80) {
        r4 = *(u16 *)(ptr + 0xFA);
        ptr[0x70] = 0;
        sub_08083484(arg0);
        *(u16 *)(ptr + 0xFA) = r4;
        r1 = *(void **)(ptr + 0x74);
        ((u8 *)r1)[2] = ptr[2];
        ((s8 *)r1)[6] = (s8)(ptr[6] - 0x30);
        ptr[0x50] = 4;
    }
    if (ptr[0xF1] & 0x80) {
        ptr[0x2C] = 0;
    } else {
        *(u16 *)(ptr + 0x2C) = (u16)(*(u16 *)(ptr + 6) + 0x18);
    }
    v = (u16)(*(u16 *)0x03001864 - 0x10);
    if (v > 1) {
        sub_0803A8EC(arg0);
    }
}
