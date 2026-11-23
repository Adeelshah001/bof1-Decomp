extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern u8 D_03004584[];

void sub_08004EA0(s32);
void sub_080110CC(void);
void sub_0801DB3C(s32);
void sub_08072CC4(s32);
void sub_080017EC(s32);

void sub_080110DC(void) {
    u8 zero;
    D_03002AB0[0xB8] &= ((zero = 0), 0xFB);
    D_03004830[0x2A] = zero;
    D_03004830[0x2B] = zero;
}

void sub_08011100(void) {
    sub_08004EA0(0x82B5);
    D_03004830[0x2B]++;
}

void sub_080110A0(void) {
    if ((s8)D_03004830[0x2C] != 4) {
        sub_080110CC();
    } else {
        sub_0801DB3C(0x11);
        sub_080110CC();
    }
}

void sub_08011120(void) {
    sub_08072CC4(0x423);
    if (D_03004584[0] == 0) {
        u8 v;
        D_03004830[0x2D] = ((v = 2 + (D_03004830[0x2D] >> 8)), v | D_03004830[0x2D]);
        sub_080017EC(0x61);
        D_03004830[0x2C] = 5;
        D_03004830[0x2B]++;
    }
}
