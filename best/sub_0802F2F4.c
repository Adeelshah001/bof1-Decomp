typedef struct { u8 pad00[0xA4]; u16 unkA4; } StateBlock;
extern u8 D_030023E0[];
extern u8 D_0300248C[];
extern u8 D_03003418[];
extern u8 D_030043DC[];
void sub_08032AB0(u8 arg0);

s32 sub_0802F2AC(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 b;
    u8 nb;
    u32 result;
    u16 w;

    b = p[0xBA];
    result = b & 1;
    w = ((StateBlock *)D_030023E0)->unkA4;
    if (w != 0xFA && w != 0xEB) {
        nb = b & 0xED;
        p[0xBA] = nb & 0xFE;
        p[0x3A] &= 0x7F;
        p[0x41] &= 0x0F;
    }
    return result;
}

s32 sub_0802F2F4(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 b3a;
    u8 bBA;
    u32 result;
    u16 w;

    result = 0;
    w = ((StateBlock *)D_030023E0)->unkA4;
    if (w == 0x104) return 0;
    b3a = p[0x3A];
    p[0x3A] = 0x80 | b3a;
    bBA = p[0xBA] & 0xFD;
    p[0xBA] = bBA;
    if ((bBA & 1) == 0) result = 1;
    p[0xBA] = bBA | 1;
    return result;
}

s32 sub_0802EF4C(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 t;

    t = p[0x54] - 1;
    p[0x54] = t;
    if (t == 0) {
        p[0xB8] |= 8;
        p[0xBA] &= 0xFE;
        D_03003418[0] = D_0300248C[0];
        p[0x54] = 0x20;
        p[0x4D] = 6;
    }
    return 0;
}

s32 sub_0802EF00(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 t;
    u8 t2;

    t = p[0x54] - 1;
    p[0x54] = t;
    if (t == 0) {
        p[0x54] = 4;
        t2 = p[0x55] + 1;
        p[0x55] = t2;
        if (t2 != 0x20) {
            sub_08032AB0(p[0x55]);
            D_030043DC[0] = 1;
        } else {
            p[0x4D] = 4;
            p[0x54] = 4;
        }
    }
    return 0;
}
