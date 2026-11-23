extern u8 D_03004620[];
extern u32 D_08100CB8[];
extern u32 D_08100CEC[];
extern u32 D_03004760[];
extern s32 sub_080A0770(s32 address);
extern u16 sub_0805B1F4(void);

s32 sub_08061A30(void) {
    return sub_080A0770(D_08100CB8[D_03004620[3] >> 1]);
}

s32 sub_08061B04(void) {
    u16 val = sub_0805B1F4();
    if (val == 3) {
        D_03004620[3] = (u8)(D_03004620[3] + 2);
    }
    return 0;
}

s32 sub_08061B24(void) {
    D_03004620[3] = 2;
    D_03004760[0x18] = 0x1C;
    return 0;
}

s32 sub_08061B3C(void) {
    return sub_080A0770(D_08100CEC[D_03004620[3] >> 1]);
}
