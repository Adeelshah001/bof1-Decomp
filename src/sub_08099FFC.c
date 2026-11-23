void sub_08099FFC(void *arg0) {
    u16 val = 0xB0 * 2;
    *(u16 *)((u8 *)arg0 + 0x38) = val;
    sub_0809A0B0();
}
