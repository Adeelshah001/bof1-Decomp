/* identical to sub_080089B8 (matched), with its names changed by decompdecomp */
extern u8 D_03003420[];
extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern u8 D_03004584[];
extern void sub_080017EC(s32);
extern void sub_08072CC4(s32);

void sub_08009348(void) {
    D_03004830[0x2B]++;
}

void sub_080089C8(void) {
    sub_080547DC(D_03003420, 2);
    D_03004830[0x2B]++;
    *(u32 *)(D_03002AB0 + 0x94) = 0x8037;
    D_030023D0[0] = 2;
}

void sub_08008970(void) {
    s8 state = (s8)D_03004830[0x2C];
    if (state == 0) {
        *(u32 *)(D_03002AB0 + 0x94) = 0x8033;
        D_030023D0[0] = 2;
        D_03004830[0x2A] = 3;
        D_03004830[0x2B] = state;
        sub_080017EC(0x26);
    }
}

void sub_08008A04(void) {
    sub_08072CC4(0x1902);
    if (D_03004584[0] == 0) {
        D_03004830[0x2B]++;
    }
}
