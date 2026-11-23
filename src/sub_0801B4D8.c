extern u8 D_03004584;
extern u16 D_03001864;

void sub_08004EA0(s32);
void sub_08072CC4(s32);
void sub_0800518C(s32, s32, s32);

void sub_0801B50C(void) {
    sub_08004EA0(0x8497);
    D_03004830[0x2A] = 0x10;
    D_03004830[0x2B] = 0;
}

void sub_0801B4D8(void) {
    sub_08072CC4(0x5B42);
    if (D_03004584 == 0) {
        D_03004830[0x2C] = 0x20;
        D_03004830[0x2B]++;
    }
}

void sub_0801B494(void) {
    D_03001864 = 0x17;
    D_03004830[0x2C] = 0x46;
    D_03004830[0x2B]++;
}

void sub_0801B46C(void) {
    sub_0800518C(0x1BA, 0x368, -0x4164);
    D_03004830[0x2B]++;
}
