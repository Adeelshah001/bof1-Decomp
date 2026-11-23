// sub_0800E754
void sub_0800E754(void) {
    extern u8 D_03004830[];
    D_03004830[0x2D] = 1;
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

// sub_0800E6F8
void sub_0800E6F8(void) {
    extern u8 D_03004830[];
    D_03004830[0x2A] = 0x0E;
    D_03004830[0x2B] = 0;
}
