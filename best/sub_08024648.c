extern u8 D_03002AB0[];
extern u8 D_03002510[];
extern u8 D_030033F0;
extern u8 D_03003F98;
void sub_08040A74(s32 arg0);
s32 sub_08033420(void);
void sub_08024648(void) {
    u8 *object;
    u8 *state;
    D_03003F98 |= 0x40;
    D_030033F0 |= 2;
    sub_08040A74(0xE);
    object = D_03002510;
    object[0x5E] = 0x80;
    state = D_03004830;
    state[0x40] = 2;
}
void sub_0802461C(void) {
    if ((u8)sub_08033420() != 0) {
        u8 *event = D_03002AB0;
        u8 *state;
        event[0xB8] &= 0xBF;
        state = D_03004830;
        state[0x40] = 5;
    }
}
