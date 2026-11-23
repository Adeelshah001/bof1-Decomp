/* identical to sub_080A559C (matched), with its names changed by decompdecomp */
typedef struct {
    u32 out0[5];
    u32 out1[5];
    s32 args[4];
} Frame4;

typedef struct {
    u32 out[5];
    s32 args[2];
} Frame2;

void D_080A4BFC(void *src, void *dst);
s32 sub_080A53D8(void *a, void *b);
void D_080A4AB4(void *a);

s32 sub_080A5504(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Frame4 f;
    u32 flag1;
    u32 flag2;

    f.args[0] = arg0;
    f.args[1] = arg1;
    f.args[2] = arg2;
    f.args[3] = arg3;
    D_080A4BFC(&f.args[0], f.out0);
    D_080A4BFC(&f.args[2], f.out1);
    flag1 = f.out0[0] <= 1;
    if (flag1) {
        return 1;
    }
    flag2 = f.out1[0] <= 1;
    if (!flag2) {
        return sub_080A53D8(f.out0, f.out1);
    }
    return 1;
}

void sub_080A54D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Frame4 f;

    f.args[0] = arg0;
    f.args[1] = arg1;
    f.args[2] = arg2;
    f.args[3] = arg3;
    D_080A4BFC(&f.args[0], f.out0);
    D_080A4BFC(&f.args[2], f.out1);
    sub_080A53D8(f.out0, f.out1);
}

s32 sub_080A55E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Frame4 f;
    u32 flag1;
    u32 flag2;

    f.args[0] = arg0;
    f.args[1] = arg1;
    f.args[2] = arg2;
    f.args[3] = arg3;
    D_080A4BFC(&f.args[0], f.out0);
    D_080A4BFC(&f.args[2], f.out1);
    flag1 = f.out0[0] <= 1;
    if (flag1) {
        return -1;
    }
    flag2 = f.out1[0] <= 1;
    if (!flag2) {
        return sub_080A53D8(f.out0, f.out1);
    }
    return -1;
}

void sub_080A57BC(s32 arg0, s32 arg1) {
    Frame2 f;

    f.args[0] = arg0;
    f.args[1] = arg1;
    D_080A4BFC(&f.args[0], f.out);
    f.out[1] = (f.out[1] == 0);
    D_080A4AB4(f.out);
}
