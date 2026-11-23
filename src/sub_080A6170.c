s32 sub_080A5850(s32 *args);
void sub_080A5908(u32 *arg0, u32 *arg1);
s32 sub_080A57E4(u32 a0, u32 a1, u32 a2, u64 a3);

void sub_080A6158(s32 a, s32 b, s32 c, s32 d)
{
    s32 args[4];
    args[0] = a;
    args[1] = b;
    args[2] = c;
    args[3] = d;
    sub_080A5850(args);
}

s32 sub_080A6170(u32 arg0)
{
    u32 buf[4];
    u32 arg;

    arg = arg0;
    sub_080A5908(&arg, buf);
    return sub_080A57E4(buf[0], buf[1], buf[2], (u64)buf[3] << 30);
}
