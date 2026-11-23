extern u8 D_03002AB0[];
extern u16 D_03004114;

void sub_080017EC(s32);
u8 sub_08019520(void *, void *);
void sub_08004EA0(s32);
void sub_0803ADA8(s32);

void sub_0801CA64(void) {
    D_03002AB0[0xB8] |= 4;
    D_03004830[0x2A] = 0;
    D_03004830[0x2D] = 3;
    sub_080017EC(0xB0);
}

void sub_0801CD90(s16 arg0) {
    D_03004830[0x2A] = arg0;
    D_03004830[0x2B] = arg0 >> 8;
    D_03002AB0[0xB8] |= 4;
    D_03004114 = 1;
}

void sub_0801C6FC(void) {
    u8 *base = D_03003420;
    sub_08019520(base, base + 0x100);
    if (sub_08019520(base + 0x80, base + 0x180) != 0) {
        D_03004830[0x2C] = 0x60;
        D_03004830[0x2B]++;
    }
}

void sub_0801CE3C(void) {
    if (--D_03004830[0x2C] == 0) {
        sub_08004EA0(0x8535);
        sub_0803ADA8(0x15);
        D_03004830[0x2D] = 0x80;
        D_03004830[0x2C] = 0x3C;
        D_03004830[0x2B]++;
    }
}
