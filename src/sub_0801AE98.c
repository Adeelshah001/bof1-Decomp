void sub_08030AD8(s32);
void sub_08019720(void);
void sub_080017EC(s32);
void sub_0807E3CC(u8 *, u32);
void sub_08004EA0(s32);
void sub_08019DA0(void);

void sub_0801AE98(void) {
    sub_08030AD8(0x22);
    D_03004830[0x2B]++;
}

void sub_0801AEB4(void) {
    sub_08019720();
    sub_080017EC(0xA6);
    D_03004830[0x2B]++;
}

void sub_0801AE58(void) {
    u8 *base = (u8 *)0x03002AB0;

    sub_0807E3CC((u8 *)0x03003520, 2 ^ base[0x61]);
    sub_08004EA0(0x846D);
    sub_080017EC(0xA4);
    base[0xB8] &= 0xFB;
    sub_08019DA0();
}

void sub_0801AE18(void) {
    u8 *base = (u8 *)0x03002AB0;
    u8 *state;

    sub_0807E3CC((u8 *)0x03003520, 2 ^ base[0x61]);
    sub_08004EA0(0x843F);
    state = D_03004830;
    state[0x2D]++;
    state[0x2B]++;
}
