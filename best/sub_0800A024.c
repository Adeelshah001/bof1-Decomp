extern u8 D_030023DC[];
extern u8 D_03004830[];
extern u8 D_030033F0[];

void sub_0800A0F8(void *arg0) {
    if (*D_030023DC != 1) {
        *(s32 *)((s8 *)arg0 + 0x68) += 2;
    }
}

void sub_0800A024(void *arg0) {
    if (*D_030033F0 != 2) {
        *(u8 *)((u32)D_03004830 + 0x2D) = 0;
    } else {
        *(u8 *)((u32)D_03004830 + 0x2D) = 1;
        *(s32 *)((s8 *)arg0 + 0x68) += 2;
    }
}
