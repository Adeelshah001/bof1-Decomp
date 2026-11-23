typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State2AB0;

extern u8 D_030033F0;
extern u16 D_03004114;

s32 sub_08027A74(State2AB0 *arg0) {
    D_03004114 = 0;
    if (D_030033F0 != 0 && (D_030033F0 & 1)) {
        arg0->unkB8 |= 4;
        D_03004830[0x40] = 7;
        arg0->unkB8 |= 0x40;
    }
    return 0;
}

s32 sub_08027AB4(State2AB0 *arg0) {
    D_03004114 = 0;
    if ((D_030033F0 & 2) == 0) {
        arg0->unkB8 |= 4;
        D_03004830[0x40] = 1;
    }
    return 0;
}
