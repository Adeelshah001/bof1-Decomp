extern u8 D_03002AB0[];
extern u8 D_03002510[];
extern u8 D_030033F0[];
extern u8 gEntityPool[];

void sub_08019720(void);
void sub_0800518C(s32, s32, s32);
void sub_08053B54(void);

void sub_08025178(void) {
    u8 *base;
    sub_08019720();
    base = D_03004830;
    base[0x41] = 0x78;
    base[0x40]++;
}

void sub_08025198(void) {
    sub_0800518C(0x1B2, 0x188, (s32)0xFFFFF5BC);
    D_03002AB0[0xB8] |= 0x80;
    sub_08019720();
    D_03004830[0x40]++;
}

void sub_08025124(void) {
    D_030033F0[0] &= 0x7F;
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
}

void sub_080251D4(void) {
    u8 *base = D_03002510;
    u8 *pool = gEntityPool;
    u8 *state;

    *(void (**)(void))(base + 0x184) = sub_08053B54;
    *(void (**)(void))(base + 0x214) = sub_08053B54;
    *(void (**)(void))(pool + 0x64) = sub_08053B54;
    *(void (**)(void))(pool + 0x144) = sub_08053B54;
    *(u16 *)(base + 6) = 0xF52C;
    state = D_03004830;
    state[0x41] = 0x80;
    state[0x40]++;
}
