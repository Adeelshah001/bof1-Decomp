extern void sub_080A0A68(void *, void *, s32);
extern u8 D_020211A0[];
extern u8 D_020213A0[];
extern u8 D_081A0E7C[];

void sub_08083AC8(s32 arg0) {
    void *src = D_020211A0;
    s32 off = (s32)D_081A0E7C;
    u8 *dst = (u8 *)arg0 + off;
    sub_080A0A68(src, dst, 0x20);
    sub_080A0A68(D_020213A0, dst, 0x20);
}
