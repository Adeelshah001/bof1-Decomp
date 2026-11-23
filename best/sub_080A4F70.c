typedef struct {
    u32 out0[5];
    u32 out1[5];
    u32 out2[5];
    s32 args[4];
} Frame6;

void D_080A4BFC(void *src, void *dst);
void *D_080A4CD4(void *a, void *b, void *c);
void D_080A4AB4(void *a);
void sub_080A6158(u32 a, u32 b, u32 c, u32 d);

void sub_080A4F70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Frame6 f;
    u32 *out1;

    f.args[0] = arg0;
    f.args[1] = arg1;
    f.args[2] = arg2;
    f.args[3] = arg3;
    D_080A4BFC(&f.args[0], f.out0);
    D_080A4BFC(&f.args[2], out1 = f.out1);
    out1[1] = out1[1] ^ 1;
    D_080A4AB4(D_080A4CD4(f.out0, out1, f.out2));
}

void sub_080A580C(s32 arg0, s32 arg1) {
    u32 out[5];
    s32 args[2];
    u32 r;

    args[0] = arg0;
    args[1] = arg1;
    D_080A4BFC(&args[0], out);
    r = (out[4] << 2) | (out[3] >> 30);
    if (out[3] & 0x3FFFFFFF)
        r |= 1;
    sub_080A6158(out[0], out[1], out[2], r);
}

s32 sub_080A5DB0(void *a, void *b);

s32 sub_080A5F94(s32 arg0, s32 arg1) {
    u32 out0[4];
    u32 out1[4];
    s32 args[2];
    u32 flag1, flag2;

    args[0] = arg0;
    args[1] = arg1;
    D_080A4BFC(&args[0], out0);
    D_080A4BFC(&args[1], out1);
    flag1 = out0[0] <= 1;
    if (flag1)
        return -1;
    flag2 = out1[0] <= 1;
    if (!flag2)
        return sub_080A5DB0(out0, out1);
    return -1;
}
