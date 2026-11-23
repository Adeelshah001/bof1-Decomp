extern void (*D_080F8124[])(void);
extern s16 D_03004114;
extern u8 *D_03004154;

u8 *sub_0803ED98(void);

void sub_0801DAE8(s32 arg0) {
    void (**handlers)(void) = D_080F8124;
    u16 value = arg0;

    handlers[(value & 0xFF) >> 1]();
    D_03004114 = 0;
}

s32 sub_0801DB3C(u8 arg0) {
    s32 ret;
    D_03004154 = sub_0803ED98();
    if (D_03004154 != NULL) {
        D_03004154[0x3B] = arg0;
        D_03004154[0x3A] = 1;
        D_03004154[0x3C] = 0x15;
        ret = 0;
    } else {
        ret = 1;
    }
    return ret;
}
