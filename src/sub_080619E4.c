extern u8 D_03004620[];
extern u32 D_08100C94[];
extern u8 D_030045B0[];
extern u8 D_03004760[];
extern u8 D_0200BA61[];

extern u16 sub_0805B1F4(void);
extern void sub_0805CA84(void);
extern void sub_08061FBC(s32);
extern void sub_08068984(s32, s32, s32, s32, void *);
extern s32 sub_0805CED4(void);
extern void sub_0805D5E4(s32, u8 *, s32);
extern void sub_08061624(void);
extern s32 sub_0805CC60(s32);
extern u8 sub_0805D584(s32, u8 *);
extern void sub_08059D68(s32);

void sub_08061948(void) {
    ((void (*)(void))D_08100C94[D_03004620[3] >> 1])();
}

s32 sub_080618C4(void) {
    if (sub_0805B1F4() != 0) {
        return 0;
    }
    sub_0805CA84();
    return 1;
}

s32 sub_080619E4(void) {
    u8 buf[12];

    sub_08061FBC(4);
    sub_08068984(2, 1, 6, 0, (void *)0x08100A84);
    sub_0805D5E4(sub_0805CED4(), buf, 2);
    buf[2] = 0;
    sub_08068984(2, 8, 8, 0, buf);
    sub_08061624();
    return 0;
}

s32 sub_08061880(void) {
    u16 v = sub_0805CC60(*(u16 *)(D_030045B0 + 0x34));
    *(u32 *)(D_03004760 + 0x1C) = v;
    D_0200BA61[-1] = sub_0805D584(v, D_0200BA61);
    sub_08059D68(*(u16 *)(D_030045B0 + 0x38));
    D_03004620[3] += 2;
    return 0;
}
