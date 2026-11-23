s32 sub_0802A400(s32 arg0, u16 arg1, s32 arg2) {
    u32 hi = (u16)((arg1 & 0x100) << 2);
    u32 a = arg1 & 0xFF;
    u32 b = arg2 & 0xFF;
    return hi + ((a >> 3) + ((b & 0xF8) << 2));
}
