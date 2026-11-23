typedef struct {
    u32 out[4];
    s32 arg;
} Frame1;

typedef struct {
    u32 out0[4];
    u32 out1[4];
    u32 out2[4];
    s32 args[2];
} FrameB;

void D_080A5908(void *src, void *dst);
void D_080A5984(void *a, void *b, void *c);
void sub_080A5850(void *out);

void sub_080A6134(s32 arg0) {
    Frame1 f;

    f.arg = arg0;
    D_080A5908(&f.arg, f.out);
    f.out[1] = (f.out[1] == 0);
    sub_080A5850(f.out);
}

s64 sub_080A6240(s64 arg0) {
    return -arg0;
}

void sub_080A5B2C(s32 arg0, s32 arg1) {
    FrameB f;

    f.args[0] = arg0;
    f.args[1] = arg1;
    D_080A5908(&f.args[0], f.out0);
    D_080A5908(&f.args[1], f.out1);
    f.out1[1] = f.out1[1] ^ 1;
    D_080A5984(f.out0, f.out1, f.out2);
    sub_080A5850(f.out0);
}

void sub_080A5B00(s32 arg0, s32 arg1) {
    FrameB f;

    f.args[0] = arg0;
    f.args[1] = arg1;
    D_080A5908(&f.args[0], f.out0);
    D_080A5908(&f.args[1], f.out1);
    D_080A5984(f.out0, f.out1, f.out2);
    sub_080A5850(f.out0);
}
