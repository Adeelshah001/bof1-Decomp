extern u8 D_03002AB0[];
extern u8 D_03004830[];
s32 sub_08005140(void *arg0, s32 arg1);

void sub_0800E808(void *arg0) {
    if ((s8)D_03004830[0x2D] == 1) {
        *(u32 *)((u8 *)arg0 + 0x68) += 2;
    }
}

void sub_0800E824(void *arg0) {
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2D] = 0;
    *(u32 *)((u8 *)arg0 + 0x68) += 2;
}

void sub_0800E7E0(void) {
    D_03002AB0[0xB8] |= 4;
    D_03004830[0x2A] = 0x0A;
    D_03004830[0x2B] = 0;
}

void sub_0800E848(void *arg0) {
    if ((s8)D_03004830[0x2D] == 1) {
        sub_08005140(arg0, 0x814A);
        D_03004830[0x2D] += 1;
        *(u32 *)((u8 *)arg0 + 0x68) += 2;
    }
}
