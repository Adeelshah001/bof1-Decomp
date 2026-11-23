typedef struct {
    u32 out0[4];
    u32 out1[4];
    u32 out2[4];
    s32 args[2];
} FrameB;

typedef union {
    s64 d;
    struct {
        u32 lo;
        u32 hi;
    } w;
} U64;

void D_080A5908(void *src, void *dst);
void *D_080A5984(void *a, void *b, void *c);
void sub_080A5850(void *out);

s64 sub_080A6240(s64 arg0) {
    U64 u;

    u.d = arg0;
    u.w.lo = -u.w.lo;
    u.w.hi = -u.w.hi;
    if (u.w.lo != 0) {
        u.w.hi--;
    }
    return u.d;
}

void sub_080A5B2C(s32 arg0, s32 arg1) {
    FrameB f;
    u32 *out1 = f.out1;

    f.args[0] = arg0;
    f.args[1] = arg1;
    D_080A5908(&f.args[0], f.out0);
    D_080A5908(&f.args[1], out1);
    out1[1] = out1[1] ^ 1;
    sub_080A5850(D_080A5984(f.out0, out1, f.out2));
}

void sub_080A5B00(s32 arg0, s32 arg1) {
    FrameB f;

    f.args[0] = arg0;
    f.args[1] = arg1;
    D_080A5908(&f.args[0], f.out0);
    D_080A5908(&f.args[1], f.out1);
    sub_080A5850(D_080A5984(f.out0, f.out1, f.out2));
}
