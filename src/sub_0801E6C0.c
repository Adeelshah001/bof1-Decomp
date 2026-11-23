/* identical to sub_08007AC8 (matched), with its names changed by decompdecomp */
extern void sub_0800312C(s32, s32);
extern void sub_0800511C(s32, s32);
extern u8 D_030023DC;
extern u32 D_03001694;
extern u8 D_03002AB0[];
void sub_0801E6C0(void) {
    u8 *state;
    sub_0800312C(0x10, 0);
    state = D_03004830;
    state[0x2B]++;
}
void sub_08007AE4(void) {
    if (D_030023DC == 0xFF) {
        u8 *state;
        D_03001694 &= ~0x80;
        sub_0800511C(6, 1);
        state = D_03004830;
        state[0x2B]++;
    }
}
void sub_08007B1C(void) {
    if (D_030023DC != 1) {
        u8 *state;
        sub_0800312C(0x10, 4);
        state = D_03004830;
        state[0x2B]++;
    }
}
void sub_08007B44(void) {
    if (D_030023DC != 1) {
        u8 *state = D_03004830;
        u8 *timer = state + 0x2C;
        u32 zero = 0;
        u32 value;
        u8 *event;
        *timer = 0x20;
        state[0x36] = zero;
        value = 0x8002;
        timer[-1]++;
        event = D_03002AB0;
        *(u32 *)(event + 0x94) = value;
        D_030023D0[0] = 2;
    }
}
