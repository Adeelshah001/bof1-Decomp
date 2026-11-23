void sub_08049F58(u32 arg0) {
    u32 val = *(u16 *)(arg0 + 0x58);
    val = val - 1;
    *(u16 *)(arg0 + 0x58) = val;
    if ((val << 0x10) != 0) {
        return;
    }
    *(u32 *)(arg0 + 0x64) = 0x0804900D;
}
