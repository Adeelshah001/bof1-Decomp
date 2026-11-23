extern double D_080F3D6C[];
double sub_080A4FA8(double, double);
s32 sub_080A4A84(s32, s32, s32, s32);
s32 sub_080A4A54(s32, s32, s32, s32);
s32 sub_080A4940(s32, s32, s32, s32);

double sub_080A42C8(s32 n) {
    double v = 1.0;
    if (n <= 23)
        return D_080F3D6C[n];
    while (n > 0) {
        v = sub_080A4FA8(v, 10.0);
        n--;
    }
    return v;
}

s32 sub_080A4378(u8 *p, s32 a, s32 b) {
    s32 r = sub_080A4A84(*(s32 *)(p + 0x54), *(s16 *)(p + 0xE), a, b);
    if (r >= 0) {
        *(s32 *)(p + 0x50) += r;
    } else {
        u32 mask = ~0x1000;
        mask &= *(u16 *)(p + 0xC);
        *(u16 *)(p + 0xC) = mask;
    }
    return r;
}

s32 sub_080A43AC(u8 *p, s32 a, s32 b) {
    u32 mask = 0x100;
    u32 mask2;
    mask &= *(u16 *)(p + 0xC);
    if (mask)
        sub_080A4A54(*(s32 *)(p + 0x54), *(s16 *)(p + 0xE), 0, 2);
    mask2 = ~0x1000;
    *(u16 *)(p + 0xC) = mask2 & *(u16 *)(p + 0xC);
    return sub_080A4940(*(s32 *)(p + 0x54), *(s16 *)(p + 0xE), a, b);
}

s32 sub_080A443C(const char *s1, const char *s2) {
    unsigned long *a1;
    unsigned long *a2;
    if (((u32)s1 | (u32)s2) & 3) {
    } else {
        a1 = (unsigned long *)s1;
        a2 = (unsigned long *)s2;
        while (*a1 == *a2) {
            if ((*a1 - 0x01010101) & ~*a1 & 0x80808080)
                return 0;
            a1++;
            a2++;
        }
        s1 = (const char *)a1;
        s2 = (const char *)a2;
    }
    while (*s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    s1 = (const char *)(u32)*(unsigned char *)s1;
    s2 = (const char *)(u32)*(unsigned char *)s2;
    return (s32)s1 - (s32)s2;
}
