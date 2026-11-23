extern u8 D_030023DC[];
extern u8 D_03004830[];
extern u8 D_030033F0[];

void sub_0800A0F8(void *arg0) {
    if (D_030023DC[0] != 1) {
        *(s32 *)((s8 *)arg0 + 0x68) += 2;
    }
}

void sub_0800A1A0(s32 arg0) {
    u8 *base = D_03004830;
    if ((s8)base[0x2A] == 0xC && (s8)base[0x2B] == 1) {
        sub_0800B0E0(arg0);
    }
}

void sub_0800A024(void *arg0) {
    if (D_030033F0[0] != 2) {
        D_03004830[0x2D] = 0;
    } else {
        D_03004830[0x2D] = 1;
        *(s32 *)((s8 *)arg0 + 0x68) += 2;
    }
}

void sub_08009FDC(s32 arg0) {
    u8 *base = D_03004830;
    if ((s8)base[0x2A] == 0xB && (s8)base[0x2B] == 2) {
        sub_0800B0E0(arg0);
    }
}
