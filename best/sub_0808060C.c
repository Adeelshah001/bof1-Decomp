void sub_0808060C(s32 arg0, u8 *arg1, u16 arg2) {
    u8 *p = arg1 + 0xE2;
    u8 val = *p;
    u8 *q = (u8 *)(arg0 + 0x74 + arg2);
    *p = (val & 0xF0) + *q;
}
