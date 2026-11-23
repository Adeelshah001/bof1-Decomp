/* identical to sub_08007BA8 (matched), with its names changed by decompdecomp */
extern u8 D_03004830[];
extern void sub_08007494(void);

void sub_080087C0(void) {
    sub_08007494();
    D_03004830[0x2B]++;
}

void sub_08007BC0(void) {
    if ((s8)D_03004830[0x2C] == 0) {
        sub_08007494();
        D_03004830[0x2B]++;
    }
}

void sub_08007B8C(void) {
    if ((s8)D_03004830[0x2C] == 0) {
        sub_080087C0();
    }
}

void sub_08007BEC(void) {
    D_03004830[0x2C] = 0x20;
    D_03004830[0x2B]++;
}
