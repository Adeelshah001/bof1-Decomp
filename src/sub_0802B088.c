extern u32 D_080F9808[];
void sub_080A0778(void *arg0, s32 arg1, s32 arg2);
void sub_0802AFAC(void *arg0, void *arg1);

void sub_0802AF8C(s32 arg0, void *arg1) {
    u32 *base;
    u16 v;
    base = D_080F9808;
    v = *(u16 *)((u8 *)arg1 + 0x3C);
    sub_080A0778(arg1, arg0, base[v >> 1]);
}

u8 sub_0802AE90(void *arg0, u8 arg1) {
    u8 result;
    u8 *a;
    u8 t;
    result = 0;
    a = (u8 *)arg0;
    t = (u8)((*(u16 *)(a + 2) + arg1) & 8);
    if (t == a[0x4E]) {
        result = 1;
        a[0x4E] ^= 8;
    }
    t = (u8)((*(u16 *)(a + 6) + arg1) & 8);
    if (t == a[0x4F]) {
        result += 2;
        a[0x4F] ^= 8;
    }
    return result;
}

void sub_0802B088(void *arg0, void *arg1) {
    u8 *a;
    u8 *b;
    u32 z;
    u8 v;
    a = (u8 *)arg0;
    b = (u8 *)arg1;
    z = 0;
    *(u16 *)(a + 0x12) = 4;
    *(u32 *)(a + 0x14) = z;
    a[0x49] = 1;
    sub_0802AFAC(arg1, arg0);
    v = b[0x4B];
    a[0x4B] = v;
    v = b[0x4A];
    a[0x4A] = v;
}
