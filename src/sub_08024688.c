void sub_0800312C(s32 arg0, s32 arg1);
void sub_08001F80(s32 arg0, s32 arg1, s32 arg2);
void sub_08004EA0(s32 arg0);
void sub_08040A74(s32 arg0);
s32 sub_08033420(void);
extern u8 D_030023DC;
extern u8 D_03002AB0[];
extern u8 D_03002510[];
extern u8 D_030033F0;
extern u8 D_03003F98;

void sub_08024688(void) {
    u8 *state;
    sub_0800312C(0x10, 0);
    state = D_03004830;
    state[0x40]++;
}
void sub_080246A4(void) {
    if (D_030023DC != 1) {
        u8 *state;
        sub_0800312C(0x10, 0x1C);
        sub_08001F80(0, 0, 0);
        sub_0800312C(0x10, 0x1C);
        sub_08001F80(0, 0, 0);
        sub_0800312C(0x10, 0x1C);
        state = D_03004830;
        state[0x40]++;
        sub_08004EA0(0x8230);
    }
}
void sub_08024648(void) {
    u8 *state;
    D_03003F98 |= 0x40;
    D_030033F0 |= 2;
    sub_08040A74(0xE);
    state = D_03002510;
    state[0x5E] = 0x80;
    state = D_03004830;
    state[0x40] = 2;
}
void sub_0802461C(void) {
    if ((u8)sub_08033420() != 0) {
        u8 *state = D_03002AB0;
        state[0xB8] &= 0xBF;
        state = D_03004830;
        state[0x40] = 5;
    }
}
