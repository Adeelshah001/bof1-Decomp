extern u8 D_030016E0[];
extern u8 D_030041A8[];
extern s32 D_03004758;
extern u32 D_080FF650[];

s32 sub_080A0774(s32 a, s32 b);

void sub_08057BB0(void) {
    s32 saved;
    u8 unk1;
    u8 *ptr;
    u8 b;
    s32 result;
    u32 func;

    saved = D_03004758;
    unk1 = D_030016E0[1];
    ptr = D_030016E0 + unk1 * 12;

    D_030041A8[0] &= 0xFE;

    b = ptr[0x0E];
    func = D_080FF650[(s32)(s8)b >> 1];

    result = sub_080A0774(saved, (s32)func);
    D_03004758 = result;

    if (result == 0) {
        D_03004758 = saved;
        ptr[8] = 0;
        D_030016E0[0] -= 1;
    }

    D_030041A8[0] |= 1;
}
