extern u8 D_03004620[];
extern u32 D_08100C94[];
extern u8 D_030045B0[];
extern u8 D_03004760[];
extern u8 D_0200BA61[];
extern u16 sub_0805B1F4(void);
extern void sub_0805CA84(void);
extern s32 sub_0805CC60(s32);
extern u8 sub_0805D584(s32, u8 *);
extern void sub_08059D68(s32);
extern s32 sub_0805A9FC(void);
extern void sub_0805B4CC(void);

s32 sub_08061948(void) {
    return ((s32 (*)(void))D_08100C94[D_03004620[3] >> 1])();
}

s32 sub_080618C4(void) {
    if (sub_0805B1F4() != 0) return 0;
    sub_0805CA84();
    return 1;
}

s32 sub_08061880(void) {
    u8 *base = D_030045B0;
    u8 *out = D_0200BA61;
    u8 *state = D_03004760;
    u16 v = sub_0805CC60(*(u16 *)(base + 0x34));
    *(u32 *)(state + 0x1C) = v;
    out[-1] = sub_0805D584(v, out);
    sub_08059D68(*(u16 *)(base + 0x38));
    D_03004620[3] += 2;
    return 0;
}

s32 sub_08061860(void) {
    if (sub_0805A9FC() != 0) {
        sub_0805B4CC();
        D_03004620[3] = 14;
    }
    return 0;
}
