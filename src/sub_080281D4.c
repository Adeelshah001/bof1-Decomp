extern s32 sub_08027C38(u16, u16*, u16*, u8*);
extern void sub_08028304(u16*, u16*, u8, s8*);

s32 sub_080281D4(void *unused, u16 *arg1, u16 *arg2, s8 *arg3) {
    u8 stack_byte = 0;
    s32 result = sub_08027C38(0, arg1, arg2, &stack_byte);

    if ((result << 24) != 0) {
        sub_08028304(arg1, arg2, stack_byte, arg3);
        return 1;
    }
    return 0;
}
