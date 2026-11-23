extern const u8 D_081A0E7C[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
void sub_080A0210(const void *src, void *dst, u32 control);

void sub_080292A8(u16 arg0, u16 arg1, u8 arg2) {
    sub_080A0210(D_081A0E7C + arg1, D_02020FC0 + arg0, (u32)(arg2 * 32) >> 2);
    sub_080A0210(D_081A0E7C + arg1, D_020211C0 + arg0, (u32)(arg2 * 32) >> 2);
}
