
void sub_0805478C(void *, u8);
void sub_08037FC4(void *, s32);
void sub_080A0AC8(void *, s32, u32);
void sub_080A0A68(void *, const void *, u32);
extern const u8 D_080A66C4[];
extern u8 D_030023E0[];
extern u8 D_08221D40[];
void sub_08054460(void *);
void sub_080A0774(void *, void (*)(void *));

void sub_080547DC(void *arg0, s32 arg1) {
    u8 n = arg1;
    if (!(0x20 & ((u8 *)arg0)[0x6D])) {
        sub_0805478C(arg0, n);
    }
}
void sub_0805478C(void *arg0, u8 arg1) {
    u8 a[4];
    u8 b[4];
    u8 *p = arg0;
    sub_080A0AC8(a, 0, 4);
    a[1] = 1;
    sub_080A0A68(b, D_080A66C4, 4);
    p[0x6F] = arg1;
    p[0x40] = a[p[0x6F]];
    sub_08037FC4(arg0, b[p[0x6F]]);
}
void sub_08054840(u8 *p) {
    u8 *state = D_030023E0;
    if (*(u16 *)(state + 0xA4) == 0xCE) {
        u8 id = p[0x3B];
        if (id == 0x56 || id == 0x25 || id == 0x91) {
            p[0x6D] = 4 | p[0x6D];
        }
    }
}
void sub_08054870(Entity *p) {
    u8 *script = (u8 *)p->unk64;
    p->unk68 = (u32)(D_08221D40 + ((script[7] | (script[8] << 8)) & 0x7FFF));
    p->unk78 = (u32)sub_08054460;
    sub_080A0774(p, sub_08054460);
}
