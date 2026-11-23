extern u16 D_03002AB0[];

void sub_080022A0(void *arg0) {
    u8 *base = (u8 *)arg0;
    u16 *src = (u16 *)D_03002AB0;
    u16 val1 = src[1];
    u16 val2 = src[3];
    u8 zero = 0;
    u8 *p1;
    u8 *p2;
    u8 *p3;

    p1 = base;
    *(u16 *)(p1 + 0x02) = val1;
    p1 += 0x46;
    *(u16 *)p1 = val1;
    p1 += 0x3c;
    *(u16 *)p1 = val1;

    p2 = base;
    *(u16 *)(p2 + 0x06) = val2;
    p2 += 0x4a;
    *(u16 *)p2 = val2;
    p2 += 0x3c;
    *(u16 *)p2 = val2;

    p3 = base;
    val2 = *(u16 *)(p3 + 0x06);
    *(u16 *)(p3 + 0x2c) = val2;

    p3 += 0x50;
    *(u16 *)p3 = 0;
    p3 -= 3;
    *(u8 *)p3 = zero;
}
