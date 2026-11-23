s32 sub_08083034(void *arg0);

s32 sub_08082FB4(void *arg0) {
    u16 val;
    u32 shifted;
    
    sub_08083034(arg0);
    val = *(u16 *)((u8 *)arg0 + 0x38) - 1;
    *(u16 *)((u8 *)arg0 + 0x38) = val;
    shifted = val << 0x10;
    if (shifted == 0) {
        return 1;
    }
    return 0;
}
