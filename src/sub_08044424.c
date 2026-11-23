extern u16 D_02019FC0[];
extern const u8 D_0814CBB8[];
extern const u8 D_0814CC08[];
extern const u8 D_0814CC0C[];
extern const u8 D_0814CC10[];
extern const u16 D_0814CC16[];

void sub_0805AE70(s32, s32, const u8 *);

void sub_08044424(void) {
    u16 *dst = D_02019FC0;
    s32 i;

    for (i = 0; i <= 0x44; i++) {
        dst[D_0814CC16[i]] = D_0814CBB8[i] + 0x140;
    }
    sub_0805AE70(0x218, 0, D_0814CC08 + 1);
    sub_0805AE70(0x258, 0, D_0814CC0C + 1);
    sub_0805AE70(0x298, 0, D_0814CC10 + 1);
}
