extern u16 D_030040E0[];
void sub_08007504(void);
void sub_080076C4(s32);
void sub_08007588(s32, s32);

void func_080082B8(void) {
}

void sub_08008320(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer == 0) {
        sub_08007504();
        sub_080076C4(0x21BC);
        *timer = 0x10;
        base[0x2B]++;
    }
}

void sub_08008364(void) {
    u8 *state;

    if (D_030040E0[0] <= 0x20BE) {
        state = D_03004830;
        state[0x2C] = 0x7F;
        state[0x2B]++;
    }
}

void sub_080080D4(void) {
    s8 *state = (s8 *)D_03004830;

    if (state[0x2C] == 0) {
        state[0x2C] = 0x57;
        sub_08007588(0x258, 0x21AC);
        state[0x2B]++;
    }
}
