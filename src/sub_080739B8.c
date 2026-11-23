extern u16 D_03001670;
extern const u16 D_0822FA68[];
extern u16 *D_08150BE4;

s32 sub_080739B8(void) {
    u8 *p = D_03004830;
    return p[0x3B] & p[0x3D] & 0xC;
}

void sub_08073964(void) {
    const u16 *src;
    u16 *dst;
    s32 i;
    s32 j;

    D_03001670 |= 0x80;
    src = D_0822FA68;
    dst = D_08150BE4 + 0x7E0;
    i = 0;
    do {
        j = 0xF;
        do {
            *dst++ = *src++;
            j--;
        } while (j >= 0);
        i++;
    } while (i <= 0xDF);
    D_03001670 &= ~0x80;
}
