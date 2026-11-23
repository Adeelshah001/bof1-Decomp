/* identical to sub_0804FA14 (matched), with its names changed by decompdecomp */

extern void (*D_080FD684[])(u8 *);
void sub_08037FC4(void *, s32);
void sub_0804FF1C(void *);
void sub_0804F298(void *);
void sub_0804FCD8(void *, s32);
void sub_08050058(void *);
void sub_0803EE6C(void *);

void sub_080503D4(u8 *p) {
    D_080FD684[p[0xC9]](p);
}
void sub_0804FA40(u8 *p) {
    *(void (**)(void *))(p + 0x64) = sub_0804FF1C;
    p[0x3D] = 2;
    p[0x41] = 8;
    *(u16 *)(p + 0x1C) = 0x1A0;
    *(u16 *)(p + 0x2A) = 0x196;
    sub_08037FC4(p, 0);
}
void sub_0804F9D4(u8 *p) {
    sub_0804FCD8(p, 0);
    sub_0804FCD8(p, 1);
    sub_0804FCD8(p, 2);
    sub_0804FCD8(p, 3);
    sub_0804FCD8(p, 4);
    *(void (**)(void *))(p + 0x64) = sub_0804F298;
    *(u16 *)(p + 0x54) = 0;
}
void sub_0804FA7C(u8 *p) {
    u8 *parent = *(u8 **)(p + 0xD4);
    u8 n;
    p[0x54] = 7;
    *(u16 *)(p + 2) = *(u16 *)(parent + 2);
    *(u16 *)(p + 6) = *(u16 *)(parent + 6);
    do {
        sub_08050058(p);
        n = p[0x54] - 1;
        p[0x54] = n;
    } while (!(n & 0x80));
    sub_0803EE6C(p);
}
