extern u8 D_030045B0[];
extern u16 D_0300084C[];
extern void sub_08035B50(void);
extern s32 sub_08038458(s32);
extern void sub_08004EA0(s32);

void sub_0800E564(void) {
    D_030045B0[2] = 9;
    sub_08035B50();
    D_0300084C[0] = 0x96 << 1;
    D_03004830[0x2B]++;
}

void sub_0800E5CC(void) {
    D_03004830[0x31] = 2;
    D_03004830[0x2A] = 0;
    D_03004830[0x2B] = 0;
    D_03004830[0x2C] = 0;
    D_03004830[0x2D] = 0;
}

void sub_0800E5F0(void) {
    if (sub_08038458(1) != 0) {
        sub_08004EA0(0x81FB);
        D_03004830[0x2B]++;
    }
}

void sub_0800E87C(Entity *arg0) {
    if ((s8)D_03004830[0x2D] == 3) {
        arg0->unk68 += 2;
    }
}
