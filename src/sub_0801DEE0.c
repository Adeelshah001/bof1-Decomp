extern void (*D_080F7E74[])(void);
extern void (*D_080F7ED8[])(void);

extern u8 sub_0805D704(u16 arg0, u8 *arg1);
extern void sub_08004EA0(s32 arg0);
extern u16 D_0202DBD0[][2];

void sub_0801DE18(void) {
    u8 *base = D_03004830;

    if (*(s8 *)(base + 0x2B) >= 0) {
        D_080F7E74[(s8)*(base + 0x2B)]();
    }
}

u8 sub_0801DD60(u16 arg0, s32 arg1, s32 arg2) {
    u8 sp0;
    s32 result;

    if (sub_0805D704(arg0, &sp0) == 0) {
        sub_08004EA0(arg1);
        result = 0;
    } else {
        D_0202DBD0[0x81][sp0] = arg0;
        sub_08004EA0(arg2);
        result = 1;
    }
    return result;
}

void sub_0801DEE0(void) {
    u8 *base = D_03004830;
    s8 mode = *(s8 *)(base + 0x2B);

    if (!(mode & 0x80)) {
        D_080F7ED8[mode]();
    }
}
