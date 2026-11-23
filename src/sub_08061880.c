extern u8 D_03004620[];
extern u8 D_030045B0[];
extern u8 D_03004760[];
extern u8 D_0200BA61[];
extern s32 sub_0805CC60(s32);
extern u8 sub_0805D584(s32, u8 *);
extern void sub_08059D68(s32);
s32 sub_08061880(void) {
    u8 *base = D_030045B0;
    s32 v = sub_0805CC60(*(u16 *)(base + 0x34));
    u8 *state = D_03004760;
    u8 *out;
    v = (u16)v;
    *(u32 *)(state + 0x1C) = v;
    out = D_0200BA61;
    out[-1] = sub_0805D584(v, out);
    sub_08059D68(*(u16 *)(base + 0x38));
    D_03004620[3] += 2;
    return 0;
}
