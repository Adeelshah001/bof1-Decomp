/* identical to sub_08008B64 (matched), with its names changed by decompdecomp */
extern void sub_0800312C(s32, s32);
extern void sub_080379D4(s32);
extern u8 D_030023DC;
extern u16 D_0300168C;
extern u32 D_03001694;
extern u8 D_03002AB0[];
void sub_08010A90(void) {
    u8 *state;
    sub_0800312C(0x10, 6);
    state = D_03004830;
    state[0x2B]++;
}
void sub_08008B80(void) {
    if (D_030023DC != 1) {
        u8 *state;
        sub_080379D4(0xF0);
        state = D_03004830;
        state[0x2C] = 0x3C;
        state[0x2B]++;
    }
}
void sub_08008BB0(void) {
    u8 *state = D_03004830;
    s8 *value = (s8 *)(state + 0x2C);
    if (*value == 0) {
        *value = 0x7F;
        state[0x2B]++;
    }
}
void sub_08008BD0(void) {
    u8 *state = D_03004830;
    if ((s8)state[0x2C] == 0) {
        u32 value;
        u8 *event;
        D_0300168C &= 0xFFEF;
        value = 0x862A;
        state[0x2B]++;
        event = D_03002AB0;
        *(u32 *)(event + 0x94) = value;
        D_030023D0[0] = 2;
        D_03001694 |= 0x80;
    }
}
