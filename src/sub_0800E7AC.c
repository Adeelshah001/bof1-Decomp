// sub_0800E754
void sub_0800E754(void) {
    extern u8 D_03004830[];
    extern u8 D_03002AB0[];
    D_03004830[0x2D] = 1;
    D_03002AB0[0xB8] |= 4;
}

// sub_0800E7AC
void sub_0800E7AC(void) {
    extern u8 D_03004830[];
    extern u8 D_03002AB0[];
    D_03004830[0x2D] = 1;
    D_03002AB0[0xB8] |= 4;
    D_03004830[0x2A] = 0x0E;
    D_03004830[0x2B] = 0;
}

// sub_0800E808
void sub_0800E808(void *arg0) {
    extern u8 D_03004830[];
    if ((s8)D_03004830[0x2D] == 1) {
        *(s32 *)((u8 *)arg0 + 0x68) += 2;
    }
}

// sub_0800E87C
void sub_0800E87C(void *arg0) {
    extern u8 D_03004830[];
    if ((s8)D_03004830[0x2D] == 3) {
        *(s32 *)((u8 *)arg0 + 0x68) += 2;
    }
}
