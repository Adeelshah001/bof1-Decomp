extern void sub_08036C50(u32, void *);
extern u8 D_030009A0[];
extern u8 D_030009A8[];
extern u8 D_030009B2[];

s32 sub_08046CAC(void *arg0) {
    u8 *p = (u8 *)arg0;
    u32 zero;
    u32 temp_r3;
    u16 *dst1;
    u16 src1;

    sub_08036C50(0x030023E0, arg0);
    dst1 = (u16 *)(p + 0x46);
    src1 = *(u16 *)(p + 0x02);
    zero = 0;
    *dst1 = src1;
    *(u16 *)(p + 0x4A) = *(u16 *)(p + 0x2C);
    temp_r3 = p[0x3A] & 0xBF;
    p[0x3A] = (u8)temp_r3;
    if (p[0x3B] != 3 && p[0x3E] == 4) {
        u32 tmp = temp_r3 | 0x40;
        p[0x3A] = (u8)tmp;
        *(u32 *)(p + 0x44) = zero;
        *(u32 *)(p + 0x48) = zero;
    }
    return 0;
}

s32 sub_0803F71C(u16 *arg0) {
    D_030009A0[0] = D_030009A8[D_030009B2[0]];
    D_030009B2[0] = D_030009B2[0] - 1;
    (*arg0)++;
    return 0;
}

s32 sub_0803F6DC(u16 *arg0) {
    u8 var_r0;
    u8 *table = D_030009A8;
    u8 index = D_030009B2[0];

    if (0x80 & table[index]) {
        var_r0 = 0xFF;
    } else {
        var_r0 = ~D_030009A0[0];
    }
    D_030009A0[0] = var_r0;
    (*arg0)++;
    return 0;
}
