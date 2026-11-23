extern u8 D_03002AB0[];
extern u8 D_03004830[];
void sub_08004EA0(s32 arg0);

void sub_0800F820(void) {
    D_03002AB0[0xB8] |= 8;
    D_03002AB0[0x1DC] |= 8;
    D_03002AB0[0x300] |= 8;
    D_03002AB0[0x424] |= 8;
}

void sub_0800F85C(s8 arg0) {
    D_03002AB0[0xB8] &= ~arg0;
    D_03002AB0[0x1DC] &= ~arg0;
    D_03002AB0[0x300] &= ~arg0;
    D_03002AB0[0x424] &= ~arg0;
}

void sub_0800F4B0(void) {
    if (--D_03004830[0x2C] == 0) {
        sub_08004EA0(0x82C0);
        D_03004830[0x2C] = 0x1E;
        D_03002AB0[0xB8] |= 4;
        D_03004830[0x2B]++;
    }
}

void sub_0800F484(void) {
    if (--D_03004830[0x2C] == 0) {
        D_03004830[0x2D] = 4;
        D_03004830[0x2C] = 0x20;
        D_03004830[0x2B]++;
    }
}
