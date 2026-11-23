extern u8 D_030023DC[];

void sub_08011740(void) {
    if (D_030023DC[0] == 1)
        return;
    D_03004830[0x2B]++;
}

void sub_08011754(void) {}
