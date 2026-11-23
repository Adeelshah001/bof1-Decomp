/* identical to sub_080A5EBC (matched), with its names changed by decompdecomp */
typedef struct {
    u32 type;
    u32 unk4;
    u32 unk8;
    u32 unkC;
} Value;

s32 sub_080A5DB0(Value *arg0, Value *arg1);
void sub_080A5908(u32 *arg0, Value *arg1);

s32 sub_080A5F04(u32 arg0, u32 arg1)
{
    u32 src0;
    u32 src1;
    Value va;
    Value vb;
    s32 flag0;
    s32 flag1;

    src0 = arg0;
    src1 = arg1;
    sub_080A5908(&src0, &va);
    sub_080A5908(&src1, &vb);
    flag0 = 0;
    if (va.type <= 1) {
        flag0 = 1;
    }
    if (flag0 != 0) {
        return 1;
    }
    flag1 = 0;
    if (vb.type <= 1) {
        flag1 = 1;
    }
    if (flag1 == 0) {
        return sub_080A5DB0(&va, &vb);
    }
    return 1;
}
