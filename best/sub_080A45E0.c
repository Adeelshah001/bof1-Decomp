s32 sub_080A45CC(s32);

s32 sub_080A45E0(s32 arg0) {
    if (arg0 == -1) {
        return sub_080A45CC(arg0);
    }
    return arg0;
}

extern s16 **D_08318774;
extern s32 D_03001144;
extern s32 D_03001148;
extern s32 D_0300114C;

s32 sub_080A44FC(s32 fd) {
    s16 **reent = D_08318774;
    if (fd == reent[1][7]) {
        return D_03001144;
    }
    if (fd == reent[2][7]) {
        return D_03001148;
    }
    if (fd == reent[3][7]) {
        return D_0300114C;
    }
    return fd - 0x20;
}
