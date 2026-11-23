s32 sub_08069438(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
ret_1:
        return 1;
    }
    if (arg1 == 1 && (arg2 & 3) != 1) {
        goto ret_1;
    }
    return 0;
}
