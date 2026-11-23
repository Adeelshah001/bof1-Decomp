void sub_08081D7C(void *ptr, void *arg0);
void sub_0803A8EC(void *arg0);

void sub_08077D64(void *arg0)
{
    void *p = arg0;
    u8 *g = (u8 *)0x03004F30;
    *(u16 *)(g + 0x0E) &= 0x7FFF;
    sub_08081D7C((void *)0x03004F50, p);
    if (!(*(g + 0x0D) & 0x80)) {
        *(u8 *)0x03004754 = 1;
    }
    if (*(u8 *)((u8 *)p + 0xF1) & 0x80) {
        *(u8 *)((u8 *)p + 0x2C) = 0;
    } else {
        *(u16 *)((u8 *)p + 0x2C) = *(u16 *)((u8 *)p + 0x06) + 0x18;
    }
    if ((u16)(*(u16 *)0x03001864 - 0x10) > 1) {
        sub_0803A8EC(p);
    }
}
