void sub_0803A8EC(void *);
void sub_0807B27C(void *);
void sub_0807B7A4(void *, s32);

void sub_080768BC(void *arg0) {
    if (*(u8 *)((u8 *)arg0 + 0x54) != 0x0C) {
        if (!(*(u8 *)((u8 *)arg0 + 0xDC) & 0x40) && !(*(u8 *)((u8 *)arg0 + 0xDD) & 0x02)) {
            sub_0807B27C(arg0);
        }
        if (*(u8 *)((u8 *)arg0 + 0xF1) & 0x80) {
            *(u8 *)((u8 *)arg0 + 0x2C) = 0;
        } else {
            *(u16 *)((u8 *)arg0 + 0x2C) = *(u16 *)((u8 *)arg0 + 0x06) + 0x18;
        }
        if ((u16)(*(u16 *)0x03001864 - 0x10) > 1) {
            sub_0803A8EC(arg0);
        }
    } else {
        sub_0807B7A4(arg0, 0x0C);
    }
}
