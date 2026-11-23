extern u32 D_030010F0;
extern const u16 D_082D5A04[];
extern u16 D_050003C0[];
extern u16 D_03001670;
extern const u16 D_0822FA68[];
extern u16 *D_08150BE4;

s32 sub_080739B8(void) {
    u8 *p = D_03004830;
    return p[0x3D] & p[0x3B] & 0xC;
}

void sub_080739D0(s32 arg0) {
    switch (arg0) {
    case 0:
        D_030010F0 |= 1;
        break;
    case 1:
        D_030010F0 |= 2;
        break;
    }
}

void sub_080739F8(void) {
    const u16 *src = D_082D5A04;
    u16 *dst = D_050003C0;
    s32 i;
    for (i = 0xF; i >= 0; i--) {
        *dst++ = *src++;
    }
}

void sub_08073964(void) {
    const u16 *src;
    u16 *dst;
    s32 i;
    s32 j;

    D_03001670 |= 0x80;
    src = D_0822FA68;
    dst = D_08150BE4 + 0x7E0;
    for (i = 0; i <= 0xDF; i++) {
        for (j = 0xF; j >= 0; j--) {
            *dst++ = *src++;
        }
    }
    D_03001670 &= ~0x80;
}
