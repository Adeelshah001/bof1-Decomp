extern u8 D_03002AB0[];

void sub_0807E3CC(u8 *, u32);
void sub_08004EA0(s32);
void sub_080017EC(s32);
void sub_08019DA0(void);

void sub_0801AE58(void) {
    u8 *obj = (u8 *)0x03003520;
    u8 *base = (u8 *)0x03002AB0;

    sub_0807E3CC(obj, 2 ^ base[0x61]);
    sub_08004EA0(0x846D);
    sub_080017EC(0xA4);
    base[0xB8] &= 0xFB;
    sub_08019DA0();
}

void sub_0801AE18(void) {
    u8 *state;

    sub_0807E3CC((u8 *)0x03003520, 2 ^ D_03002AB0[0x61]);
    sub_08004EA0(0x843F);
    state = D_03004830;
    state[0x2D]++;
    state[0x2B]++;
}
