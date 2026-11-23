extern void (*D_080F7E74[])(void);
extern void (*D_080F7ED8[])(void);

extern u8 sub_0805D704(u16 arg0, u8 *arg1);
extern void sub_08004EA0(s32 arg0);
extern u16 D_0202DBD0[];
extern void sub_080017EC(s32 arg0);
extern void sub_0801270C(void);
extern u8 sub_0801DD60(u16 arg0, s32 arg1, s32 arg2);

void sub_0801DE18(void) {
    if (((s8 *)D_03004830)[0x2B] >= 0) {
        D_080F7E74[(s8)D_03004830[0x2B]]();
    }
}

void sub_0801DE78(void) {
    D_03004830[0x2D] = 0;
    if (sub_0801DD60(0x161, 0x8735, 0x851A)) {
        sub_080017EC(0xDA);
    }
    sub_0801270C();
}

u8 sub_0801DD60(u16 arg0, s32 arg1, s32 arg2) {
    u8 sp0;

    if (sub_0805D704(arg0, &sp0) == 0) {
        sub_08004EA0(arg1);
        return 0;
    }
    D_0202DBD0[0x102 + sp0] = arg0;
    sub_08004EA0(arg2);
    return 1;
}

void sub_0801DEE0(void) {
    s8 mode = ((s8 *)D_03004830)[0x2B];

    if (!(mode & 0x80)) {
        D_080F7ED8[mode]();
    }
}
