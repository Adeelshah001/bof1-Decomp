extern u8 D_0202DBD0[];
extern s32 sub_0800409C(void *, u8, s32, s32);

void sub_08044608(u8 arg0) {
    u16 sum = 0;
    u16 i;
    u8 *base = D_0202DBD0;
    int arg0x2 = arg0 * 2;

    for (i = 2; i <= 0x4FA; i = (u16)(i + 1)) {
        sum = (u16)(sum + base[i]);
    }
    *(u16 *)base = sum;

    if (sub_0800409C(base, arg0, 0x500, 1) != 0) {
        while (1) {}
    }
    if (sub_0800409C(base, (u8)(arg0x2 + 1), 0x500, 1) != 0) {
        while (1) {}
    }
}
