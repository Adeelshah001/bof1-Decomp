void sub_0800B5F4(s32 arg0);
void sub_08007504(void);
void sub_08007588(s32 arg0, s32 arg1);

void sub_08008144(void) {
    u8 *base;
    sub_0800B5F4(0x2B8);
    base = D_03004830;
    base[0x2C] = 16;
    ++base[0x2B];
}

void sub_08008168(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);
    if (*timer == 0) {
        sub_0800B5F4(0x2B0);
        *timer = 8;
        ++base[0x2B];
    }
}

void sub_0800810C(void) {
    u8 *state = (u8 *)D_03004830;
    s8 v = state[0x2C];
    if (v == 0) {
        sub_08007588(0x248, 0x21AC);
        sub_08007504();
        state[0x2B]++;
    }
}

void sub_08008198(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);
    if (*timer == 0) {
        sub_0800B5F4(0x2A8);
        *timer = 8;
        ++base[0x2B];
    }
}
