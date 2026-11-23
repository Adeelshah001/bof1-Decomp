extern u8 D_03002AB0[];
extern u8 D_0202DBD0[];
extern u8 D_030023E0[];

void sub_08073D80(void) {
    u8 *src = D_03002AB0;
    u8 *dst = D_0202DBD0;
    u8 *p23E0;
    u16 val;
    u8 val2;

    *(u16 *)(dst + 6) = *(u16 *)(src + 2);
    *(u16 *)(dst + 0xA) = *(u16 *)(src + 6);
    p23E0 = D_030023E0;
    val = *(u16 *)(p23E0 + 0xA4);
    *(u16 *)(dst + 0x284) = val;
    val2 = *(src + 0x61);
    *(dst + 0x2AC) = val2;
}

extern const u32 D_081511E8[];
void sub_0805B568(s32, s32, s32, s32, s32);

void sub_08073B18(s32 arg0, s32 arg1, s32 arg2) {
    arg0 |= 0x8000;
    sub_0805B568(arg0, arg1 | 0x8000, arg2 + 9, 0, D_081511E8[arg2] | 0x400);
}

extern const u8 D_0814B9A8[];

u16 sub_08073ADC(u16 arg0, u16 arg1, u8 *arg2) {
    const u8 *tbl = D_0814B9A8;
    u8 a = tbl[2];
    u8 b = tbl[3];
    u16 ret = arg0;
    u16 masked;

    if (ret != 0) {
        *arg2 = a;
    } else if ((masked = arg1 & 0xF0) != 0) {
        if (--(*arg2) == 0) {
            *arg2 = b;
            ret = masked;
        }
    }
    return ret;
}
