extern u8 D_030033D8;
extern s32 D_0300458C;
extern u8 D_030023E0[];
void sub_08028400(void);
void sub_0802C0D0(s32, u16);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, void (*)(void), void *);

s32 sub_08037144(void) {
    s32 tmp;
    u8 *p;
    D_030033D8 = 0;
    tmp = D_0300458C;
    p = D_030023E0;
    sub_0802C0D0(tmp, *(u16 *)(p + 0xA4));
    sub_0800312C(0x10, 0);
    sub_08001F80(1, sub_08028400, p);
    return 1;
}

extern u8 D_03002AB0[];

s32 sub_08037118(void) {
    u8 *p = D_03002AB0;
    s32 ret = 1;
    if (p[0x3E] == 0xB || (p[0xBA] & 1)) {
        ret = 0;
    }
    return ret;
}

s32 sub_080370F0(void) {
    u8 *p = D_03002AB0;
    s32 ret = 1;
    if (p[0x3E] == 0xB || (p[0xBA] & 0x10)) {
        ret = 0;
    }
    return ret;
}

s32 sub_080370D0(void) {
    return (D_03002AB0[0xBA] & 0x11) != 0;
}
