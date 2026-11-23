void D_080A4AB4(void *a);

void sub_080A57E4(s32 arg0, s32 arg1, s32 arg2, u64 arg3) {
    struct { u32 a, b, c; u64 d; } __attribute__((packed)) f;

    f.a = arg0;
    f.b = arg1;
    f.c = arg2;
    f.d = arg3;
    D_080A4AB4(&f);
}
