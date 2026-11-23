s32 func_08026E2C(s32 arg0, s32 arg1, s32 arg2) {
    s32 r3 = arg0;
    s32 r1 = arg1 << 16;
    s32 r2 = (u16)arg2;
    s32 addr;
    u8 *ptr;
    
    if (r1 != (0x85 << 19)) {
        return 0;
    }
    
    addr = 0x03004830;
    if (r2 != addr) {
        return 0;
    }
    
    ptr = (u8*)(addr + 0x42);
    *ptr = 1;
    
    ptr = (u8*)(r3 + 0xb8);
    *ptr = *ptr | 4;
    
    return 0;
}
