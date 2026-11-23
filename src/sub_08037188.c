extern u8 D_030033D8;
extern u8 D_030023E0[];
void sub_08028400(void);
void sub_0802C248(s32, u16);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, void (*)(void), void *);

s32 sub_080371C4(void) {
    u8 *p;
    D_030033D8 = 0;
    p = D_030023E0;
    sub_0802C248(1, *(u16 *)(p + 0xA4));
    sub_0800312C(0x10, 0);
    sub_08001F80(1, sub_08028400, p);
    return 1;
}

s32 sub_08037188(void) {
    u8 *p;
    D_030033D8 = 0;
    p = D_030023E0;
    sub_0802C248(0, *(u16 *)(p + 0xA4));
    sub_0800312C(0x10, 0);
    sub_08001F80(1, sub_08028400, p);
    return 1;
}
