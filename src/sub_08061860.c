extern u16 sub_0805B1F4(void);
extern void sub_0805CA84(void);
extern s32 sub_0805CC60(s32);
extern u8 sub_0805D584(s32, u8 *);
extern void sub_08059D68(s32);
extern s32 sub_0805A9FC(void);
extern void sub_0805B4CC(void);
extern u8 D_03004620[];
extern u8 D_030045B0[];
extern u8 D_03004760[];
extern u8 D_0200BA61[];

s32 sub_080618C4(void) {
    s32 result;
    if (sub_0805B1F4() != 0) {
        result = 0;
    } else {
        sub_0805CA84();
        result = 1;
    }
    return result;
}
s32 sub_08061880(void) {
    u8 *base = D_030045B0;
    u16 v = sub_0805CC60(*(u16 *)(base + 0x34));
    u8 *state = D_03004760;
    u8 *out;
    *(u32 *)(state + 0x1C) = v;
    out = D_0200BA61;
    out[-1] = sub_0805D584(v, out);
    sub_08059D68(*(u16 *)(base + 0x38));
    D_03004620[3] += 2;
    return 0;
}
s32 sub_08061860(void) {
    if (sub_0805A9FC() != 0) {
        u8 *p;
        u32 state;
        sub_0805B4CC();
        state = 14;
        p = D_03004620;
        p[3] = state;
    }
    return 0;
}
