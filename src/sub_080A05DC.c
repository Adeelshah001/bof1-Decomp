/* sub_080A5F4C - ARM function */
extern void _080A5908(s32 *, u32 *);
extern s32 sub_080A5DB0(u32 *, u32 *);

s32 sub_080A5F4C(s32 arg0, s32 arg1) {
    u32 out0[4];
    u32 out1[4];
    s32 args[2];

    args[0] = arg0;
    args[1] = arg1;
    _080A5908(&args[0], out0);
    _080A5908(&args[1], out1);
    if (out0[0] <= 1) {
        return -1;
    }
    if (out1[0] <= 1) {
        return -1;
    }
    return sub_080A5DB0(out0, out1);
}

/* sub_080A05DC - Thumb function */
extern void sub_080A045C(s32, s32, s32, s32);
extern void sub_080A0588(void);

void sub_080A05DC(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *src = arg0;
    u8 *dst = arg1;
    s32 count = arg2 - 1;

    if (arg2 != 0) {
        do {
            *dst++ = *src++;
            count--;
        } while (count != -1);
    }
}

/* sub_080A0598 - Thumb function */
extern void sub_080A045C(s32, s32, s32, s32);
extern void sub_080A0588(void);

void sub_080A0598(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        sub_080A045C(0x080F3C10, arg0, arg1, arg2);
        sub_080A0588();
    }
    sub_080A045C(0x080F3C44, arg0, arg1, arg2);
}

/* sub_080A0588 - Thumb function */
extern void sub_080A04A0(s32);

void sub_080A0588(void) {
    sub_080A04A0(1);
}
