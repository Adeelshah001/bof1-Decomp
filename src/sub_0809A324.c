extern void sub_0809A0B0(void);

void sub_0809A324(void *arg0) {
    u16 v;
    v = 0xB0 << 1;
    *(u16 *)((u8 *)arg0 + 0x38) = v;
    *(u16 *)((u8 *)arg0 + 0x02) += 0x10;
    *(u16 *)((u8 *)arg0 + 0x06) -= 0x08;
    sub_0809A0B0();
}
