void sub_0805DE54(void *arg0) {
    u8 *p = (u8 *)arg0;
    u16 v0, v1;
    v0 = p[0x100];
    *(u16 *)(p + 0x106) = v0;
    v1 = p[0x101];
    *(u16 *)(p + 0x108) = v1;
}
