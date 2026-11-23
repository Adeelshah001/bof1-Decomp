extern u16 D_03001670;
extern const u16 D_0822FA68[];
extern u16 *D_08150BE4;

void sub_08073964(void) {
    const u16 *src;
    u16 *dst;
    s32 i;
    s32 j;

    D_03001670 |= 0x80;
    src = D_0822FA68;
    dst = D_08150BE4 + 0x7E0;
    for (i = 0; i < 0xE0; i++) {
        for (j = 0; j < 0x10; j++) {
            *dst++ = *src++;
        }
    }
    D_03001670 &= ~0x80;
}
