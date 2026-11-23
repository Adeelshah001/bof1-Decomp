typedef struct {
    u32 out0[4];
    u32 out1[4];
    s32 args[2];
} Frame2;

void sub_080A5908(void *, void *);
s32 sub_080A5DB0(u32 *, u32 *);
void sub_080A0664(u8 *, u8 *, s32);
s32 sub_080A06D4(s32, s32, s32);

s32 sub_080A5F94(s32 arg0, s32 arg1) {
    Frame2 f;
    u32 flag1, flag2;

    f.args[0] = arg0;
    f.args[1] = arg1;
    sub_080A5908(&f.args[0], f.out0);
    sub_080A5908(&f.args[1], f.out1);
    flag1 = f.out0[0] <= 1;
    if (flag1)
        return -1;
    flag2 = f.out1[0] <= 1;
    if (!flag2)
        return sub_080A5DB0(f.out0, f.out1);
    return -1;
}

s32 sub_080A0738(s32 arg0, s32 arg1, s32 arg2) {
    u8 i;
    s32 r;

    for (i = 0; i <= 2; i++) {
        sub_080A0664((u8 *)arg0, (u8 *)arg1, arg2);
        r = sub_080A06D4(arg0, arg1, arg2);
        if (r == 0)
            break;
    }
    return r;
}

u8 *sub_080A06A4(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 n;
    u8 a, b;

    n = arg2 - 1;
    if (arg2 != 0) {
        do {
            a = *arg1;
            b = *arg0;
            arg0++;
            arg1++;
            if (a != b)
                return arg1 - 1;
            n--;
        } while (n != -1);
    }
    return 0;
}

void sub_080A0664(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 n;

    *(vu16 *)0x04000204 = (*(vu16 *)0x04000204 & 0xFFFC) | 3;
    n = arg2 - 1;
    if (n != -1) {
        do {
            *arg1 = *arg0;
            arg0++;
            arg1++;
            n--;
        } while (n != -1);
    }
}
