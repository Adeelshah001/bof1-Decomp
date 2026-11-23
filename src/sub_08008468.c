void sub_0800312C(s32 arg0, s32 arg1);
void sub_08001F80(s32 arg0, s32 arg1, s32 arg2);
void sub_0803AF58(s32 arg0, s32 arg1);
void sub_08003378(s32 arg0);
extern u8 D_030023DC;

void sub_0800844C(void) {
    if (D_030023DC != 1) {
        u8 *state;
        state = D_03004830;
        state[0x2B]++;
    }
}

void sub_08008430(void) {
    u8 *state;
    sub_0800312C(0x10, 0x10);
    state = D_03004830;
    state[0x2B]++;
}

void sub_08008468(void) {
    u8 *state;
    sub_0800312C(0x10, 6);
    sub_08001F80(0, 0, 0);
    sub_0803AF58(0xE0, 0xFFFF);
    sub_0803AF58(0xEE, 0xFFFF);
    sub_0803AF58(0xE7, 0xFFFF);
    state = D_03004830;
    state[0x2B]++;
}

void sub_080084B0(void) {
    u8 *state;
    sub_0800312C(0x10, 8);
    sub_08001F80(0, 0, 0);
    sub_08003378(0x20);
    state = D_03004830;
    state[0x2C] = 0x40;
    state[0x2B]++;
}
