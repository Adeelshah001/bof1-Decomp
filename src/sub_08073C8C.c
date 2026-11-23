extern u8 D_02004810[];
extern u8 gEntityPool[];

u32 sub_08073C8C(void) {
    vu32 *dma = (vu32 *)0x040000D4;
    dma[0] = (u32)D_02004810;
    dma[1] = (u32)gEntityPool;
    dma[2] = 0x800005B0;
    return dma[2];
}

extern u8 D_03002AB0[];
extern u8 D_0202DBD0[];
extern u8 D_030023E0[];

void sub_08073D80(void) {
    u8 *src = D_03002AB0;
    u8 *dst = D_0202DBD0;
    u8 *p23E0;

    *(u16 *)(dst + 6) = *(u16 *)(src + 2);
    *(u16 *)(dst + 0xA) = *(u16 *)(src + 6);
    p23E0 = D_030023E0;
    *(u16 *)(dst + 0x284) = *(u16 *)(p23E0 + 0xA4);
    *(dst + 0x2AC) = *(src + 0x61);
}

extern const u32 D_081511E8[];
void sub_0805B568(s32, s32, s32, s32, s32);

void sub_08073B18(s32 arg0, s32 arg1, s32 arg2) {
    sub_0805B568(arg0 | 0x8000, 0x8000 | arg1, arg2 + 9, 0, D_081511E8[arg2] | 0x400);
}

extern const u8 D_0814B9A8[];

u16 sub_08073ADC(u16 arg0, u16 arg1, u8 *arg2) {
    if (arg0 != 0) {
        *arg2 = D_0814B9A8[2];
    } else {
        u16 masked = arg1 & 0xF0;
        if (masked != 0 && --(*arg2) == 0) {
            *arg2 = D_0814B9A8[3];
            arg0 = masked;
        }
    }
    return arg0;
}
