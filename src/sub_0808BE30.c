void sub_0808BE30(u8 *object, s8 arg1, u16 arg2) {
    u16 v = arg2;

    object[0x4D] = arg1;
    object[0x54] = (u8)v;
    v >>= 8;
    object[0x55] = (u8)v;
}
