extern void (*D_080F7E00[])(void);
extern void (*D_080F8124[])(void);
extern const u8 D_080F7DB8[];
extern s16 D_03004114;
extern u8 *D_03004154;

void sub_08023F94(const u8 *);
u8 *sub_0803ED98(void);

void sub_0801DA70(void) {
    void (**handlers)(void) = D_080F7E00;
    u8 *state = D_03004830;
    handlers[(s8)state[0x2A]]();
}

void sub_0801DAA0(void) {
    u8 *state;
    sub_08023F94(D_080F7DB8);
    if (D_03004114 == 0) {
        state = D_03004830;
        state[0x2C] = 0;
        state[0x2D] = 0;
        if ((s8)state[0x2B] < 0) {
            state[0x2A] = 0;
            state[0x2B] = 0;
        }
    }
    D_03004114 = 0;
}

void sub_0801DAE8(u16 arg0) {
    D_080F8124[(arg0 & 0xFF) >> 1]();
    D_03004114 = 0;
}

s32 sub_0801DB3C(u8 arg0) {
    D_03004154 = sub_0803ED98();
    if (D_03004154 != NULL) {
        D_03004154[0x3B] = arg0;
        D_03004154[0x3A] = 1;
        D_03004154[0x3C] = 0x15;
        return 0;
    }
    return 1;
}
