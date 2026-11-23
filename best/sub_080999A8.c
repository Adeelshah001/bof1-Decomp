extern void sub_0809A0E4(void *);

void sub_080999A8(void *arg0) {
    u8 *p = (u8 *)arg0;
    u16 v1 = 0x120;
    *(u16 *)(p + 0x38) = v1;
    *(u16 *)(p + 0x02) = 0xF58;
    *(u16 *)(p + 0x06) = 0x2F4A;
    *(u16 *)(p + 0x2C) = 0x2F4A;
    p[0x4C]++;
    sub_0809A0E4(arg0);
}
