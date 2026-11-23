void *sub_080A0A68(void *dst0, const void *src0, u32 len) {
    u8 *dst = dst0;
    const u8 *src = src0;

    if (len >= 16 && (((u32)src | (u32)dst0) & 3) == 0) {
        u32 *aligned_dst = (u32 *)dst0;
        while (len >= 16) {
            *aligned_dst++ = *(const u32 *)src;
            src += 4;
            *aligned_dst++ = *(const u32 *)src;
            src += 4;
            *aligned_dst++ = *(const u32 *)src;
            src += 4;
            *aligned_dst++ = *(const u32 *)src;
            src += 4;
            len -= 16;
        }
        while (len >= 4) {
            *aligned_dst++ = *(const u32 *)src;
            src += 4;
            len -= 4;
        }
        dst = (u8 *)aligned_dst;
    }
    while (len--) {
        *dst++ = *src++;
    }
    return dst0;
}
