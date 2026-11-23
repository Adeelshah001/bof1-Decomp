
void sub_08037FC4(void *, s32);
void sub_080A0A68(void *, const void *, u32);
extern const u8 D_080A66C4[];
void sub_0805478C(void *arg0, u8 arg1) {
    u8 a[4] = {0, 1, 0, 0};
    u8 b[4];
    u8 *p = arg0;
    u8 value;
    sub_080A0A68(b, D_080A66C4, 4);
    p[0x6F] = arg1;
    value = a[p[0x6F]];
    p[0x40] = value;
    sub_08037FC4(arg0, b[p[0x6F]]);
}
extern u8 D_030023E0[];
void sub_08054840(u8 *p) {
    u8 *state = D_030023E0;
    if (*(u16 *)(state + 0xA4) == 0xCE) {
        u8 id = p[0x3B];
        if (id == 0x56 || id == 0x25 || id == 0x91) {
            u32 flags = p[0x6D];
            u32 mask = 4;
            p[0x6D] = mask | flags;
        }
    }
}
